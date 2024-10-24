# Sua tarefa é desenvolver um programa que permita ao usuário selecionar uma área específica
# da tela com o mouse e, ao pressionar a tecla Enter, capturar essa
# área e exibir a área selecionada em uma nova janela.

import cv2      #type: ignore
import numpy as np


def funcao(evento, x, y, flags, param):
    global xi, yi, xf, yf, selecionando
    
    if evento == cv2.EVENT_LBUTTONDOWN:  
        xi = x
        yi = y
        selecionando = True

    elif evento == cv2.EVENT_MOUSEMOVE:  
        if selecionando:
            xf = x
            yf = y
    
    elif evento == cv2.EVENT_LBUTTONUP:
        xf = x
        yf = y
        selecionando = False


xi = yi = xf = yf = 0
selecionando = False

arquivo = input("Digite o nome do arquivo (não esqueça do .jpg ou .png)\n-> ")
img = cv2.imread(arquivo)

cv2.namedWindow("Selecione para cortar")
cv2.setMouseCallback("Selecione para cortar", funcao)


while True:
    copia = img.copy()
    
    if selecionando:
        cv2.rectangle(copia, (xi, yi), (xf, yf), (0, 0, 0), 2)
    cv2.imshow("Selecione para cortar",copia)

    x = cv2.waitKey(1) & 0xFF
    if x == 13: # Enter
        if xi > xf: # Pra se for selecionar de baixo pra cima
            xi,xf = xf,xi
        if yi > yf:
            yi,yf = yf,yi
        imgCortada = img[yi:yf, xi:xf]

        cv2.imshow("cortado", imgCortada)
    elif x == 27:  # Esc
        break

cv2.destroyAllWindows()
