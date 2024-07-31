for k in range (1000,10000):
    p = k//100
    f = k%100
    som = p + f
    mult = som**2
    if mult == k:
        print('---> ',k)