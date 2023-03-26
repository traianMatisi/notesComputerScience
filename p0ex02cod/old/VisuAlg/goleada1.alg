algoritmo "goleada1"
//Diferença de gols:
//0 empate
//1 ou 2 vitória normal
//3 ou 4 vitória bonita
//5+ goleada
//
var
   time1, time2 : caractere
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
      diferenca := gols1 - gols2
      escreval(time1+" venceu por "+numpcarac(diferenca)+" gols")
      escolha diferenca
         caso 1, 2
            escreval("Parabéns pela vitória")
         caso 3, 4
            escreval("Belíssima vitória do", time1)
         outrocaso
            escreval(numpcarac(diferenca)+" gols?! Goleada sensacional!")
      fimescolha
   senao
      se (gols1 < gols2) entao
         diferenca := gols2 - gols1
         escreval(time2+" venceu por "+numpcarac(diferenca)+" gols")
         escolha diferenca
            caso 1, 2
               escreval("Parabéns pela vitória")
            caso 3, 4
               escreval("Belíssima vitória do", time2)
            outrocaso
               escreval(numpcarac(diferenca)+" gols?! Goleada sensacional!")
         fimescolha
      senao
         escreval("O jogo terminou em empate")
      fimse
   fimse
fimalgoritmo