algoritmo "conversorDolar"
//valor do dolar no dia 19/set/2022 às 14:45 horário de Brasília: R$ 5.16
//
var
   cotacao, reais, dolares : real
inicio
   cotacao <- 5.16
   escreva("Quanto em reais vc tem?  R$ ")
   leia(reais)
   dolares := reais/cotacao
   escreval("Você pode comprar US$ ", dolares:4:2)
fimalgoritmo