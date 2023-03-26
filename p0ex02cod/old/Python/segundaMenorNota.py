n = int(input('Quantos alunos serão avaliados? '))
prova = 0.0
segundaMenor = 10.0
menorNota = 10.0

for i in range(0, n):
    prova = float(input(f'Digite a nota da {i+1}a prova: '))
    if prova < segundaMenor:
        segundaMenor = prova
        if prova <= menorNota:
            segundaMenor = menorNota
            menorNota = prova
print(f'A menor nota é {menorNota} e a segunda menor nota é {segundaMenor}')
