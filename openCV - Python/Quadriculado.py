import cv2
import numpy as np
import random

def funcao(event, x, y, flags, param):
    global b1, g1, r1, b2, g2, r2
    if event == cv2.EVENT_LBUTTONDOWN: # Se pressionar o botao
        b1 = random.randint(0,255)
        g1 = random.randint(0,255)
        r1 = random.randint(0,255)
        b2 = b1 + 100
        g2 = g1 + 100
        r2 = r1 + 100
    if event == cv2.EVENT_RBUTTONDOWN:
        print(f"Cor (+escuro) :{r1,g1,b1}\nCor (+claro)  :{r2,g2,b2}\n\n")

b1 = 0
g1 = 0
r1 = 0
b2 = 0
g2 = 0
r2 = 0

cv2.namedWindow("img")
cv2.setMouseCallback("img",funcao)

while True:
    img = np.zeros((512,512,3), np.uint8)

    for i in range (5,512,15):
        for j in range (0,512,15):
            cv2.line(img, (i,j) , (i,512) , (b1,g1,r1) , 5)

    for i in range (0,512,15):
        for j in range (5,512,15):
            cv2.line(img, (i,j) , (512,j) , (b2,g2,r2) , 5)
     
    cv2.imshow("img",img)
    if cv2.waitKey(10) & 0xFF == 27: # So fecha dps de 10 segundos com o esc
        break


cv2.destroyAllWindows() # Fecha a imagem


