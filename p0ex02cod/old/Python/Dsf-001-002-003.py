nome = str(input('Como vc se chama?\n-->  '))
print('Olá, ' + nome + '. É um prazer te conhecer\n')
ano = int(input('Me informe o ano do seu nascimento.\n-->  '))
mes = input('Me informe tbm o mês.\n--> ')
dia = int(input('E agora o dia.\n-->  '))
print(f'A data formatada ficaria: {dia}/{mes}/{ano}.')
idade = 2022 - ano
print(f'A sua idade é {idade}. Somando sua idade com o dia do seu nascimento ({dia}) obtemos {dia+idade}.')
    