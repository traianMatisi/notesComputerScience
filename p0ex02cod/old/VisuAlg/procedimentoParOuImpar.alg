algoritmo "procedimentoParOuImpar"
//
var
   n : inteiro
inicio
   escreval("Digite um n�mero inteiro")
   leia(n)
   procedimento parOuImpar(m : inteiro)
   //
   var
   //
   inicio
      se m % 2 = 0 entao
         escreval(m," � par")
      senao
         escreval(m," � impar")
      fimse
   fimprocedimento
   parOuImpar(n)
fimalgoritmo