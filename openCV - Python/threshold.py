import cv2      #type: ignore
import numpy as np

# Carrega a imagem base
imagem = cv2.imread('arroz.jpg', cv2.IMREAD_GRAYSCALE)
imagem = cv2.resize(imagem, None, fx = 0.3, fy = 0.3)
# Verifica se a imagem foi carregada corretamente
if imagem is None:
    print("Erro ao carregar a imagem. Verifique o nome do arquivo.")
    exit()

# Definir o valor do limite (threshold)
limiar = 127

# Aplicar os diferentes tipos de threshold
_, thresh_binary = cv2.threshold(imagem, limiar, 255, cv2.THRESH_BINARY)
_, thresh_binary_inv = cv2.threshold(imagem, limiar, 255, cv2.THRESH_BINARY_INV)
_, thresh_trunc = cv2.threshold(imagem, limiar, 127, cv2.THRESH_TRUNC)
_, thresh_tozero = cv2.threshold(imagem, limiar, 255, cv2.THRESH_TOZERO)
_, thresh_tozero_inv = cv2.threshold(imagem, limiar, 255, cv2.THRESH_TOZERO_INV)

# Exibir as imagens com diferentes thresholds
cv2.imshow("Original", imagem)
cv2.imshow("THRESH_BINARY", thresh_binary)
cv2.imshow("THRESH_BINARY_INV", thresh_binary_inv)
cv2.imshow("THRESH_TRUNC", thresh_trunc)
cv2.imshow("THRESH_TOZERO", thresh_tozero)
cv2.imshow("THRESH_TOZERO_INV", thresh_tozero_inv)

# Aguardar até que uma tecla seja pressionada e fechar todas as janelas
cv2.waitKey(0)
cv2.destroyAllWindows()
