algoritmo "numerosPrimos"
//A fun��o ABS � usada pois numeros negativos tbm podem ser primos
//A defini��o correta de primos diz q ele � divisivel apenas por 4 numeros,
//negativos inclusos. O ABS � uma gambiarra elegante apenas
//
var
   numero, absoluto, contador, modulus : inteiro
inicio
   escreval("Digite n�mero pra saber se � primo:  ")
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
      escreval(""+numpcarac(numero)+" � primo")
   senao
      escreval(""+numpcarac(numero)+" n�o � primo")
   fimse
fimalgoritmo