# Crie um programa que faz um tracking (rastreamento) do pacman no vídeo
# “pacman.mp4”. Ele deverá apresentar as seguintes telas:
# a. Um recorte segmentado, onde aparece só o pacman se movimentando na tela
# b. O vídeo completo com o pacman sinalizado por um quadrado
# c. Ao final, salve o vídeo do pacman identificado.
# Ele deve ser salvo na mesma velocidade que o vídeo original –ou seja,
# se iniciarmos os vídeos ao mesmo tempo, eles devem ter o mesmo tempo
# e as mesmas movimentações
import cv2      #type: ignore
import numpy as np
def PegarFPS(video):
    # Abrindo o vídeo
    
    if not video.isOpened():
        print("Erro ao abrir o vídeo.")
        return None
    # Obtendo os FPS
    fps = video.get(cv2.CAP_PROP_FPS)
    # Liberando o vídeo

    return fps
    
pacman = cv2.VideoCapture('pacman.mp4')
fps = PegarFPS(pacman)

fourcc = cv2.VideoWriter_fourcc(*'XVID')
output = cv2.VideoWriter("PACman.avi", fourcc, fps, (480, 360))

# Definindo ranges para detectar amarelo
lower_range = (0, 200, 200)
upper_range = (50, 255, 255)


# Loop sobre os frames do vídeo
while True:
    ret, frame = pacman.read()  # Lendo o frame atual
    if not ret:
        break
    
    # Aplicando a máscara de cor
    mask = cv2.inRange(frame, lower_range, upper_range)
    alt,larg = mask.shape
    mask[alt-20:alt, :] = 0   #Cortando pra nn pegar os pacman de baixo

    
    # Segmentação
    segm = cv2.bitwise_and(frame, frame, mask=mask)
    
    C, h = cv2.findContours(mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    copia = frame.copy()

    altura, largura, canais = copia.shape

    for cnts in C:
        if cv2.contourArea(cnts) < 5: 
                continue
        (x, y, w, h) = cv2.boundingRect(cnts)
        maior = 5
        if y < altura -20 :  # Ajuste para evitar contornos da borda
            cv2.rectangle(copia, (x - maior, y - maior), (x + w + maior, y + h + maior), (0, 0, 255), 1, cv2.LINE_AA)
        
    output.write(copia)

    # Exibindo o frame original, a máscara e o objeto segmentado
    cv2.imshow('Objeto Segmentado', segm)
    cv2.imshow('Contorno', copia)
    
    if cv2.waitKey(35) & 0xFF == 27:  # Esc
        break

output.release()
pacman.release()
cv2.destroyAllWindows()