from keyword import iskeyword

string = str(input('Digite algo: '))

#stt = string.is_integer()
#print(f'Is it an integer? {stt}')

stt = string.isalpha()
print(f'Is it alphabetic? {stt}')

stt = string.isnumeric()
print(f'Is it numeric? {stt}')

stt = string.isalnum()
print(f'Is it alpha numeric? {stt}')

stt = string.isascii()
print(f'Is it ASCII? {stt}')

stt = string.isdecimal()
print(f'Is it decimal? {stt}')

stt = string.isdigit()
print(f'Is it digit? {stt}')

#stt = string.isdentifier()
#print(f'Is it identifier? {stt}')

#stt = string.iskeyword()
#print(f'Is it keyword? {stt}')

stt = string.islower()
print(f'Is it lower case? {stt}')

stt = string.isupper()
print(f'Is it upper case? {stt}')

stt = string.isprintable()
print(f'Is it printable? {stt}')

stt = string.isspace()
print(f'Is it space? {stt}')

stt = string.istitle()
print(f'Is it capitalized? {stt}')