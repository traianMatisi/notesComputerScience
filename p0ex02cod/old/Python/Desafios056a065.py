from time import sleep
from random import randint
'''
sleep(2)
print('-+-' * 4)
print('Desafio 057a')
print('-+-' * 4)
male = 0
female = 0
cond = True
print('Pra sair a qualquer momento, escreva Quit')
while cond == True:
    g = str(input('Escolha um gênero: [F/M] ')).upper()
    if g == 'F':
        female += 1
        total += 1
    elif g == 'M':
        male += 1
        total += 1
    elif g == 'QUIT':
        cond = False
    else:
        print('Entrada inválida, apenas [F/M]')
        cont = str(input('Deseja continuar? [S/N] ')).upper()
        if cont == 'S':
            cond = True
        else:
            cond = False
cont = str(input('Deseja continuar? [S/N] ')).upper()
if cont == 'N':
    cond = False
print('Registrados {} mulheres e {} homens.'.format(female, male))
print('Fim de processo')
'''
sleep(2)
print('-+-' * 4)
print('Desafio 058')
print('-+-' * 4)
numPens = randint(1, 1000)
print('Pensei em um número entre 1 e 1000 você pode tentar quantas vezes quiser')
cond = False
count = 0
while not cond:
    numAdv = int(input('Tente adivinhar: '))
    count += 1
    if numAdv == numPens:
        cond = True
        print('Parabéns, você acertou!')
    elif numPens < numAdv:
        print('Menor')
    elif numPens < numAdv and numAdv - numPens < 100:
        print('Menor, tá ficando quente.')
    elif numPens > numAdv:
        print('Maior')
    elif numPens > numAdv and numPens - numAdv < 100:
        print('Maior, tá ficando quente.') 
    else:
        print('Resposta inválida, tente de novo assim mesmo')
print('{} tentativas.'.format(count))
print('Ótimo jogo !')
'''
sleep(5)
print('-+-' * 4)
print('Desafio 059')
print('-+-' * 4)    	    	    	    	    	    		
func = True
while func == True:
    V1 = float(input('Digite um valor: '))
    Op = input("""
Escolha operação:
[  +  ] Soma
[  -  ] Subtração
[  x  ] Multiplicação
[  /  ] Divisão
[  f  ] Divisão inteira
[ mod ] Resto da divisão
[  ^  ] Potência
[  r  ] Raiz
[ log ] Logaritmo
[  >  ] É maior?
[  <  ] É menor?
[  =  ] É igual?
""")
    if Op == 'c' or Op == 's':
        func = False
    V2 = float(input('Digite o segundo valor: '))
    if Op == '+':
        result = V1 + V2
    elif Op == '-':
        result = V1 - V2
    elif Op == 'x':
        result = V1 * V2
    elif Op == '/' or Op == '÷':
        result = V1 / V2
    elif Op == 'f' or Op == '//':
        result = V1 // V2
    elif Op == 'm' or Op == '%':
        result = V1 % V2
    elif Op == '^':
        result = V1 ** V2
    elif Op == 'r':
        result = V1 ** (1/V2)
    elif Op == 'log':
        print('Trabalhando nos detalhes')
    elif Op == '>':
        print('O primeiro valor é maior do que o segundo?', V1 > V2)
    elif Op == '<':
        print('O primeiro valor é menor do que o segundo?', V1 < V2)
    elif Op == '=':
        print('O primeiro valor é igual ao segundo?', V1 == V2)
    print(result)
    Ipt = input('Deseja continuar operações? [s/n] ')
    if Ipt == 's':
        func = True
    else:
        func = False
print('Fim do processo')

sleep(5)
print('-+-' * 4)
print('Desafio 060a')
print('-+-' * 4)
fto = int(input('Digite um número p/ calcularmos seu fatorial: '))
FTO = [1]
count = fto + 1
cond = True
while cond == True:
    count -= 1
    FTO.append(count * FTO[-1])
    if count == 1:
        cond = False
print('Fatorial de {} = {}'.format(fto, FTO[-1]))
#print(count, x)
print('Fim do processo')

sleep(5)
print('-+-' * 4)
print('Desafio 060b')
print('-+-' * 4)
fto = int(input('Digite um número para calcularmos todos os fatoriais que existem até ele: '))
FTO = [1]
count = 0
cond = True
while cond == True:
    count += 1
    FTO.append(count * FTO[-1])
    if count == fto:
        cond = False
print(FTO[1:])
print('Fim do processo')

sleep(5)
print('-+-' * 4)
print('Desafio 061')
print('-+-' * 4)
print('\nVamos trabalhar com PA novamente.')
termo1 = float(input('Digite o primeiro termo da sua PA: '))
rz = float(input('Digite agora a razão dela: '))
count = 0
PA = []
PA.append(termo1)
while count < 9:
    count += 1
    PA.append(rz + PA[-1])
print('Eis os 10 primeiros termos dela')
print(PA)

sleep(5)
print('-+-' * 4)
print('Desafio 062')
print('-+-' * 4)
print('\nVamos trabalhar com PA novamente.')
termo1 = float(input('Digite o primeiro termo da sua PA: '))
rz = float(input('Digite agora a razão dela: '))
count = 0
PA = []
PA.append(termo1)
while count < 9:
    count += 1
    PA.append(rz + PA[-1])
print('Eis os 10 primeiros termos dela')
print(PA)
cond = True
while cond == True:
    opt = float(input('Gostaria de ver mais alguns termos? Quantos? '))
    if opt == 0:
        print('Fim de operação')
        break
    else:
        count = 0
        while count < opt:
            count += 1
            PA.append(PA[-1] + rz)
        print(PA)

sleep(5)
print('-+-' * 4)
print('Desafio 063')
print('-+-' * 4)
seqF = [0, 1]
count = 0
while count < 99:
    count += 1
    seqF.append(seqF[-1] + seqF[-2])
print(seqF)

sleep(5)
print('-+-' * 4)
print('Desafio 064')
print('-+-' * 4)
number = []
print('Quando quiser parar, digite 999')
cond = True
count = 0
while cond == True:
    input9 = float(input('Digite um número: '))
    count += 1
    number.append(input9)
    if input9 == 999:
        cond = False
print('Foram digitados {} números, que somam {}'.format((count - 1), sum(number[:-2])))

sleep(5)
print('-+-' * 4)
print('Desafio 065')
print('-+-' * 4)
numbers = []
print('Quando quiser parar, digite 999')
cond = True
count = 0
while cond == True:
    input9 = float(input('Digite um número: '))
    count += 1
    numbers.append(input9)
    if input9 == 999:
        cond = False
        numbers.pop()
print('O menor número é {}, o maior é {}, e a média entre a soma deles é {}.'.format(min(numbers), max(numbers), sum(numbers)/(count - 1)))
'''









