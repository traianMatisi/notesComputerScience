algoritmo "conversorDolar"
//valor do dolar no dia 19/set/2022 �s 14:45 hor�rio de Bras�lia: R$ 5.16
//
var
   cotacao, reais, dolares : real
inicio
   cotacao <- 5.16
   escreva("Quanto em reais vc tem?  R$ ")
   leia(reais)
   dolares := reais/cotacao
   escreval("Voc� pode comprar US$ ", dolares:4:2)
fimalgoritmo