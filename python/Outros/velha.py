# -*- coding: utf-8 -*-
"""
Created on Tue Apr 30 08:50:37 2024

@author: disrct
"""

print('Seja bem vindo(a) ao jogo da velha!!!')


while True:
    op1 = input('JOGADOR 1: [x / o]   -->   ')
    if op1 == 'x':
        print('JOGADOR 1 = [x]')
        print('JOGADOR 2 = [o]')
        break
    elif op1 == 'o':
        print('JOGADOR 1 = [o]')
        print('JOGADOR 2 = [x]')
        break
    

for k in range (3):
    for i in range (3):
        print(' _ ', end = '')
    print()
    
    
print('JOGADOR 1: ')
