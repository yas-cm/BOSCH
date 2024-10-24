# Determine quantos grãos de arroz aparecem na imagem “arroz.jpg”.
# Para isso, crie um quadrado ao redor de cada um e mostre em um canto da tela,
# ao final, quantos grãos foram encontrados.

import cv2      #type: ignore
import numpy as np


arroz = cv2.imread('arroz.jpg')
arroz = cv2.resize(arroz, None, fx = 0.3, fy = 0.3) # Diminui o tamanho pra 30%
arrozPB_cinza = cv2.cvtColor(arroz, cv2.COLOR_BGR2GRAY)
blur = cv2.GaussianBlur(arrozPB_cinza, (7, 7), 0) 

retval,arrozPB = cv2.threshold(blur, 150, 255,cv2.THRESH_BINARY_INV)

C, h = cv2.findContours(arrozPB, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
copia = arroz.copy()

fonte = cv2.FONT_HERSHEY_PLAIN
linha = cv2.LINE_AA

cont = 0

altura, largura, canais = copia.shape

for cnts in C:
    # Obtendo retângulo referente ao contorno
    (x, y, w, h) = cv2.boundingRect(cnts)
    
    # Ignora contornos que sejam muito grandes, como o contorno da borda da imagem
    if w < largura - 10 and h < altura - 10:  # Ajuste para evitar contornos da borda
        cv2.rectangle(copia, (x, y), (x + w, y + h), (0, 0, 255), 2, cv2.LINE_AA)
        cont += 1

while True:
    cv2.putText(copia, f"Total: {cont}", (20,30), fonte, 1.5, (0,0,255), 1, linha)
    cv2.imshow('Contorno', copia)
    #cv2.imshow('arroz normal', arroz)
    x = cv2.waitKey(1) & 0xFF
    if x == 27:  # Esc
        break
cv2.destroyAllWindows()