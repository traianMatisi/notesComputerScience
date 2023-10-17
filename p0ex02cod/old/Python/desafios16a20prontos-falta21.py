import math

pi = math.pi

print('\nExemplo import math')
n = float(input('\nRaiz de '))
r = math.sqrt(n)
print(r)

print('\nDesafio 016')
nd = float(input('\nNúmero decimal: '))
ni = math.floor(nd)
print('\nA parte inteira dele é {}'.format(ni))

print('\nDesafio 017a')
co = float(input('\nCateto oposto: '))
ca = float(input('Cateto adjacente: '))
h = math.hypot(co, ca)
print('Hipotenusa = {}'.format(h))

print('\nDesafio 017b')
cy = float(input('\nCateto oposto: '))
cx = float(input('Cateto adjacente: '))
hz = (((cy**2) + (cx**2))**(1/2))
print('\nHipotenusa = {}'.format(hz))

print('\nDesafio 018a')
angDg = float(input('\nÂngulo em graus: '))
dg = math.radians(angDg)
sen = math.sin(dg)
cos = math.cos(dg)
tan = math.tan(dg)
print('Sen = {:.3f}'.format(sen))
print('Cos = {:.3f}'.format(cos))
print('Tan = {:.3f}'.format(tan))

print('\nDesafio 018b')
print(pi)
angRd = float(input('\nÂngulo em radianos: '))
rd = math.pi * angRd
sen = math.sin(rd)
cos = math.cos(rd)
tan = math.tan(rd)
print('Sen = {:.3f}'.format(sen))
print('Cos = {:.3f}'.format(cos))
print('Tan = {:.3f}'.format(tan))

print('\nDesafio 019a')
import random
enter1 = input('\nAperte enter pra sortear um filho: ')
print(random.choice(['Nenhum', 'Lyan', 'Leon', 'Lucca']))
enter2 = input('\nAperte enter para sortear um nome: ')
sort = int(random.randint(1, 4))
print(sort)
if sort == 1:
    print('Ana')
elif sort == 2:
    print('Bruna')
elif sort == 3:
    print('Cíntia')
elif sort == 4:
    print('Danny')

print('\nDesafio 020')
enter3 = input('\nOrdem aleatória dos nomes: aperte enter.')
alunos = 'Traian Thomas Martina Sandra Lucia Luciano Saura'.split()
ordem = random.shuffle(alunos)
print('\n', alunos)
