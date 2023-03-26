
crianças = ['Gabi', 'Marcela', 'Lyan', 'Leon', 'Lucca']
idades = {'Gabi': 10, 'Marcela': 7, 'Leon': 6, 'Lucca': 5}
#meses = {}
#semana = ()
mães = ('Lidiane', 'Sandra', 'Laila')
msg = 'Hello, \nfriend!'

print(crianças)
print(idades)
print(mães)
print(msg)

for filhos in crianças:
    print(filhos)
for index, filhos in enumerate(crianças):
    print(index, filhos)

for nomes in idades:
    print(nomes)

for anos in idades:
    print('Nome:{}, Idade:{}'.format(anos, idades[anos]))
for nomes, anos in idades.items():
    print('Nome:{}, Idade:{}'.format(nomes, anos))

for mulheres in mães:
    print(mulheres)
    
for solet in msg:
    print(solet)

for odds in range(1, 100, 2):
    print(odds)
for even in range(0, 100, 2):
    print(even)