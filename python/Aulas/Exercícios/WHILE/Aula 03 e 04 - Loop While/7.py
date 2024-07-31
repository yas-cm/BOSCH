base = int(input('Digite a base: '))
exp = int(input('Digite o expoente: '))
i = 1
valor = 1
while i <= exp:
    valor = valor * base
    i = i + 1

print(f"{base} elevado a {exp} é igual a {valor}")