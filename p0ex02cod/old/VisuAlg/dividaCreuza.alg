algoritmo "dividaCreuza"
//
//
var
   emprestimo:real
   divida:real
   parcelas:inteiro
inicio
   escreva("Qual o valor do empr�stimo? ")
   leia(emprestimo)
   escreva("Quantas parcelas? ")
   leia(parcelas)
   divida <- emprestimo + emprestimo * 0.2
   escreval("Sua divida � de ", divida:5:2)
   escreval("Ser�o portanto, ", parcelas, " parcelas de ",(divida/parcelas), " reais.")
fimalgoritmo