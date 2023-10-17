algoritmo "emprestimo"
//
var
   emprestimo, divida, parcelas, parcela : real
inicio
   escreva("De quanto será o empréstimo? R$ ")
   leia(emprestimo)
   divida := emprestimo + emprestimo * 0.2
   escreva("E quantas parcelas será devolvido? ")
   leia(parcelas)
   parcela := divida/parcelas
   escreva("Seu boleto será de", parcelas)
   escreval(" parcelas de R$ ", parcela:4:2)
fimalgoritmo