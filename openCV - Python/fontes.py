import cv2
import numpy as np

# Definir dimensões da janela
window_width = 640
window_height = 480

# Criar uma janela em branco
frame = np.zeros((window_height, window_width, 3), dtype=np.uint8)

# Definir o texto e sua posição
text = "OpenCV Text Example"
font_scale = 1
color = (255, 255, 255)  # Branco
thickness = 2

# Usar diferentes fontes de texto
cv2.putText(frame, 'FONT_HERSHEY_SIMPLEX', (10, 50), cv2.FONT_HERSHEY_SIMPLEX, font_scale, color, thickness)
cv2.putText(frame, 'FONT_HERSHEY_PLAIN', (10, 100), cv2.FONT_HERSHEY_PLAIN, font_scale, color, thickness)
cv2.putText(frame, 'FONT_HERSHEY_DUPLEX', (10, 150), cv2.FONT_HERSHEY_DUPLEX, font_scale, color, thickness)
cv2.putText(frame, 'FONT_HERSHEY_COMPLEX', (10, 200), cv2.FONT_HERSHEY_COMPLEX, font_scale, color, thickness)
cv2.putText(frame, 'FONT_HERSHEY_TRIPLEX', (10, 250), cv2.FONT_HERSHEY_TRIPLEX, font_scale, color, thickness)
cv2.putText(frame, 'FONT_HERSHEY_COMPLEX_SMALL', (10, 300), cv2.FONT_HERSHEY_COMPLEX_SMALL, font_scale, color, thickness)
cv2.putText(frame, 'FONT_HERSHEY_SCRIPT_SIMPLEX', (10, 350), cv2.FONT_HERSHEY_SCRIPT_SIMPLEX, font_scale, color, thickness)
cv2.putText(frame, 'FONT_HERSHEY_SCRIPT_COMPLEX', (10, 400), cv2.FONT_HERSHEY_SCRIPT_COMPLEX, font_scale, color, thickness)

# Exibir o frame com os diferentes textos
cv2.imshow('Fonts Example', frame)

# Esperar uma tecla para fechar
cv2.waitKey(0)
cv2.destroyAllWindows()
