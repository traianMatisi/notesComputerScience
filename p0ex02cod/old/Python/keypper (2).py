import random
while True:
    I = 0
    while I not in range(1, 1000000):
        I = int(input('\nQuantos digitos você deseja em sua senha?  '))
    c = 0
    while True:
        c += 1
        r = random.randint(32, 127)
        h = hex(r).lstrip('0x')
        ascii_ansi = {
        	'0': '',
        	'1': '^A',
        	'2': '^B',
        	'3': '^C',
        	'4': '^D',
        	'5': '^E',
        	'6': '^F',
        	'7': '^G',
        	'8': '^H',
        	'9': '^I',
        	'a': '^J',
        	'b': '^K',
        	'c': '^L',
        	'd': '^M',
        	'e': '^N',
        	'f': '^O',
        	'10': '^P',
        	'11': '^Q',
        	'12': '^R',
        	'13': '^S',
        	'14': '^T',
        	'15': '^U',
        	'16': '^V',
        	'17': '^W',
        	'18': '^X',
        	'19': '^Y',
        	'1a': '^Z',
        	'1b': '^[',
        	'1c': '^\\',
        	'1d': '^]',
        	'1e': '^^',
        	'1f': '^_',
        	'20': ' ',
        	'21': '!',
        	'22': '\"', 
        	'23': '#',
        	'24': '$',
        	'25': '%',
        	'26': '&',
        	'27': '\'',
        	'28': '(',
        	'29': ')',
        	'2a': '*',
        	'2b': '+',
        	'2c': 'ʼ',
        	'2d': '-',
        	'2e': '.',
        	'2f': '/',
        	'30': '0',
        	'31': '1',
        	'32': '2',
        	'33': '3',
        	'34': '4',
        	'35': '5',
        	'36': '6',
        	'37': '7',
        	'38': '8',
        	'39': '9',
        	'3a': ':',
        	'3b': ';',
        	'3c': '<',
        	'3d': '=',
        	'3e': '>',
        	'3f': '?',
        	'40': '@',
        	'41': 'A',
        	'42': 'B',
        	'43': 'C',
        	'44': 'D',
        	'45': 'E',
        	'46': 'F',
        	'47': 'G',
        	'48': 'H',
        	'49': 'I',
        	'4a': 'J',
        	'4b': 'K',
        	'4c': 'L',
        	'4d': 'M',
        	'4e': 'N',
        	'4f': 'O',
        	'50': 'P',
        	'51': 'Q',
        	'52': 'R',
        	'53': 'S',
        	'54': 'T',
        	'55': 'U',
        	'56': 'V',
        	'57': 'W',
        	'58': 'X',
        	'59': 'Y',
        	'5a': 'Z',
        	'5b': '[',
        	'5c': '\\',
        	'5d': ']',
        	'5e': '^',
        	'5f': '-',
        	'60': '`',
        	'61': 'a',
        	'62': 'b',
        	'63': 'c',
        	'64': 'd',
        	'65': 'e',
        	'66': 'f',
        	'67': 'g',
        	'68': 'h',
        	'69': 'i',
        	'6a': 'j',
        	'6b': 'k',
        	'6c': 'l',
        	'6d': 'm',
        	'6e': 'n',
        	'6f': 'o',
        	'70': 'p',
        	'71': 'q',
        	'72': 'r',
        	'73': 's',
        	'74': 't',
        	'75': 'u',
        	'76': 'v',
        	'77': 'w',
        	'78': 'x',
        	'79': 'y',
        	'7a': 'z',
        	'7b': '{',
        	'7c': '|',
        	'7d': '}',
        	'7e': '~',
        	'7f': '^?',
        	
        	}
        print(f'{ascii_ansi[h]}', end='')
        if c == I:
            break
    # print(r, end=' ')
    print('\n', c, 'digitos')
    Pass = ' '
    while Pass not in 'SsNn':
        Pass = str(input('\nDeseja criar outra senha? [S/N]')).lower()
    if Pass == 'n':
        break
print('Fim do processo')
