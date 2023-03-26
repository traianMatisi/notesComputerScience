algoritmo "numerosPrimos"
//A função ABS é usada pois numeros negativos tbm podem ser primos
//A definição correta de primos diz q ele é divisivel apenas por 4 numeros,
//negativos inclusos. O ABS é uma gambiarra elegante apenas
//
var
   numero, absoluto, contador, modulus : inteiro
inicio
   escreval("Digite número pra saber se é primo:  ")
   repita
      escreva(">>>")
      leia(numero)
   ate (numero = 0) ou (numero <> 0)
   absoluto := abs(numero)
   enquanto contador < absoluto faca
      contador := contador + 1
      se absoluto%contador = 0 entao
         modulus := modulus + 1
      fimse
   fimenquanto
   se modulus = 2 entao
      escreval(""+numpcarac(numero)+" é primo")
   senao
      escreval(""+numpcarac(numero)+" não é primo")
   fimse
fimalgoritmo