#print the words -Hello, world!-
print('Hello, world!')
#prints the numbers -123-
print(123)
#msg and num will be variables to the following formats
msg = 'Hello, world!'
num = 123
#simple print variable
print(msg)
print(num)
#python2 print format, including float
print('%s' %(msg))
print('%1d' %(num))
print('%2.3f' %(num))
#current python3 print format, including float
print('{0:s}'.format(msg))
print('{0:1d}'.format(num))
print('{0:2.3f}'.format(num))