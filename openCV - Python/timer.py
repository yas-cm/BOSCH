import cv2
import numpy as np
import time

tempo_inicial = time.time() # Pega o tempo de inicio (vida real msm)
pausa = False

tempo_pausa = 0

cv2.namedWindow("img")
img = np.full((150,300,3), (0,0,0), np.uint8)

fonte = cv2.FONT_HERSHEY_PLAIN
linha = cv2.LINE_AA

cv2.putText(img, "CRONOMETRO", (17,40), fonte, 2.5, (255,255,255), 2, linha)
cv2.imshow("img",img)

while True:
    default = img.copy() # Copia pra nn sobrepor

    if not pausa: # Se nao tiver pausado
        tempo_decorrido = time.time() - tempo_inicial 
        # Se era 9:21 qnd eu iniciei, e agr sao 9:22 ele vai subtrair e o tempo decorrido é 1
    else:
        tempo_decorrido = tempo_pausa - tempo_inicial
        # Se pausar ele vai colocar o tempo decorrido como o tempo q era qnd pausou
    
    minutos = int(tempo_decorrido // 60)
    segundos = int(tempo_decorrido % 60)
    milissegundos = int((tempo_decorrido * 1000) % 1000)    

    texto_tempo = f'{minutos:02}:{segundos:02}:{milissegundos:03}'

    tamanho_texto = cv2.getTextSize(texto_tempo, fonte, 3, 2)[0]
    x = (300 - tamanho_texto[0]) // 2
    y = (190 + tamanho_texto[1]) // 2

    cv2.putText(default,texto_tempo, (x,y), fonte, 3, (255,255,255), 2, linha)

    

    x = cv2.waitKey(5)
    if x == 27:
        break
    elif x == ord('p'):
        if pausa:
            tempo_inicial = tempo_inicial + time.time() - tempo_pausa
            # Soma o tempo q tava e tira a diferença do tempo q passou durante a pausa
            pausa = False
        else:
            tempo_pausa = time.time() # Tempo q era qnd pausou
            pausa = True
    elif x == ord('r'):
        tempo_inicial = time.time() 
        pausa = False
        tempo_pausa = 0

    cv2.imshow("img",default)
    
cv2.destroyAllWindows()
