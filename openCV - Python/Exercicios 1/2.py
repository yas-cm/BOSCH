import cv2
import numpy as np


def funcao(event, x, y, flags, param):
    global xf, yf
    if event == cv2.EVENT_LBUTTONDBLCLK: 
        xi = x - 25
        yi = y - 25
        xf = xi + 50
        yf = yi + 50
        cv2.rectangle(img, (xi,yi) , (xf,yf) , (110,94,63) , -1)

    if event == cv2.EVENT_MOUSEWHEEL: 
        cv2.circle(img, (x,y) , 25 , (108,190,235) , -1)
xi = 0   
xf = 0
yi = 0
yf = 0

cv2.namedWindow("img")
cv2.setMouseCallback("img",funcao)
img = np.full((512,512,3), (255,255,255), np.uint8)

while True:
    cv2.imshow("img",img)
    if cv2.waitKey(10) & 0xFF == 27: # So fecha dps de 10 segundos com o esc
        break


cv2.destroyAllWindows() # Fecha a imagem