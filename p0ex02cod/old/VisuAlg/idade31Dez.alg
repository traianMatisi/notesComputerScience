algoritmo "idade31Dez"
//
var
   anoNascimento, anoAtual, idade : inteiro
inicio
   escreva("Em que ano você nasceu? aaaa : ")
   leia(anoNascimento)
   escreva("E em que anos estamos atualmente? aaaa : ")
   leia(anoAtual)
   idade := anoAtual - anoNascimento
   escreval("Em 31 de dezembro desse ano você terá ", idade)
fimalgoritmo