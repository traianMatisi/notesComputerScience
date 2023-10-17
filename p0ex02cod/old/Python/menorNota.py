n = int(input('Quantos alunos serão avaliados? '))
prova = 0.0
menorNota = 10.0
mesmaNota = 1

for i in range(0, n):
    prova = float(input(f'Digite a {i+1}a prova: '))  
    if prova == menorNota:
        mesmaNota = mesmaNota + 1
    elif menorNota > prova:
        menorNota = prova
        mesmaNota = 1
    else:
        continue
print(f'A menor nota é {menorNota} e ocorre {mesmaNota}x')
