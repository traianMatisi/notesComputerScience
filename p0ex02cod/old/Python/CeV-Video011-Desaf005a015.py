#"""
#print('Desafio 005')
numA = int(input('Digite um número inteiro (Z): '))
suc = numA + 1
ant = numA - 1
print('Seu sucessor é {2:d}, seu antecessor é {0:d} e o número digitado foi {1:d}.'.format(ant, numA, suc))

#print('Desafio 006')
numB = float(input('Digite um número real (R) que vc conheça a raiz quadrada pra te ajudar a entender: '))
dobro = 2 * numB
triplo = 3 * numB
raiz2 = numB**(1/2)
print('Seu dobro vale {0:.3f}, o triplo {1:.3f} e sua raiz aproximadamente {2:.5f}.'.format(dobro, triplo, raiz2))

#print('Desafio 007')
p1 = float(input('Quanto você tirou na P1? '))
p2 = float(input('E na optativa (P2)? '))
media = (p1 + p2)/2
print('Sua média  é {:.1f}.'.format(media))

#print('Desafio 008')
m = float(input('Digite sua altura em metros (apenas números): '))
km = m/1000
hm = m/100
dam = m/10
dm = m*10
cm = m*100
mm = m*1000
print('{0:.2f}m convertido em centimetros vale {1:.0f} cm e convertido em milímetros vale {2:.0f} mm.'.format(m, cm, mm))
print('Todas as conversões dessa medida: km = {0:.5f}, hm = {1:.4f}, dam = {2:.3f}, dm = {3:.1f}.'.format(km, hm, dam, dm))

#print('Desafio 009')
t = int(input('Escolha e digite um número inteiro (Z) para exibirmos sua tabuada: '))
print('#'*15)
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
print('#'*15)

#print('Desafio 010')
dindin = float(input('Quanto de dinheiro você tem? (se não tiver nada, invete uma quantia). R$:'))
usd = dindin/3.27
print('Você pode comprar {:.2f} dólares.'.format(usd))

#print('Desafio 011')
print('Me indique a altura e largura de uma parede')
larg = float(input('Largura: '))
alt = float(input('Altura: '))
m2 = alt * larg
tint = m2/2
print('Sua parede de {0:.2f} x {1:.2f} tem {2:.1f}m².'.format(alt, larg, m2))
print('Serão necessários {0:.1f} litros de tinta para pintá-la.'.format(tint))

#print('Desafio 012')
preço = float(input('Me fale o preço de algo, R$:'))
desc = preço*(5/100)
preçoFinal = preço - desc
print('Com desconto de 5%, ele agora custa {:.2f}.'.format(preçoFinal))

#print('Desafio 013')
sal = float(input('Quanto você ganha por mês em R$:'))
aumento = sal*(15/100)
salFinal = sal + aumento
print('Com um aumento de 15% você passará a ganhar R${:.2f}.'.format(salFinal))

#print('Desafio 014')
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
elif e == 'Celsius':
    f = (t * 1.8 + 32)
    k = (t + 273.15)
    print('Convertendo {0:.1f}{1:s} para Fahrenheit teremos {2:.1f}°F.'.format(t, e, f))
    print('Já se convertermos para kelvin teremos {:.2f}K.'.format(k))
elif e == 'celsius':
    f = (t * 1.8 + 32)
    k = (t + 273.15)
    print('Convertendo {0:.1f}{1:s} para Fahrenheit teremos {2:.1f}°F.'.format(t, e, f))
    print('Já se convertermos para kelvin teremos {:.2f}K.'.format(k))
elif e == 'F':
    c = ((t - 32)/1.8)
    k = (c + 273.15)
    print('Convertendo {0:.1f}{1:s} para Celsius teremos {2:.1f}°C.'.format(gra, e, c))
    print('Já se convertermos para kelvin teremos {:.2f}K.'.format(k))
elif e == 'f':
    c = ((t - 32)/1.8)
    k = (c + 273.15)
    print('Convertendo {0:.1f}{1:s} para Celsius teremos {2:.1f}°C.'.format(t, e, c))
    print('Já se convertermos para kelvin teremos {:.2f}K.'.format(k))
elif e == 'Fahrenheit':
    c = ((t - 32)/1.8)
    k = (c + 273.15)
    print('Convertendo {0:.1f}{1:s} para Celsius teremos {2:.1f}°C.'.format(t, e, c))
    print('Já se convertermos para kelvin teremos {:.2f}K.'.format(k))
elif e == 'fahrenheit':
    c = ((t - 32)/1.8)
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
elif e == 'Kelvin':
    c = (t - 273.15)
    f = (c * 1.8 + 32)
    print('Convertendo {0:.1f}{1:s} para Celsius teremos {2:.1f}°C.'.format(t, e, c))
    print('Já se convertermos para fahrenheit teremos {:.1f}°F.'.format(f))
elif e == 'kelvin':
    c = (t - 273.15)
    f = (c * 1.8 + 32)
    print('Convertendo {0:.1f}{1:s} para Celsius teremos {2:.1f}°C.'.format(t, e, c))
    print('Já se convertermos para fahrenheit teremos {:.1f}°F.'.format(f))
else:
    print('Você digitou algo errado, tente novamente.')

# Desafio 15
dias = int(input('Digite a quantidade de dias que o carro esteve alugado: '))
dist = float(input('Digite a quilometragem rodada pelo carro durante o aluguel: '))
custo = (dias * 60.00) + (dist * .15)
print('O total a pagar é R${0:.2f}.'.format(custo))
#"""
