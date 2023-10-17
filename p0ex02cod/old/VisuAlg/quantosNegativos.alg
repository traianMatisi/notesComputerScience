algoritmo "quantosNegativos"
//Fiz o algoritmo levemente diferente do guanabara pra mostrar que as
//variáveis se inicializam sozinhas em 0
//
var
   digitados, numero, contador, negativos : inteiro
inicio
   escreva("Quantas entradas verificaremos?  ")
   leia(digitados)
   repita
      escreva(""+numpcarac(contador+1)+"a entrada:  ")
      leia(numero)
      se numero < 0 entao
         negativos := negativos + 1
      fimse
      contador := contador + 1
   ate contador = digitados
   escreval("Total de negativos digitados = ", negativos)
fimalgoritmo