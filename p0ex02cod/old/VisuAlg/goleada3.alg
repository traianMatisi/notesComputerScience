algoritmo "goleada3"
//Diferen�a de gols:
//0 empate
//1 ou 2 vit�ria normal
//3 ou 4 vit�ria bonita
//5+ goleada
//
var
   time1, time2, vencedor : caractere
   gols1, gols2, diferenca : inteiro
inicio
   escreva("Qual o nome do 1o time? ")
   leia(time1)
   escreva("Quantos gols o "+time1+" fez? ")
   leia(gols1)
   escreva("Qual o nome do 2o time? ")
   leia(time2)
   escreva("Quantos gols o "+time2+" fez? ")
   leia(gols2)
   se (gols1 > gols2) entao
      vencedor := time1
   senao
      vencedor := time2
   fimse
   diferenca := abs(gols1 - gols2)
   escolha diferenca
      caso 0
         escreval("O jogo terminou em empate")
      caso 1, 2
         escreval("Parab�s para o "+vencedor)
      caso 3, 4
         escreval("Bel�ssima vit�ria do "+vencedor)
      outrocaso
         escreval("Que goleada "+vencedor+" deu!")
   fimescolha
fimalgoritmo