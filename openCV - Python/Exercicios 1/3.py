import cv2
import numpy as np


def funcao(event, x, y, flags, param):
    global r, g, b
    if event == cv2.EVENT_LBUTTONDOWN: 
        cv2.circle(img, (x,y) , 25 , (b,g,r) , -1)
        cv2.imshow("img",img)
r = 0
g = 0
b = 0



cv2.namedWindow("img")
cv2.setMouseCallback("img",funcao)
img = np.full((512,512,3), (255,255,255), np.uint8)

texto1 = "red = " + str(r)
texto2 = "green = " + str(g)
texto3 = "blue = " + str(b)
fonte = cv2.FONT_HERSHEY_SIMPLEX
linha = cv2.LINE_AA
cv2.putText(img, texto1, (10,20), fonte, 0.5, (0,0,0), 1, linha)
cv2.putText(img, texto2, (10,40), fonte, 0.5, (0,0,0), 1, linha)
cv2.putText(img, texto3, (10,60), fonte, 0.5, (0,0,0), 1, linha)
# Texto img, (texto), (xi, yi), tipo_fonte, tamanho_fonte, cor, espessura, tipo_linha


while True:
    x = cv2.waitKey(0)
    if chr(x) == 'r':
        if r > 255:
            r = 0
        else:
            r = r + 5
            texto = "red = " + str(r)
            cv2.rectangle(img, (10,5) , (100,25) , (255,255,255) , -1)
            cv2.putText(img, texto, (10,20), fonte, 0.5, (0,0,0), 1, linha)

    elif chr(x) == 'g':
        if g > 255:
            g = 0
        else:
            g = g + 5
            texto = "green = " + str(g)
            cv2.rectangle(img, (10,25) , (120,45) , (255,255,255) , -1)
            cv2.putText(img, texto, (10,40), fonte, 0.5, (0,0,0), 1, linha)

    elif chr(x) == 'b':
        if b > 255:
            b = 0
        else:
            b = b + 5
            texto = "blue = " + str(b)
            cv2.rectangle(img, (10,45) , (120,65) , (255,255,255) , -1)
            cv2.putText(img, texto, (10,60), fonte, 0.5, (0,0,0), 1, linha)

    cv2.imshow("img",img)

    if x & 0xFF == 27: 
        break


cv2.destroyAllWindows() # Fecha a imagem