import cv2


def zoom(img, zoomando):
    h, w = img.shape[:2]
    
    # Evita zoom out além do limite da imagem
    if zoomando < 1.0:
        zoomando = 1.0

    nova_largura = int(w * zoomando)
    nova_altura = int(h * zoomando)

    img_zoomada = cv2.resize(img, (nova_largura, nova_altura), interpolation=cv2.INTER_LINEAR)

    inicio_x = (nova_largura - w) // 2
    inicio_y = (nova_altura - h) // 2

    # Evita o corte fora do limite da imagem
    if inicio_x < 0:
        inicio_x = 0
    if inicio_y < 0:
        inicio_y = 0

    img_cortada = img_zoomada[inicio_y:inicio_y + h, inicio_x:inicio_x + w]

    return img_cortada


def mouse_callback(event, x, y, flags, param):
    global zoomando
    if event == cv2.EVENT_MOUSEWHEEL:
        if flags > 0:  # Scroll para cima +
            zoomando *= 1.1  
        else:  # Scroll para baixo -
            zoomando /= 1.1 

        # Aplica o zoom e atualiza a imagem exibida
        img_zoomada = zoom(imagem_original, zoomando)
        cv2.imshow('Imagem com Zoom', img_zoomada)

zoomando = 1.0
arquivo = input("Digite o nome do arquivo (não esqueça do .jpg ou .png)\n-> ")
imagem_original = cv2.imread(arquivo)

cv2.namedWindow('Imagem com Zoom')
cv2.setMouseCallback('Imagem com Zoom', mouse_callback)

cv2.imshow('Imagem com Zoom', imagem_original)

while True:
    # Aguarda até que uma tecla seja pressionada
    if cv2.waitKey(1) & 0xFF == 27:  # Pressione 'ESC' para sair
        break

cv2.destroyAllWindows()
