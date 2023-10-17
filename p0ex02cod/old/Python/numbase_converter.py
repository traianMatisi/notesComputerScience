while True:
    n = int(input('Digite num p converter: '))
    x = hex(n)[2:]
    b = bin(n)[2:]
    o = oct(n)[2:]
    print(f'0x = {x}')
    print(f'0b = {b}')
    print(f'0o = {o}')
    quit = ' '
    while quit not in 'sn':
        quit = str(input('Deseja realizar outra operação? [s/n] ')).strip().lower()[0]
    if quit == 'n':
        break



