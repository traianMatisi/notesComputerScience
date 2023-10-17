import math
"""
print('\nExemplo de import math')
n = float(input('\nRaiz de: ')) 
r = math.sqrt(n)
print(r)

print('\nDesafio 016')
n1 = float(input('\nNúmero decimal: '))
int1 = math.floor(n1)
print('\nSua parte inteira vale {}'.format(int1))

print('\nDesafio 017')
co = float(input('\nCateto oposto: '))
ca = float(input('Cateto adjacente: '))
h = math.hypot(co, ca)
print('\nHipotenusa = {:.3f}'. format(h))

print('\nDesafio 018a')
gr = float(input('\nÂngulo em graus: '))
angG = math.radians(gr)
sen = math.sin(angG)
cos = math.cos(angG)
tg = math.tan(angG)
print('Sen = {:.3f}'.format(sen))
print('Cos = {:.3f}'.format(cos))
print('Tg = {:.3f}'.format(tg))

print('\nDesafio 018b')
rd = float(input('\nÂngulo em radianos: '))
π = math.pi
angR = rd*π
sen = math.sin(angR)
cos = math.cos(angR)
tg = math.tan(angR)
print('π = {:.3f}'.format(π))
print('Sen = {:.3f}'.format(sen))
print('Cos = {:.3f}'.format(cos))
print('Tg = {:.3f}'.format(tg))
"""
"""
import audioop

import vlc
play = vlc.MediaPlayer('file:///storage/emulated/0/qpython/toqueMrRobot.mp3') 
start = input('Tocar música? [S/N] ')
if start == 'S':
    p.play(play)
    
import emoji
print('I :red_heart: python')

import pygame
pygame.init()
pygame.mixer.music.load(...)
pygame.mixer.music.play()
pygame.event.wait()

print('\nDesafio 019a')
import random
input1 = input('\nAperte enter para escolher aleatoriamente entre:\nLyan, Lucca, Leon ou nenhum')
print(random.choice(['Nenhum', 'Lucca', 'Leon', 'Lyan']))

print('\nDesafio 019b')
input2 = input('\nAperte enter para escolher aleatoriamente entre:\nAna, Bruno, Cíntia, Diego:')
rand = random.randint(1, 4)
if rand == 1:
    print('Ana')
elif rand == 2:
    print('Bruno')
elif rand == 3:
    print('Cíntia')
elif rand == 4:
    print('Diego')
"""
import random
print('\nDesafio 020')
input3 = input('\nAperte enter para criar lista aleatória dos alunos')
nomes = 'Ana, Bruna, Cíntia, Danny'.split()
ordem = random.shuffle(nomes)
print('\n', ordem)
