# LISTS uses braquets [ ]
# TUPLES uses parentesis ( )
# DICTIONARIES uses keys { } or parentesis like this -> subject = dict() 
# to avoid creating loose variables, we make lists/tuples/dictionaries
emptyDictio1 = {}
emptyDictio2 = dict()
mesesAbrevNum_1 = {'jan':'01', 'fev':'02', 'mar':'03', 'abr':'04', 'mai':'05', 'jun':'06', 'jul':'07', 'ago':'08', 'set':'09', 'out':'10', 'nov':'11', 'dez':'12'}
mesesAbrevNum_2 = {'jan':1, 'fev':2, 'mar':3, 'abr':4, 'mai':5, 'jun':6, 'jul':7, 'ago':8, 'set':9, 'out':10, 'nov':11, 'dez':12}
'''
nos dicionários acima, tive que modificar os numeros para serem strings para fazer funcionar.
MOTIVO, zero na frente do numero inteiro é INVALID TOKEN
Já no dicionário abaixo, onde há números não se aceita strings sem aspas (nos exemplos abaixo há strings sem aspas)
IMPORTANTE NOTAR, um mesmo dicionário não pode ter dois itens iguais, mas respostas sim.
Contudo, dois dicionários DIFERENTES podem ter o mesmo item, com definições iguais.
'''
#mesesComplNum_1 = dict(janeiro = 01, fevereiro = 02)
mesesComplNum_2 = dict(janeiro = 1, fevereiro = 2, março = 3, abril = 4, maio = 5, junho = 6, julho = 7, agosto = 8, setembro = 9, outubro = 10, novembro = 11, dezembro = 12)
um = 'um'
dois = 'dois'
fevereiro = 'fev'
'''
Sobre a variável fevereiro acima:
Podemos tentar definir o segundo termo, mas o primeiro só printa o escrito no dicionário 
'''
mesesComplNum_3 = dict(janeiro = um, fevereiro = dois)
print(mesesAbrevNum_1)
print(mesesAbrevNum_2)
#print(mesesComplNum_1)
print(mesesComplNum_2)
print(mesesComplNum_3)
print(mesesAbrevNum_1['jun'])
print(mesesAbrevNum_2['jun'])
print(emptyDictio1)
print(emptyDictio2)
emptyDictio1['janeiro']='01'
emptyDictio1['jan']='01'
emptyDictio2['domingo']='dom'
emptyDictio2['segunda']='seg'
print(emptyDictio1)
print(emptyDictio2)
finalDictioMes = {'janeiro':'01', 'jan':'01', '01':'01', 1:'01'}
print(finalDictioMes)
'''
A sintaxe abaixo tbm é invalida, o primeiro item tem q ser string
'''
#optionalDictioMes = (1 = janeiro, 2 = fevereiro)
#print(optionalDictioMes)
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