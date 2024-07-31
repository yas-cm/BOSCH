while True:
    nota = int(input('Digite uma nota: '))
    if nota >= 0 and nota <= 10:
        print('ok')
        break
    print('Valor invalido! Tente novamente.')