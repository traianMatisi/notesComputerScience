# IF STATEMENT INDENTED
userInput = int(input('Digite 1 ou 0: '))
if userInput == 1:
    print('Hello, world!')
    print('You pressed 1')
    print('You must be Anonymous')
elif userInput == 0:
    print('Hello, friend!')
    print('You pressed 0')
    print('You must be fsociety')
else:
    print('You didn\'t pressed a valid number. Try again')

# IF STATEMENT LINEAR
ageInput = int(input('How old do you think she is?'))
age = 'Correct' if ageInput == 35 else 'Wrong'
print(age)

userInput = int(input('How old do you think I am? '))
correct = 'Nailed it' if userInput == 35 else 'Nah, give it another shot.'
print(correct)
# In "1 line IF statement", print() doesn't have indentation, EVER

idade = input('Chute minha idade. ')
resposta = 'Correto' if idade == '35' else 'Errado'
print(resposta)