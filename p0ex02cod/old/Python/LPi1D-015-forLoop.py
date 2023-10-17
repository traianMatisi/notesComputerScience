"""
#Loop pets
pets = ['Cats', 'Dogs', 'Hamsters', 'Rabbits']
for myPets in pets:
    print(myPets)
"""
'''
#Indexes de myPets
for index, myPets in enumerate(pets):
    print(index, myPets)
# Ambos métodos muito discrepantes. Se puder sempre refrescar a memória.
'''
meses = {'Jan': '01', 'Fev': '02', 'Mar': '03', 'Abr': '04', 'Mai': '05', 'Jun': '06', 'Jul': '07', 'Ago': '08', 'Set': '09', 'Out': '10', 'Nov': '11', 'Dez': '12'}
for mês in meses:
    print(mês)
    print('Mês = {0:s}, Num = {1:s}'.format(mês, meses[mês]))
#    print('Mês = %s, num = %s' %(mês, meses[mês]))
