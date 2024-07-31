segundos = int(input('Digite o tempo em segundos: '))


hora = segundos//3600
minuto = (segundos%3600)//60
seg = ((segundos%3600)%60)%60

print('{:02.0f}h {:02.0f}min {:02.0f}seg'.format(hora,minuto,seg))



