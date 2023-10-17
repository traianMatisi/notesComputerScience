algoritmo "dividaCreuza"
//
//
var
   emprestimo:real
   divida:real
   parcelas:inteiro
inicio
   escreva("Qual o valor do empréstimo? ")
   leia(emprestimo)
   escreva("Quantas parcelas? ")
   leia(parcelas)
   divida <- emprestimo + emprestimo * 0.2
   escreval("Sua divida é de ", divida:5:2)
   escreval("Serão portanto, ", parcelas, " parcelas de ",(divida/parcelas), " reais.")
fimalgoritmo