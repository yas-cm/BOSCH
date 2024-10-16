import cv2
import numpy as np # Pra desenhar imagens

# --- Ler e mostrar a imagem ---
imagem_colorida = cv2.imread("Imagens\yodinha.jpg")
imagem_cinza = cv2.imread("Imagens\yodinha.jpg",0)
#imagem_transparente = cv2.imread("Imagens\yodinha.jpg",-1)

cv2.imshow("Yodinha colorido",imagem_colorida)
cv2.imshow("Yodinha cinza",imagem_cinza)
#cv2.imshow("Yodinha transparente",imagem_transparente)

# ----------------------------------------------------------------

# gato_normal = cv2.imread("Imagens\programagato.png")
# gato_cinza = cv2.imread("Imagens\programagato.png",0)
# cv2.imshow("Programagato normal:",gato_normal)
# cv2.imshow("Programagato cinza:",gato_cinza)

# dog_normal = cv2.imread("Imagens\programacao.jpg")
# dog_cinza = cv2.imread("Imagens\programacao.jpg",0)
# cv2.imshow("Programacao normal:",dog_normal)
# cv2.imshow("Programacao cinza:",dog_cinza)

# ----------------------------------------------------------------

# --- Cortar a imagem ---
imagem = cv2.imread("Imagens\yodinha.jpg")
print("Tamanho original",imagem.shape) #Tamanho original da fto

imagem_cut = imagem[25:175, 150:350]
print("Tamanho do corte", imagem_cut.shape)

cv2.imshow("Yodinha",imagem)
cv2.imshow("Yodinha cortado",imagem_cut)

# --- Formas ---
img = np.zeros((512,512,3), np.uint8)

# Linhas (xi, yi), (xf, yf), (cor), (espessura)
cv2.line(img, (150,0) , (150,512) , (135,82,106) , 5)
cv2.line(img, (350,0) , (350,512) , (135,82,106) , 5)

cv2.line(img, (0,150) , (512,150) , (135,82,106) , 5)
cv2.line(img, (0,350) , (512,350) , (135,82,106) , 5)

# Retangulo (xi, yi), (xf, yf), (cor), (espessura)
cv2.rectangle(img, (200,200) , (300,300) , (110,94,63) , -1)

# Circulo (x, y), raio, (cor), (espessura)
cv2.circle(img, (75,75) , 50 , (108,190,235) , -1)

# Texto (texto), (xi, yi), tipo_fonte, tamanho_fonte, cor, espessura, tipo_linha
texto = "OpenCVzando"
fonte = cv2.FONT_HERSHEY_SIMPLEX
linha = cv2.LINE_AA
cv2.putText(img, texto, (190,490), fonte, 1.5, (108,190,235), 4, linha)

cv2.imshow("Jogo da velha",img)


# Sempre tem que ter esses comandos no final (senao vai crachar)
 
while True:
    if chr(cv2.waitKey(10000)) == "x": # O 100000 mil significa q vai esperar 100 segundos pra digitar, senao fecha sozinho (0 = infinito)
        break
    else:
        x = cv2.waitKey(0) # Espera ate que a tecla x seja pressionada


cv2.destroyAllWindows() # Fecha a imagem