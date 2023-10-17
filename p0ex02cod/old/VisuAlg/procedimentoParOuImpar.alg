algoritmo "procedimentoParOuImpar"
//
var
   n : inteiro
inicio
   escreval("Digite um número inteiro")
   leia(n)
   procedimento parOuImpar(m : inteiro)
   //
   var
   //
   inicio
      se m % 2 = 0 entao
         escreval(m," é par")
      senao
         escreval(m," é impar")
      fimse
   fimprocedimento
   parOuImpar(n)
fimalgoritmo