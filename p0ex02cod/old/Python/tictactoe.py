print("""
As casas para jogar são:

 1 | 2 | 3
--- --- ---
 4 | 5 | 6
--- --- ---
 7 | 8 | 9
 
Só podemos jogar letra O ou letra X.
""")
mark = ' '
while mark not in 'oxOX':
    mark = str(input('Escolha letra o ou letra x para jogar:  '))
