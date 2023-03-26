print('Hello, friend.')
nome = input('Me informe seu nome, por gentileza: ')
print('Prazer em te conhecer {}, eu me chamo Zahir e sou um software bem simples. Eu vou te perguntar alguns dados pra testar se eu estou funcionando direitinho.'.format(nome))
print('Me informa sua data de nascimento, nessa ordem')
dia = input('Dia:')
mes = input('Mês:')
ano = int(input('Ano completo (4 digitos):'))
anoHj = 2021
idadeVc = anoHj - ano
print('A data do seu nascimento formatada ficaria {}/{}/{}. E se vc já fez aniversário está com {} anos de idade.'.format(dia, mes, ano, idadeVc))
idadeOutrem = int(input('Me informa a idade de qualquer outra pessoa:'))
somaIdades = idadeVc + idadeOutrem
print('Vocês dois juntos somam {} anos de idade no total.'.format(somaIdades))