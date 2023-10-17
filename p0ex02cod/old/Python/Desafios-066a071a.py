from time import sleep
# from random import randint
'''
#########################################
sleep(1)
print('[' * 7 + ' Desafio 066 ' + ']' * 7)
sleep(1)

print('Para interromper, digite 999.')
c = s = 0
while True:
    n = int(input('Digite um valor: '))
    if n == 999:
        break
    s += n
    c += 1
print(f'Os {c} valores somam {s}')

#########################################
sleep(1)
print('[' * 7 + ' Desafio 067 ' + ']' * 7)
sleep(1)

print('Para sair, escolha número negativo')
while True:
    n = int(input('Escolha uma tabuada :'))
    if n < 0:
        break
    for c in range(1, 11):
        print(f'{n} x {c} =', n * c)
print('Fim do processo')

#########################################
sleep(1)
print('[' * 7 + ' Desafio 068 ' + ']' * 7)
sleep(1)

print('Par ou Ímpar')
compt = 0
while True:
    while pi not in 'pi'
    pi = input('Escolha par ou ímpar [p/i]: ').lower()
    if pi == 'p':
        oe = randint(0, 5)
        print(oe)
        eo = int(input('Escolha entre 0 e 5: ')) 
        r = oe + eo
        if r % 2 != 0:
            print(f'{r}: Ímpar, computador venceu!')
            break
        else:
            print(f'{r}: Par, você venceu')
            compt += 1
    elif pi == 'i':
        oe = randint(0, 5)
        print(oe)
        eo = int(input('Escolha entre 0 e 5: '))
        r = oe + eo
        if r % 2 == 0:
            print(f'{r}: Par, computador venceu!')
            break
        else:
            print(f'{r}: Ímpar, você venceu')
            compt += 1
print(f'Você conseguiu {compt} vitórias consecutivas')
print('Fim do processo')

from time import sleep
from random import randint

sleep(1)
print('[*7'+' Desafio 066 '+']*7')
sleep(1)

c = n = s = 0
while n != 999:
    n = int(input('Digite um valor: '))
    if n == 999:
        break
    s += n
    c += 1
print(f'Os {c} valores somam {s}')
sleep(1)
print('['*7 + ' Desafio 067 ' + ']'*7)
sleep(1)

print('Para sair, escolha número negativo')
n = 0
#c = 0
while True:
    n = int(input('Escolha uma tabuada :'))
    #c += 1
    if n < 0: #or c == 10:
        break
    #print(f'{n} x {c} =', n * c)
    for c in range(1, 11):
        print(f'{n} x {c} =', n * c)
print('Fim do processo')

sleep(1)
print('[' * 7+' Desafio 068 '+']' * 7)
sleep(1)

print('Par ou Ímpar')
oe = 0
eo = 0
compt = 0
while True:
    pi = input('Escolha par ou ímpar [p/i]: ').lower()
    if pi == 'p':
        oe = randint(0, 5)
        print(oe)
        eo = int(input('Escolha entre 0 e 5: ')) 
        r = oe + eo
        if r % 2 != 0:
            print(f'{r}: Ímpar, ganhei!')
            break
        else:
            print(f'{r}: Par, você venceu')
            compt += 1
    elif pi == 'i':
        oe = randint(0, 5)
        print(oe)
        eo = int(input('Escolha entre 0 e 5: '))
        r = oe + eo
        if r % 2 == 0:
            print(f'{r}: Par, ganhei!')
            break
        else:
            print(f'{r}: Ímpar, você venceu')
            compt += 1
print(f'Você conseguiu {compt} vitórias consecutivas')
print('Fim do processo')

#########################################
sleep(1)
print('[' * 7 + ' Desafio 069 ' + ']' * 7)
sleep(1)
major = 0
minor = 0
male = 0
female = 0
min20W = 0
while True:
    idade = int(input('Digite sua idade: '))
    sexo = ' '
    while sexo not in 'mf':
        sexo = str(input('Escolha seu sexo [f/m] ')).strip().lower()[0]
    if 18 <= idade < 20 and sexo == 'f':
        major += 1
        female += 1
        min20W += 1
        print('Cadastro realizado com sucesso.')
    elif idade < 18 and sexo == 'f':
        minor += 1
        female += 1
        min20W += 1
        print('Cadastro realizado com sucesso.')
    elif idade >= 20 and sexo == 'f':
        major += 1
        female += 1
        print('Cadastro realizado com sucesso.')
    if idade < 18 and sexo == 'm':
        minor += 1
        male += 1
        print('Cadastro realizado com sucesso.')
    elif idade >= 18 and sexo == 'm':
        major += 1
        male += 1
        print('Cadastro realizado com sucesso.')
    continuar = ' '
    while continuar not in 'sn':
        continuar = str(input('Deseja continuar [s/n] ')).strip().lower()[0]
    if continuar != 's':
        break
print(f'Dos cadastrados: {major} são maiores de 18 anos, {male} são homens, {min20W} são mulheres menores de 20')
print('Fim de processo')

#########################################
sleep(1)
print('[' * 7 + ' Desafio 070 ' + ']' * 7)
sleep(1)

total = 0
m1000 = 0
mprec = 0
cont = 0
mbar = ' '
while True:
    nom = str(input('Insira nome do produto: '))
    prec = float(input('Insira seu preço: R$ '))
    total += prec
    cont += 1
    if prec > 1000.00:
        m1000 += 1
    if cont == 1:
        mprec = prec
        mbar = nom
    elif cont > 1 and prec < mprec:
        mprec = prec
        mbar = nom
    quiter = ' '
    while quiter not in 'sn':
        quiter = input(str('Deseja continuar? [s/n]')).strip().lower()[0]
    if quiter == 'n':
        break
print(f'O total de suas compras é {total:.2f}, O {mbar} é o produto mais barato (R$ {mprec}), e {m1000} produtos '
      f'custam mais de R$ 1000,00.')
print('Fim de processo.')
'''

