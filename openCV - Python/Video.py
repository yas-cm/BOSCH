import cv2
import numpy as np

cap = cv2.VideoCapture("gatinho.mp4")

pausar = False

while(cap.isOpened()):
    if not pausar: # se pausar for Falso
        ret,frame = cap.read()

        if not ret:
            cap.set(cv2.CAP_PROP_POS_FRAMES, 0)
            continue

        cv2.imshow("gatinho",frame)

    # waitKey() --> tempo = 1000/fps
    x = cv2.waitKey(5)
    if x == ord('v'):
        cap.set(cv2.CAP_PROP_POS_FRAMES, 0)  # Volta para o primeiro quadro
    elif x == 27:
        break
    elif x == ord('p'):
        pausar = not pausar # inverte oq tiver no pausar
        


cap.release()
cv2.destroyAllWindows()


# Criando videos:

#fourcc = cv2.VideoWriter_fourcc(*'XVID') 
#output = cv2.VideoWriter("exercicio.avi",fourcc,5.0, (500,500)) # precisa ser .avi

# "nome.avi", fourcc, fps , tamanho 
# tempo do video = framesTotal/fps


# pra mandar um novo fps pro video ->> output.write(img)