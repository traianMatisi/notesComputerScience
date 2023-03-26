algoritmo "procedimentoExponencial"
//"Função que eleva um número a x
//
var
   base, expoente : inteiro
inicio
   procedimento xpon(x, y : inteiro)
   //
   var
      i, z : inteiro
   inicio//XPON()
      z := 1
      para i := 1 ate y passo 1 faca
           z := z * x
      fimpara
      escreva(x," ^",y," = ",z)
   fimprocedimento//XPON()
   escreval("Exponencial")
   escreva("Base")
   leia(base)
   escreva("Expoente")
   leia(expoente)
   xpon(base, expoente)
fimalgoritmo