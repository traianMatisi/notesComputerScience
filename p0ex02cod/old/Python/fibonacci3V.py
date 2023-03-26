term = 0
a = 0
b = 1
c = a+b
print(f'\n1st term: {a}\n2nd term: {b}\n3rd term: {c}\n')

while term <= 3:
    term = int(input('Do you need a bigger term?  '))
    if term <= 3:
        print('\nNot a bigger term, must be bigger than 3')

for i in range(4, term+1):
    a = b
    b = c
    c = a+b

print(f'\nThe (n)th term is: {c}\n')
    