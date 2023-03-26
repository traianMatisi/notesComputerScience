import random
import time
import math
pi = math.pi
# PRIMEIRO PROGRAMA PRÓPRIO

print('OLÁ MEU CARO!')
print('Escolha um número na sua mente entre 1 e 100.')
print('Não me fale ele, mantenha-o APENAS na sua mente.')
mstep1 = input('Já escolheu? Aperte enter')
print('Se escolheu, multiplique ele por 2.')
print('Use papel se você precisar.')
mstep2 = input('Não me diga o resultado, aperte enter quando você terminar')
print('Próximo passo, some 10 ao resultado da multiplicação.')
print('Não me fale o resultado.')
mstep3 = input('Conseguiu fazer a conta? Aperte enter')
print('Penúltimo passo, divida o resultado obtido por 2.')
mstep4 = input('Aperte enter quando você terminar.')
print('Chegamos ao último passo.')
print('Do resultado obtido até agora, subtraia o número que vc pensou inicialmente.')
mstep5 = input('Conseguiu? Aperte enter para eu adivinhar a resposta.')
print('O resultado final da sua conta dá 5.')
print('Matemática é magica!')
mstep6 = input('Aperte enter para rodar as lições de python')

"""LEARN PYTHON IN 1 DAY AND LEARN IT WELL – BOOK 01

run the command "import this" to see the zen of python
take that shit to heart
hit RUN and enjoy"""

# print the words -Hello, world!-
print('Hello, world!')
# prints the numbers -123-
print(123)
# msg and num will be variables to the following formats
msg = 'Hello, world!'
num = 123
# simple print variable
print(msg)
print(num)
# python2 print format, including float
print('%s' % msg)
print('%1d' % num)
print('%2.3f' % num)
# current python3 print format, including float
print('{0:s}'.format(msg))
print('{0:1d}'.format(num))
print('{0:2.3f}'.format(num))

# comentário1
# comentário2
# comentário3
'''
comentário4
comentário5
comentário6
'''
"""
comentário7
comentário8
comentário9
"""
print('Abra esse script para ler os 9 comentários')

userName0 = 'Traian'
userAge0 = 35
userName1, userAge1 = 'Sandra', 33
print('{0:s}, {1:1d}'.format(userName0, userAge0))
print('{0:s}, {1:1d}'.format(userName1, userAge1))
print('{0:s}, {1:1.2f}'.format(userName0, userAge0))
print('{0:s}, {1:1.2f}'.format(userName1, userAge1))
"""
x = 5
y = 10
x = y
print('x =', x)
print('y =', y)

x = 5
y = 10
y = x
print('x =', x)
print('y =', y)
"""
print('Operadores aritméticos')
x = float(input('Digite um número Real: '))
y = float(input('Digite outro numero Real: '))
z = float(input('Digite mais um número Real: '))
print('x = {0:1.3f}'.format(x))
print('y = {0:1.3f}'.format(y))
print('z = {0:1.3f}'.format(z))
print('x + y =', x + y)
print('x - y =', x - y)
print('y - x =', y - x)
print('x * y =', x * y)
print('x ** y =', x ** y)
print('y ** x =', y ** x)
print('x / y =', x / y)
print('y / x =', y / x)
print('x // y =', x // y)
print('y // x =', y // x)
print('x % y =', x % y)
print('y % x =', y % x)
# pesquisar (y % x) pois não entendo o resultado ser 2 quamdo usei x=5 e y=2

str0 = '\'any words\''
int0 = 3
float0 = 3.0
bool0 = 'True or False'
print('Strings are writen like this-> {:s}.'.format(str0))
print('Integers like this-> {:2d}.'.format(int0))
print('Floats like this-> {:2.3f}.'.format(float0))
print('And Booleans can be {:s}.'.format(bool0))

name = 'Traian'
nick = '13thRyan'
print('Uppercase-->', name.upper())
print('Lowercase-->', name.lower())
print('Upper-->', nick.upper())
print('Upper-->', nick.lower())
print(type(nick))

a = 'Yan'
b = 13
c = 0.333333333
d = '15'
e = '1.666'
print('{}, {}, {}, {}, {}.'.format(a, b, c, d, e))
print(str(a))
print(float(b))
print(int(c))
print(int(d))
print(float(e))
# print(int(e))

# LISTS uses braquets [ ]
# TUPLES uses parentesis ( )
# DICTIONARIES uses keys { } or parentesis like this -> subject = dict()
# to avoid creating loose variables, we make lists/tuples/dictionaries
eu = 'Yan'
pai = 'Seu Vaz'
mae = 'Don\'Ana'
esposa = 'Sandrão'
irma = 'Tina'
irmao = 'Thominha'
cunhada = 'Manu'
enteado0 = 'Enzo'
enteado1 = 'Poron'
enteado2 = 'Pukinho'
enteada0 = 'Gabi'
enteada1 = 'Marcelinha'
exSandra = 'Waltim'
Camila = 'Pomba lesada'
# emptyList2Fill = []
# myFamilyNames = ['Traian', 'Marcos', 'Ana', 'Sandra', 'Martina', 'Thomas', 'Manuelle', 'Lyan', 'Leon', 'Lucca']
myFamilyNicks = [eu, pai, mae, esposa, irma, irmao, cunhada, enteado0, enteado1, enteado2, enteada0, enteada1, exSandra,
                 Camila]
# print(myFamilyNames)
print(myFamilyNicks)
# print(emptyList2Fill)
# nearFamily = myFamilyNames [1:6]
# kidsFamily = myFamilyNames [7:12]
# print(nearFamily, kidsFamily, emptyList2Fill)
# myFamilyNames[0] = 'Zahir'
# print(myFamilyNames)
# myFamilyNames.append('Luigi')
# myFamilyNames.append(cunhada)
# print(myFamilyNames)
print(myFamilyNicks)
print(myFamilyNicks[-1])
del myFamilyNicks[12:14]
print(myFamilyNicks)
print(myFamilyNicks[-1])

# LISTS uses braquets [ ]
# TUPLES uses parentesis ( )
# DICTIONARIES uses keys { } or parentesis like this -> subject = dict()
# to avoid creating loose variables, we make lists/tuples/dictionaries
emptyTuple = ()
# mD = int(01, 02, 03, 04, 05, 06, 07, 08, 09, 10, 11, 12)
mA = ('jan', 'fev', 'mar', 'abr', 'mai', 'jun', 'jul', 'ago', 'set', 'out', 'nov', 'dez')
# mC = ('janeiro', 'fevereiro', 'março', 'abril', 'maio', 'junho', 'julho', 'agosto', 'setembro', 'outubro',
# 'novembro', 'dezembro')
sA = ('dom', 'seg', 'ter', 'qua', 'qui', 'sex', 'sab')
print('Me informa a data do seu nascimento, nessa ordem: ')
dia = input('Dia ')
mes = input('Mês ')
ano = input('Ano ')
print('Suas respostas foram, {0}, {1}, {2}.'.format(dia, mes, ano))
print(emptyTuple)
print(sA)
# print(mD)

# LISTS uses braquets [ ]
# TUPLES uses parentesis ( )
# DICTIONARIES uses keys { } or parentesis like this -> subject = dict() 
# to avoid creating loose variables, we make lists/tuples/dictionaries
emptyDictio1 = {}
emptyDictio2 = dict()
mesesAbrevNum_1 = {'jan': '01', 'fev': '02', 'mar': '03', 'abr': '04', 'mai': '05', 'jun': '06', 'jul': '07',
                   'ago': '08', 'set': '09', 'out': '10', 'nov': '11', 'dez': '12'}
mesesAbrevNum_2 = {'jan': 1, 'fev': 2, 'mar': 3, 'abr': 4, 'mai': 5, 'jun': 6, 'jul': 7, 'ago': 8, 'set': 9, 'out': 10,
                   'nov': 11, 'dez': 12}
'''
nos dicionários acima, tive que modificar os numeros para serem strings para fazer funcionar.
MOTIVO, zero na frente do numero inteiro é INVALID TOKEN
Já no dicionário abaixo, onde há números não se aceita strings sem aspas (nos exemplos abaixo há strings sem aspas)
IMPORTANTE NOTAR, um mesmo dicionário não pode ter dois itens iguais, mas respostas sim.
Contudo, dois dicionários DIFERENTES podem ter o mesmo item, com definições iguais.
'''
# mesesComplNum_1 = dict(janeiro = 01, fevereiro = 02)
mesesComplNum_2 = dict(janeiro=1, fevereiro=2, março=3, abril=4, maio=5, junho=6, julho=7, agosto=8, setembro=9,
                       outubro=10, novembro=11, dezembro=12)
print(mesesAbrevNum_1)
print(mesesAbrevNum_2)
# print(mesesComplNum_1)
print(mesesComplNum_2)
print(mesesAbrevNum_1['jun'])
print(mesesAbrevNum_2['jun'])
print(emptyDictio1)
print(emptyDictio2)
emptyDictio1['janeiro'] = '01'
emptyDictio1['jan'] = '01'
emptyDictio2['domingo'] = 'dom'
emptyDictio2['segunda'] = 'seg'
print(emptyDictio1)
print(emptyDictio2)
finalDictioMes = {'janeiro': '01', 'jan': '01', '01': '01', 1: '01'}
print(finalDictioMes)
'''
A sintaxe abaixo tbm é invalida, o primeiro item tem q ser string
'''
# optionalDictioMes = (1 = janeiro, 2 = fevereiro)
# print(optionalDictioMes)
'''
Os testes abaixo funcionam. Testei em arquivo separado
'''
"""
myDict = {'One':1.35, 2.5:'two point five', 3:'+', 7.9:2}
print(myDict)
print(myDict['One'])
print(myDict[7.9])
print(myDict[2.5])
myDict[2.5] = 'two and a half'
print(myDict[2.5])
myDict['new item'] = 'i\'m new'
print(myDict)
del myDict['One']
print(myDict)
otherDict = dict(One = 1.35)
anotherDict = dict(2.5 = 'two point five')
print(otherDict)
print(anotherDict)
"""

# IF STATEMENT INDENTED
userInput = int(input('Digite 1 ou 0: '))
if userInput == 1:
    print('Hello, world!')
    print('You pressed 1')
    print('You must be Anonymous')
elif userInput == 0:
    print('Hello, friend!')
    print('You pressed 0')
    print('You must be fsociety')
else:
    print('You didn\'t pressed a valid number. Try again')

# IF STATEMENT LINEAR
ageInput = int(input('How old do you think she is?'))
age = 'Correct' if ageInput == 35 else 'Wrong'
print(age)

userInput = int(input('How old do you think I am? '))
correct = 'Nailed it' if userInput == 35 else 'Nah, give it another shot.'
print(correct)
# In "1 line IF statement", print() doesn't have indentation, EVER

idade = input('Chute minha idade. ')
resposta = 'Correto' if idade == '35' else 'Errado'
print(resposta)

# Loop pets
pets = ['Cats', 'Dogs', 'Hamsters', 'Rabbits']
for myPets in pets:
    print(myPets)


# Indexes de myPets
for index, myPets in enumerate(pets):
    print(index, myPets)
# Ambos métodos muito discrepantes. Se puder sempre refrescar a memória.

meses = {'Jan': '01', 'Fev': '02', 'Mar': '03', 'Abr': '04', 'Mai': '05', 'Jun': '06', 'Jul': '07', 'Ago': '08',
         'Set': '09', 'Out': '10', 'Nov': '11', 'Dez': '12'}
for mes in meses:
    print(mes)
    print('Mês = {0:s}, Num = {1:s}'.format(mes, meses[mes]))
#    print('Mês = %s, num = %s' %(mês, meses[mês]))


# CURSO EM VIDEO

# AULA 04

print('Desafio 001')
print('Hello, friend.')
nome = input('Me informe seu nome, por gentileza: ')
print('Prazer em te conhecer {}, eu me chamo Zahir e sou um software bem simples.'.format(nome))
print('Eu vou te perguntar alguns dados pra testar se eu estou funcionando direitinho.')

print('Desafio 002')
print('Me informa sua data de nascimento, nessa ordem')
dia = input('Dia:')
mes = input('Mês:')
ano = int(input('Ano completo (4 digitos):'))
anoHj = 2021
idadeVc = anoHj - ano
print('A data do seu nascimento formatada ficaria {}/{}/{}.'.format(dia, mes, ano))
print('E se vc já fez aniversário está com {} anos de idade.'.format(idadeVc))

print('Desafio 003')
idadeOutrem = int(input('Me informa a idade de qualquer outra pessoa:'))
somaIdades = idadeVc + idadeOutrem
print('Vocês dois juntos somam {} anos de idade no total.'.format(somaIdades))

print('Desafio003 (da aula anterior (aula 4))')

x = float(input('Digite um número real x: '))
y = float(input('Agora outro número y: '))
soma = x + y
print('A soma entre {1:2.3f} e {0:2.3f} vale aproximadamente {2:2.3f}'.format(x, y, soma))

a = float(input('Digite um número R: '))
b = float(input('Digite outro número R: '))
c = b + a
print('A soma entre {1:1.3f} e {0:1.3f} vale aproximadamente {2:1.3f}.'.format(a, b, c))

# AULA 06

print('Prática aula6')
n1 = input('Digite um número: ')
print(type(n1))
print(n1)
n1 = int(input('Digite ele novamente: '))
print(type(n1))
print(n1)
n1 = float(input('Digite ele mais uma vez: '))
print(type(n1))
print(n1)
n1 = bool(input('Penúltima vez, repete ele: '))
print(type(n1))
print(n1)
n1 = str(input('E agora pela última vez: '))
print(type(n1))
print(n1)

print('Desafio004')
n2 = input('Digite qualquer coisa: ')
print('É numérico?:', n2.isnumeric())
print('É letra?:', n2.isalpha())
print('É alfanumérico?:', n2.isalnum())
print('É maiuscula?:', n2.isupper())
print('É minúscula?:', n2.islower())
print('É digito?:', n2.isdigit())
print('É decimal?:', n2.isdecimal())
print('É identifier?:', n2.isidentifier())
print('É imprimível?:', n2.isprintable())
print('É espaço?:', n2.isspace())
print('Inicia com maiúscula?:', n2.istitle())
# print('É ASCII?:', n2.isascii())

dados = input('Digite o que você quiser: ')
print('O tipo primitivo (class) desse dado é:', type(dados))
print('Esse dado só possui espaços?', dados.isspace())
print('Esse dado só possui números?', dados.isnumeric())
print('É alfabético?', dados.isalpha())
print('É alfanumérico?', dados.isalnum())
print('São maiúsculas?', dados.isupper())
print('São minúsculas?', dados.islower())
print('Está capitalizada?', dados.istitle())
print('Procure outras definições em IDLEs e livros e seja feliz!')

x = float(input('Digite um número Real: '))
y = float(input('Digite outro numero Real: '))
z = float(input('Digite mais um número Real: '))
print('x = {0:1.3f}'.format(x))
print('y = {0:1.3f}'.format(y))
print('z = {0:1.3f}'.format(z))
print('x + y =', x + y)
print('x - y =', x - y)
print('y - x =', y - x)
print('x * y =', x * y)
print('x ** y =', x ** y)
print('y ** x =', y ** x)
print('x / y =', x / y)
print('y / x =', y / x)
print('x // y =', x // y)
print('y // x =', y // x)
print('x % y =', x % y)
print('y % x =', y % x)
print('=' * 23)
print('Olá, ' * 3, 'meu amigo.')
nome = input('Qual é o seu nome? ')
print('Segue abaixo algumas formatações com o input dado')
print('Olá, {0:s}!'.format(nome))
print('Olá, {0:20s}!'.format(nome))
print('Olá, {0:>20s}!'.format(nome))
print('Olá, {0:<20s}!'.format(nome))
print('Olá, {0:^20s}!'.format(nome))
print('Olá, {0:=20s}!'.format(nome))
# print('Olá, {0:=>20s}!'.format(nome))
# print('Olá, {0:=<20s}!'.format(nome))
# print('Olá, {0:=^20s}!'.format(nome))
print('Olá, {0:*^20s}!'.format(nome))
print('Olá, {0:a^20s}!'.format(nome))
print('Fuchique o código', end=' >>> ')
print('pra descobrir mais')

print('Desafio 005')
numA = int(input('Digite um número inteiro (Z): '))
suc = numA + 1
ant = numA - 1
print('Seu sucessor é {2:d}, seu antecessor é {0:d} e o número digitado foi {1:d}.'.format(ant, numA, suc))

print('Desafio 006')
numB = float(input('Digite um número real (R) que vc conheça a raiz quadrada pra te ajudar a entender: '))
dobro = 2 * numB
triplo = 3 * numB
raiz2 = numB ** (1 / 2)
print('Seu dobro vale {0:.3f}, o triplo {1:.3f} e sua raiz aproximadamente {2:.5f}.'.format(dobro, triplo, raiz2))

print('Desafio 007')
p1 = float(input('Quanto você tirou na P1? '))
p2 = float(input('E na optativa (P2)? '))
media = (p1 + p2) / 2
print('Sua média  é {:.1f}.'.format(media))

print('Desafio 008')
m = float(input('Digite sua altura em metros (apenas números): '))
km = m / 1000
hm = m / 100
dam = m / 10
dm = m * 10
cm = m * 100
mm = m * 1000
print('{0:.2f}m convertido vale {1:.0f} cm e/ou {2:.0f} mm.'.format(m, cm, mm))
print('Outras conversões: km = {0:.5f}, hm = {1:.4f}, dam = {2:.3f}, dm = {3:.1f}.'.format(km, hm, dam, dm))

print('Desafio 009')
t = int(input('Escolha e digite um número inteiro (Z) para exibirmos sua tabuada: '))
print('#' * 15)
print('{} x {:2} = {}'.format(t, 1, t * 1))
print('{} x {:2} = {}'.format(t, 2, t * 2))
print('{} x {:2} = {}'.format(t, 3, t * 3))
print('{} x {:2} = {}'.format(t, 4, t * 4))
print('{} x {:2} = {}'.format(t, 5, t * 5))
print('{} x {:2} = {}'.format(t, 6, t * 6))
print('{} x {:2} = {}'.format(t, 7, t * 7))
print('{} x {:2} = {}'.format(t, 8, t * 8))
print('{} x {:2} = {}'.format(t, 9, t * 9))
print('{} x {:2} = {}'.format(t, 10, t * 10))
print('#' * 15)

print('Desafio 010')
dindin = float(input('Quanto de dinheiro você tem? (se não tiver nada, invete uma quantia). R$:'))
usd = dindin / 5.35
print('Você pode comprar {:.2f} dólares.'.format(usd))

print('Desafio 011')
print('Me indique a altura e largura de uma parede')
larg = float(input('Largura: '))
alt = float(input('Altura: '))
m2 = alt * larg
tint = m2 / 2
print('Sua parede de {0:.2f} x {1:.2f} tem {2:.1f}m².'.format(alt, larg, m2))
print('Serão necessários {0:.1f} litros de tinta para pintá-la.'.format(tint))

print('Desafio 012')
preco = float(input('Me fale o preço de algo, R$:'))
desc = preco * (5 / 100)
precoFinal = preco - desc
print('Com desconto de 5%, ele agora custa {:.2f}.'.format(precoFinal))

print('Desafio 013')
sal = float(input('Quanto você ganha por mês em R$:'))
aumento = sal * (15 / 100)
salFinal = sal + aumento
print('Com um aumento de 15% você passará a ganhar R${:.2f}.'.format(salFinal))

print('Desafio 014')
e = input('Escolha uma escala de temperatura, digite C, F ou K: ')
t = float(input('Agora designe um valor numérico para {}: '.format(e)))
if e == 'C':
    f = (t * 1.8 + 32)
    k = (t + 273.15)
    print('Convertendo {0:.1f}{1:s} para Fahrenheit teremos {2:.1f}°F.'.format(t, e, f))
    print('Já se convertermos para kelvin teremos {:.2f}K.'.format(k))
elif e == 'c':
    f = (t * 1.8 + 32)
    k = (t + 273.15)
    print('Convertendo {0:.1f}{1:s} para Fahrenheit teremos {2:.1f}°F.'.format(t, e, f))
    print('Já se convertermos para kelvin teremos {:.2f}K.'.format(k))
elif e == 'F':
    c = ((t - 32) / 1.8)
    k = (c + 273.15)
    print('Convertendo {0:.1f}{1:s} para Celsius teremos {2:.1f}°C.'.format(t, e, c))
    print('Já se convertermos para kelvin teremos {:.2f}K.'.format(k))
elif e == 'f':
    c = ((t - 32) / 1.8)
    k = (c + 273.15)
    print('Convertendo {0:.1f}{1:s} para Celsius teremos {2:.1f}°C.'.format(t, e, c))
    print('Já se convertermos para kelvin teremos {:.2f}K.'.format(k))
elif e == 'K':
    c = (t - 273.15)
    f = (c * 1.8 + 32)
    print('Convertendo {0:.1f}{1:s} para Celsius teremos {2:.1f}°C.'.format(t, e, c))
    print('Já se convertermos para fahrenheit teremos {:.1f}°F.'.format(f))
elif e == 'k':
    c = (t - 273.15)
    f = (c * 1.8 + 32)
    print('Convertendo {0:.1f}{1:s} para Celsius teremos {2:.1f}°C.'.format(t, e, c))
    print('Já se convertermos para fahrenheit teremos {:.1f}°F.'.format(f))
else:
    print('Você digitou algo errado, tente novamente.')

#  AULA 08

print('Exemplo')

# Ou from math impor function
i1 = int(input('Digite um número para ter a raiz quadrada dele: '))
r = math.sqrt(i1)
print('{:.3f}'.format(r))

print('Desafio 15')
dias = int(input('Digite a quantidade de dias que o carro esteve alugado: '))
dist = float(input('Digite a quilometragem rodada pelo carro durante o aluguel: '))
custo = (dias * 60.00) + (dist * .15)
print('O total a pagar é R${0:.2f}.'.format(custo))

print('Exemplo import math')
n = float(input('Raiz de '))
r = math.sqrt(n)
print(r)

print('Desafio 016')
nd1 = float(input('Número decimal a: '))
print('A parte inteira de a é {}'.format(int(nd1)))

nd2 = float(input('Número decimal b: '))
ni = math.floor(nd2)
print('A parte inteira dele é {}'.format(ni))

nd3 = float(input('Número decimal c: '))
nt = math.trunc(nd3)
print('A parte inteira dele é {}'.format(nt))

print('Desafio 017a')
co = float(input('Cateto oposto: '))
ca = float(input('Cateto adjacente: '))
h = math.hypot(co, ca)
print('Hipotenusa = {}'.format(h))

print('Desafio 017b')
cy = float(input('Cateto oposto: '))
cx = float(input('Cateto adjacente: '))
hz = (((cy ** 2) + (cx ** 2)) ** (1 / 2))
print('Hipotenusa = {}'.format(hz))

# python lê inputs apenas radianos, precisamos converter de graus para radianos
print('Desafio 018a')
angDg = float(input('Ângulo em graus: '))
dg = math.radians(angDg)
sen = math.sin(dg)
cos = math.cos(dg)
tan = math.tan(dg)
print('Sen = {:.3f}'.format(sen))
print('Cos = {:.3f}'.format(cos))
print('Tan = {:.3f}'.format(tan))

print('Desafio 018b')
print(pi)
angRd = float(input('Ângulo em radianos: '))
rd = math.pi * angRd
dgC = math.degrees(rd)
sen = math.sin(rd)
cos = math.cos(rd)
tan = math.tan(rd)
print('Sen {0:.1f} = {1:.3f}'.format(dgC, sen))
print('Cos {0:.1f} = {1:.3f}'.format(dgC, cos))
print('Tan {0:.1f} = {1:.3f}'.format(dgC, tan))

print('Desafio 019a')

aluno1 = str(input('\nAluno 01: '))
aluno2 = str(input('\nAluno 02: '))
aluno3 = str(input('\nAluno 03: '))
aluno4 = str(input('\nAluno 04: '))
alunos = [aluno1, aluno2, aluno3, aluno4]
sort = random.choice(alunos)
print('O sorteado foi {}'.format(sort))

print('Desafio 019b')
enter1 = input('Aperte enter pra sortear um filho: ')
print(random.choice(['Nenhum', 'Lyan', 'Leon', 'Lucca']))

print('Desafio 019c')
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

print('Desafio 020a')
fam1 = str(input('Nome parente 1: '))
fam2 = str(input('Nome parente 2: '))
fam3 = str(input('Nome parente 3: '))
fam4 = str(input('Nome parente 4: '))
fam5 = str(input('Nome parente 5: '))
fam6 = str(input('Nome parente 6: '))
fam7 = str(input('Nome parente 7: '))
familia = [fam1, fam2, fam3, fam4, fam5, fam6, fam7]
# random.shuffle(familia)
# ordem = random.shuffle(familia)
print(familia)

print('Desafio 020b')
enter3 = input('Ordem aleatória dos nomes: aperte enter.')
noix = 'Traian Thomas Martina Sandra Lucia Luciano Saura'.split()
random.shuffle(noix)
# embaralhado = random.shuffle(noix)
print(noix)
print('Desafio 021')
print('Warning: Xing stream size off by more than 1%, fuzzy seeking may be even more fuzzy than by design!')
pygame.init()
pygame.mixer.music.load('mix17.mp3')
pygame.mixer.music.play()
pygame.event.wait()
# Aula 009 - Teoria
f = str('Traian Matisi de Lima Vaz')
print(f)
# análise
print('length')
print(len(f))
print('Total a:')
print(f.count('a'))
print('Find a')
print(f.find('a'))
print('Total e:')
print(f.count('e'))
print('Total i:')
print(f.count('i'))
print('Total o:')
print(f.find('o'))
print('find Vaz')
print(f.find('Vaz'))
print('find Silva')
print(f.find('Silva'))
# print(f.in('Matisi'))
print(f.replace('Vaz', 'Silva'))

# g = f.replace('Vaz', 'Silva'))
# print(g)

# upper
# lower
# capitalize
# title
# strip
# lstrip
# rstrip

# índice
print(f[9])
# contar e fatiar

print(f[9:25:2])
print(f[::2])
print(f[9::2])
print(f[0:25:3])
# print(f.replace('Silva')

f = 'Curso em Vídeo Python'
# Fatiamento
print(f)
print(f[9])
print(f[9:13])
print(f[9:21])
# mover para experimento: print(f[9:210])
# mover para experimento: print(f[-9:210])
# mover para experimento: print(f[-15:15])
print(f[9:21:2])
print(f[:5])
print(f[15:])
print(f[9::3])
# Análise
print(len(f))
print(f.count('o'))
print(f.count('o', 0, 13))
print(f.find('deo'))
print(f.find('Android'))
print(f.find('Python'))
print('Android' in f)
print('Python' in f)
# Transformação
print(f.replace('Python', 'Android'))
print(f.upper())
# print(f.upper('Python'))
# print(f.upper(15, 21))
print(f.lower())
print(f.capitalize())
print(f.title())
g = '   Aprenda Python  '
print(g)
print(g.strip())
print(g.rstrip())
print(g.lstrip())
# Divisão
print(f)
print('-'.join(f))
print(f.split())
# print(f.split(FAZER EXPERIMENTOS))
print('-'.join(f))
print("""\nThe Zen of Python, by Tim Peters

Beautiful is better than ugly.
Explicit is better than implicit.
Simple is better than complex.
Complex is better than complicated.
Flat is better than nested.
Sparse is better than dense.
Readability counts.
Special cases aren't special enough to break the rules.
Although practicality beats purity.
Errors should never pass silently.
Unless explicitly silenced.
In the face of ambiguity, refuse the temptation to guess.
There should be one-- and preferably only one --obvious way to do it.
Although that way may not be obvious at first unless you're Dutch.
Now is better than never.
Although never is often better than *right* now.
If the implementation is hard to explain, it's a bad idea.
If the implementation is easy to explain, it may be a good idea.
Namespaces are one honking great idea -- let's do more of those!""")
print(f)
print(f.count('o'))
print(f.count('O'))
print(f.upper().count('o'))
print(f.upper().count('O'))
print(f.find('o'))
print(f.find('O'))
print(f.upper().find('o'))
print(f.upper().find('O'))
# comparar e experimentar com "find", "count", e "'str' in variable"
h = 'Yan'
print(h)
h = h.replace('Yan', 'Ian')
print(h)
"""
# Aula 009 - Experimentos
frase = input('Digite uma frase, ou seu nome completo: ')
ped_salto = int(input('E quantas letras pediremos para pular? '))
salto = ped_salto + 1
l_frase = int(len(frase))
last_index = int((l_frase) - 1)
print('Variável "frase": {}'.format(frase))
print('length de "frase" = {}'.format(l_frase))
print('Slice de frase[0:{}:{}]'.format(l_frase, salto), frase[0:l_frase:salto])
print('Legenda do slice acima: [ 1º caractére : 2º caractére : 3º caractére ] todos números int')
print('1º caractére, index = 0 (sempre)')
print('2º caractére, index = {} (length da frase)'.format(l_frase))
print('3º caractére, {} (salto pedido + 1)'.format(salto))
print('Slice de frase[:{}:1]'.format(l_frase), frase[:l_frase:salto])
print('Slice de frase[0::1]', frase[0::salto])
print('Slice de frase[0:{}:]'.format(l_frase), frase[0:l_frase:salto])
print('Slice de frase[0:{}]'.format(l_frase), frase[:l_frase])
print('Slice de frase[:{}]'.format(l_frase), frase[0:])
print('Slice de frase[9]', frase[9])
print('Slice de frase[:]', frase[:])
# print('Slice de frase[]', frase[])
print('Primeiro index 0 = frase[0]: {}'.format(frase[0]))
print('Ultimo index {0} (??) = frase[{0}]: {0}'.format(last_index, frase[last_index]))
print('O último index se refere o length - 1, a contagem acontece entre as letra e não nelas')
indexInput = int(input('Escolha um index entre 1 e {}: '.format(len(frase) - 2)))
print('Index {0} = frase[{0}]: {1}'.format(indexInput, frase[indexInput]))
"""
"""
print('Desafio 022')
nome1 = str(input('Digite o nome completo de alguém: '))
length = int(len(nome1))
spaces = int(nome1.count(' '))
letters = length - spaces
print('Total de letras = {}.'.format(letters))
print('Em maiúsculas: ', nome1.upper())
print('Em minúsculas: 'nome1.lower())
splitName = nome1.split()
firstName = splitName[0]
print('Seu primeiro nome é {} e ele possui {} letras'.format(splitName[0], len(firstName)))

print('Desafio 023a')
n = ('Digite um número entre 0 e 9999: ')
m = n // 1000 % 10
c = n // 100 % 10
d = n // 10 % 10
u = n // 1 % 10
print('{} milhar'.format(m))
print('{} centenas'.format(c))
print('{} dezenas'.format(d))
print('{} unidades'.format(u))

print('Desafio 023b')
numero = input('Digite um número ente 0 e 9999: ')
if len(numero) == 4:
    print('{} milhar'.format(numero[0]))
    print('{} centenas'.format(numero[1]))
    print('{} dezenas'.format(numero[2]))
    print('{} unidades'.format(numero[3]))
elif len(numero) == 3:
    print('{} centenas'.format(numero[0]))
    print('{} dezenas'.format(numero[1]))
    print('{} unidades'.format(numero[2]))
elif len(numero) == 2:
    print('{} dezenas'.format(numero[0]))
    print('{} unidades'.format(numero[1]))
elif len(numero) == 1:
    print('{} unidades'.format(numero[0]))

print('Desafio 024')
cidade = input('Escreva o nome de uma cidade: ').strip()
print(cidade)
split = cidade.upper().split()
if split[0] == 'SANTO':
    print('Essa cidade começa com a palavra Santo')
elif split[0] == 'SANTOS':
    print('Essa cidade começa com Santos, no plural, e não Santo')
else:
    cid = cidade.capitalize().split()
    print('Essa cidade não começa com Santo e sim {}'.format(cid[0]))

print('Desafio 025')
nome2 = input('Digite outro nome completo: ').upper().strip()
print('SILVA' in nome2)
silva = nome2.find('SILVA')
print('O nome não possui Silva nele') if silva == -1 else print('O nome possui Silva nele')
"""
print('Desafio 026')
frase = input('Digite uma frase: ')
print(frase)
lenf = len(frase)
frase.lower().find('a')
if frase.lower().find('a') == -1:
    print('A frase não possui letras a.')
else:
    print('Comprimento da frase: {} digitos.'.format(len(frase)))
    index = int(frase.lower().find('a'))
    print('A frase possui {} letras a.'.format(frase.lower().count('a')))
    print('Sua primeira ocorrência acontece na posição {}, (índice {}).'.format(index + 1, index))
    frase_ = frase[::-1]
    index_ = int(frase_.lower().find('a'))
    lenf_ = int(len(frase_))
    print('Sua última ocorrência é na posição {} (espaços e sinais inclusos).'.format(lenf_ - index_))
"""
print('Desafio 027')
nome3 = input('Digite outro nome completo: ')
ns = nome3.split()
print(ns[0])
print(ns[-1])
"""
print('Desafio 028')
print('Processando...')
time.sleep(5)
num_guess = random.randint(0, 5)
input_guess = int(input('Pensei em um número de 0 a 5, tente adivinhá-lo: '))
print('{}, acertou.'.format(num_guess)) if num_guess == input_guess else print('Errou! Pensei no {}.'.format(num_guess))

print('Desafio 029')
leV = float(input('Digite a velocidade lida em km/h: '))
if leV > 80:
    multa = (leV - 80.00) * 7
    print('Você foi multado por excesso de velocidade ({:.2f} km/h).'.format(leV))
    print('Valor a pagar: R$ {:.2f}.'.format(multa))
else:
    print('Dirija com cuidado, respeite o limite de velocidade. Boa viagem.')

print('Desafio 030')
n = float(input('Digite um número para eu falar se ele é par ou impar: '))
ua = int(n % 2)
print('Par') if ua == 0 else (print('Ímpar'))

print('Desafio 031')
distV = float(input('Qual a distância em km da viagem realizada: '))
if distV <= 200.00:
    print('Valor a ser cobrado: R${:.2f}.'.format(distV * .5))
else:
    print('Valor a ser cobrado: R$ {:.2f}.'.format(distV * .45))

print('Desafio 032')
anoInput = float(input('Digite um ano qualquer: '))
biss = int(anoInput % 4)
print(biss)
print('É ano bissexto.') if biss == 0 else print('Não é ano bissexto')
# import datetime
# date.time().year
print('Desafio 032a')
anoInput = float(input('Digite um ano qualquer: '))
biss1 = int(anoInput % 4)
biss2 = int(anoInput % 400)
biss3 = int(anoInput % 100)
print('É ano bissexto.') if biss1 == 0 and biss3 != 0 or biss2 == 0 else print('Não é ano bissexto')

print('Desafio 033')
print('Digite 3 números quaisquer.')
nn1 = float(input('N1: '))
nn2 = float(input('N2: '))
nn3 = float(input('N3: '))
print(nn1, nn2, nn3)
if nn1 < nn2 < nn3:
    print('Maior {}, menor {}'.format(nn3, nn1))
elif nn3 < nn2 < nn1:
    print('Maior {}, menor {}'.format(nn1, nn3))
elif nn2 < nn1 < nn3:
    print('Maior {}, menor {}'.format(nn3, nn2))
elif nn3 < nn1 < nn2:
    print('Maior {}, menor {}'.format(nn2, nn3))
elif nn1 < nn3 < nn2:
    print('Maior {}, menor {}'.format(nn2, nn1))
elif nn2 < nn3 < nn1:
    print('Maior {}, menor {}'.format(nn1, nn2))
else:
    print('Fim')
# verificar quantos ifs elifs, elses, ands e ors podem existir num bloco condicional

print('Desafio 034a')
sala = float(input('Salário do funcionário: R$'))
if sala > 1250.00:
    print('Acréscimo = {:.2f}'.format(sala * .1))
    print('Novo salário com acréscimo de 10%: R${:.2f}'.format(sala + sala * .1))
else:
    print('Acréscimo = {:.2f}'.format(sala * .15))
    print('Novo salário com acréscimo de 15%: R${:.2f}'.format(sala + sala * .15))
print('Desafio 034b')
salb = float(input('Salário funcionário: R$'))
if salb > 1250:
    ac = salb * .1
    saln = salb + ac
else:
    ac = salb * .15
    saln = salb + ac
print('Com acréscimo de R${0:.2f}, o novo salário será R${1:.2f}'.format(ac, saln))
print('Desafio 035')
print('Digite o comprimento de 3 retas para formar um triângulo')
r1 = float(input('Reta 1: '))
r2 = float(input('Reta 2: '))
r3 = float(input('Reta 3: '))
if r1 + r2 > r3 and r2 + r3 > r1 and r3 + r1 > r2:
    print('É possível fazer um triângulo')
else:
    print('Não é possível fazer um triângulo')
