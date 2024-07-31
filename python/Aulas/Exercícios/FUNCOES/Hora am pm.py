def transformation(hora):
    if hora[0] > '12':
        nova_hora = int(hora[0]) - 12
        if nova_hora < 10:
            print(f'--> 0{nova_hora}:{hora[1]} pm')
        else:
            print(f'--> {nova_hora}:{hora[1]} pm')
    else:
        print(f'--> {hora[0]}:{hora[1]} am')




while True:
    try:
        hora = input("Digite a hora [hh:mm]\n--> ")
        if hora[2] == ':' and hora[0:1].isnumeric() and hora[3:4].isnumeric():
            hora = hora.split(':')
            if hora[0] <= '23' and hora[0] >= '00' and hora[1] < '60' and hora[1] >= '00':
                break
    except IndexError:
        print("Valor invalido! ")
    else:
        print("Valor invalido!")


transformation(hora)