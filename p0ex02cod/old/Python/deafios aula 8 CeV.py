import math

# Exemplo
i1 = int(input('Digite um número para ter a raiz quadrada dele: '))
r = math.sqrt(i1)
print('{:.3f}'.format(r))

# Desafio 016
i2 = float(input('Digite um número: '))
f = math.floor(i2)
print('Floor = {:.3f}'.format(f))

# Desafio 017
print('Digite dois números, x e y: ')
i3_x = float(input('X: '))
i3_y = float(input('Y: '))
hipot = math.hypot(i3_x, i3_y)
print('Hipotenusa = {:.3f}'.format(hipot))

# Desafio 018
i4 = float(input('Escolha um angulo qualquer: '))
g = math.radians(i4)
tan = math.tan(g)
sen = math.sin(g)
cos = math.cos(g)
print('Tan = {:.3f}'.format(tan))
print('Sen = {:.3f}'.format(sen))
print('Cos = {:.3f}'.format(cos))
