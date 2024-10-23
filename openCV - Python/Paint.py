# ARRUMAR
# Qnd salva mostrar o processo q a pessoa desenhou ->> deixar 15 segundos (lista?)
# Geometria
# Arrumar o bgr
# paleta de cor
# retangulinho de opções


import cv2      #type: ignore
import numpy as np


def funcao(event, x, y, flags, param):
    global r, g, b, cont, raio, fundo, op, t, frames
    if event == cv2.EVENT_LBUTTONDOWN:
        cont = cont + 1
    if event == cv2.EVENT_RBUTTONDOWN:
        if param == 'cores':
            if x >= 0 and x < cores.shape[1] and y >= 0 and y < cores.shape[0]:
                cores_pixel = cores[y, x] # Pega a cor do pixel na imagem color
                b = int(cores_pixel[0])
                g = int(cores_pixel[1])
                r = int(cores_pixel[2])
        if param == 'img':
            if x >= 0 and x < img.shape[1] and y >= 0 and y < img.shape[0]:
                img_pixel = img[y, x] # Pega a cor do pixel na imagem img
                b = int(img_pixel[0])
                g = int(img_pixel[1])
                r = int(img_pixel[2])

    if event == cv2.EVENT_MOUSEWHEEL:
        if flags > 0: # flags ve se o scroll ta indo pra cima ou pra baixo
            raio = raio + 5
            t = t + 5
        else:
            raio = raio - 5
            t = t - 5
            if raio < 5:
                raio = 5
                t = 5
        cv2.rectangle(img, (5,78) , (160,100) , (fundo) , -1)
        cv2.putText(img, f"tam = {t}%", (10,95), fonte, 1, (0,0,0), 1, linha)
        cv2.imshow("img",img)

    elif event == cv2.EVENT_MOUSEMOVE and cont % 2 == 0: 
            cv2.circle(img, (x,y) , raio , (b,g,r) , -1)
            cv2.imshow("img",img)
            output.write(img)
            frames = frames + 1

            
    elif event == cv2.EVENT_LBUTTONDBLCLK:
        b = fundo[0]
        g = fundo[1]
        r = fundo[2]
    
r = 0
g = 0
b = 0
cont = 1
raio = 5
fundo = [255,255,255]
op = 0
t = 5
frames = 0
lista = []

fourcc = cv2.VideoWriter_fourcc(*'XVID')
output = cv2.VideoWriter("paintando.avi", fourcc, 100, (910, 910))
# tempo do video = framesTotal/fps
# 10 * fps = ?

cv2.namedWindow("img")
cv2.namedWindow("cores")
cv2.setMouseCallback("img",funcao,param = 'img')
cv2.setMouseCallback("cores",funcao,param = 'cores')

img = np.full((910,910,3), (fundo), np.uint8)

cores = np.full((200,200,3), (255,255,255), np.uint8)
mascara = cv2.inRange(cores,(0,0,0),(255,255,255))

fonte = cv2.FONT_HERSHEY_COMPLEX_SMALL
linha = cv2.LINE_AA


legenda = np.full((300,450,3), (255,255,255), np.uint8)
cv2.putText(legenda, "'r' = Red", (10,20), fonte, 1, (0,0,0), 1, linha)
cv2.putText(legenda, "'g' = Green", (10,45), fonte, 1, (0,0,0), 1, linha)
cv2.putText(legenda, "'b' = Blue", (10,70), fonte, 1, (0,0,0), 1, linha)
cv2.putText(legenda, "'S' = Salvar", (10,95), fonte, 1, (0,0,0), 1, linha)
cv2.putText(legenda, "'C' = Carregar", (10,115), fonte, 1, (0,0,0), 1, linha)
cv2.putText(legenda, "'u' = Apagar tudo", (10,140), fonte, 1, (0,0,0), 1, linha)
cv2.putText(legenda, "Botao esquerdo: desenha", (10,165), fonte, 1, (0,0,0), 1, linha)
cv2.putText(legenda, "Botao esquerdo 2vzs: borracha", (10,190), fonte, 1, (0,0,0), 1, linha)
cv2.putText(legenda, "Botao direito: colorpick", (10,215), fonte, 1, (0,0,0), 1, linha)
cv2.putText(legenda, "Scroll: Aumenta/diminui o tam", (10,250), fonte, 1, (0,0,0), 1, linha)
cv2.imshow("legenda",legenda)


cv2.putText(img, "red = " + str(r), (10,20), fonte, 1, (0,0,0), 1, linha)
cv2.putText(img, "green = " + str(g), (10,45), fonte, 1, (0,0,0), 1, linha)  
cv2.putText(img, "blue = " + str(b), (10,70), fonte, 1, (0,0,0), 1, linha)
cv2.putText(img, f"tam = {t}%", (10,95), fonte, 1, (0,0,0), 1, linha)

# Texto img, (texto), (xi, yi), tipo_fonte, tamanho_fonte, cor, espessura, tipo_linha
cv2.imshow("img",img)

R = 0
G = 0
B = 0

volta = img.copy()

while True:

    x = cv2.waitKey(0)

    if chr(x) == 'r':
        if r == 255:
            R = 1
        if r == 0:
            R = 0
        if R == 1:
            r = r - 5
        else:
            r = r + 5   

    elif chr(x) == 'g':
        if g == 255:
            G = 1
        if g == 0:
            G = 0
        if G == 1:
            g = g - 5
        else:
            g = g + 5           
            
    elif chr(x) == 'b':
        if b == 255:    
            B = 1
        if b == 0:
            B = 0
        if B == 1:
            b = b - 5
        else:
            b = b + 5   
            
    if chr(x) == 'S': # Salvar
        try:
            op = int(input("Tem certeza que deseja salvar?[0 = nao ; 1 = sim]\n-> "))
        except ValueError:
            print("Opcao invalida!")
        else:
            if op == 0:
                print("Opcao selecionada: nao salvar")
                continue
            if op == 1:
                arquivo = input("Digite o nome do arquivo\n-> ")
                cv2.imwrite(arquivo+".jpg",img)
            else:
                print("Opcao invalida!")

    if chr(x) == 'C': # Carregar
        try:
            op = int(input("Gostaria de carregar um arquivo?[0 = nao ; 1 = sim]\n-> "))
        except ValueError:
            print("Opcao invalida!")
        else:
            if op == 0:
                print("Opcao selecionada: nao carregar")
                continue
            if op == 1:
                arquivo = input("Digite o nome do arquivo(nao esqueca do .jpg ou .png)\n-> ")
                img = cv2.imread(arquivo)

            else:
                print("Opcao invalida!")
    
    if chr(x) == 'u': # Apaga tudo
        img = volta.copy()

    cv2.imshow("img",img)
    
    cv2.rectangle(img, (5,5) , (160,75) , (fundo) , -1)
    cv2.putText(img, "red = " + str(r), (10,20), fonte, 1, (0,0,0), 1, linha)
    cv2.putText(img, "green = " + str(g), (10,45), fonte, 1, (0,0,0), 1, linha)  
    cv2.putText(img, "blue = " + str(b), (10,70), fonte, 1, (0,0,0), 1, linha)
    
    cores[mascara > 0] = (b,g,r)
    cv2.imshow("cores",cores)

    if x & 0xFF == 27: 
        break

output.release()
cv2.destroyAllWindows() 


cap = cv2.VideoCapture("paintando.avi")

while(cap.isOpened()):
    ret,frame = cap.read()
    # waitKey() --> tempo = framesTotal/fps
    
    if cv2.waitKey(5) == 27 or ret == False:
        cv2.waitKey()
        break
    cv2.imshow("paintando.avi",frame)

cap.release()
cv2.destroyAllWindows()
