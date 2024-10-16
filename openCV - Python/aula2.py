import cv2
import numpy as np
import random

def funcao(event, x, y, flags, param):
    global b, g, r
    if event == cv2.EVENT_LBUTTONDOWN: # Se pressionar o botao
        b = random.randint(0,255)
        g = random.randint(0,255)
        r = random.randint(0,255)


b = 0
g = 0
r = 0


cv2.namedWindow("janela") # Cria uma janela
cv2.setMouseCallback("janela",funcao) # Analisar os eventos do mouse / oq faz qnd acontece o evento do mouse (clique)


while True:
    img = np.full((512,512,3), (b,g,r), np.uint8) # Cria tela na cor q quiser
    cv2.imshow("janela",img)
    if cv2.waitKey(10) & 0xFF == 27: # So fecha dps de 10 segundos com o esc
        break
cv2.destroyAllWindows() # Fecha a imagem