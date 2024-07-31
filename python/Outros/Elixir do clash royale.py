print('Bem vindo ao codigo que vai te mostrar o peso do seu deck de Clash Royale!')
print()

soma = 0
for k in range (1, 9):
    carta = int(input(f'{k}° carta: '))
    print()
    soma = soma + carta

media = soma / k

print()
print(f'A quantidade de elixir medio que voce esta gastando eh: [{media:.2f}]')
print()

if media >= 4.5:
    print('Meu deus diminui isso ai')
    
elif media <= 3:
    print('Ta liso? ta economizando elixir pra q?')
    
elif 3 < media < 4.5:
    print('Um bom numero')
    

