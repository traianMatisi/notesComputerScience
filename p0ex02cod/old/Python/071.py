from time import sleep
print('Valor máximo para saque: R$ 9999.00')
while True:
    n = int(input('Digite quanto você quer sacar: R$ '))
    u = n // 1 % 10
    d = n // 10 % 10
    dm = d % 2
    c = n // 100 % 10
    m = n // 1000 % 10
    if n > 9999:
        print('Valor máximo para saque: R$ 9999,00')
        break
    if n < 10:
        print(f'Você receberá {u} notas de 1 real')
    elif 10 <= n < 100 and dm == 0:
        print(f'Você receberá {d//2} notas de 20 reais')        
    elif n < 1000 and c != 0 and dm == 0:
        print(f'Você receberá {c*2} notas de 50, {d//2} de 20, {0} de 10, {u} de 1 real')
    elif n < 1000 and c != 0 and dm != 0:
        print(f'Você receberá {c*2} notas de 50, {d//2} de 20, {1} de 10, {u} de 1 real')
    elif c != 0 and dm == 0:
        print(f'Você receberá {c*2} notas de 50, {d//2} de 20, {0} de 10, {u} de 1 real')
    elif c != 0 and dm != 0:
        print(f'Você receberá {c*2} notas de 50, {d//2} de 20, {1} de 10, {u} de 1 real')

    print('Aguarde a contagem do dinheiro')
    sleep(4)
    print('zingbrrrrrrrrrr')
    sleep(1)
    print(f'R$ {n},00')
    print('Retire seu dinheiro')
    quite = ' '
    while quite not in 'sn':
        quite = str(input('Deseja realizar outra operação? [s/n] ')).strip().lower()[0]
    if quite == 'n':
        print('Obrigado por usar nossos serviços')
        break




