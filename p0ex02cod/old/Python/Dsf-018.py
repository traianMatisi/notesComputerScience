from math import radians, sin, cos, tan
n = float(input('\nDigite o ângulo: '))
print(f'''\n
Sen = {sin(radians(n)):.3f}
Cos = {cos(radians(n)):.3f}
Tan = {tan(radians(n)):.3f}
''')
