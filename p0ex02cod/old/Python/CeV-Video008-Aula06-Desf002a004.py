#Desafio003 (da aula anterior (aula 4))

x = float(input('Digite um número real x: '))
y = float(input('Agora outro número y: '))
soma = x + y
print('A soma entre {1:2.3f} e {0:2.3f} vale aproximadamente {2:2.3f}'.format(x, y, soma))


#Prática aula6
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

#Desafio004
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
#print('É ASCII?:', n2.isascii())
