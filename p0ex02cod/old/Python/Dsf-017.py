from math import pow, sqrt, hypot
x = float(input('\nDigite 1o cateto: '))
y = float(input('\nDigite 2o cateto: '))
print(f'\nA hipotenusa vale {((x**2)+(y**2))**(1/2)}')
print(f'\nA hipotenusa vale {sqrt(pow(x,2)+pow(y,2))}')
print(f'\nA hipotenusa vale {hypot(x,y)}')
