algoritmo "emprestimo"
//
var
   emprestimo, divida, parcelas, parcela : real
inicio
   escreva("De quanto ser� o empr�stimo? R$ ")
   leia(emprestimo)
   divida := emprestimo + emprestimo * 0.2
   escreva("E quantas parcelas ser� devolvido? ")
   leia(parcelas)
   parcela := divida/parcelas
   escreva("Seu boleto ser� de", parcelas)
   escreval(" parcelas de R$ ", parcela:4:2)
fimalgoritmo