# -*- coding: utf-8 -*-
"""
Created on Tue Apr 30 11:13:49 2024

@author: disrct
"""


for k in range (10,1000):
    if k < 100:
        um = k //10
        dois = (k%10)**2
        res = um + dois
        if res == k:
            print(k)
    else:
        um = k // 100
        dois = ((k%100)//10)**2
        tres = ((k%100)%10)**3
        res = um + dois + tres
        if res == k:
            print(k)

