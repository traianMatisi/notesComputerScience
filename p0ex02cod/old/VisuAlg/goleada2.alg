algoritmo "goleada2"
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
      se ((gols1 = 1) ou (gols1 = 2)) entao
         escreval("Parabés aos vencedores")
      senao
         se ((gols1 = 4) ou (gols1 = 3)) entao
            escreval("Belíssima vitória do", time1)
         senao
            escreval("Que bela goleada do ", time1)
         fimse
      fimse
   senao
      se (gols1 < gols2) entao
         diferenca := gols2 - gols1
         escreval(time2+" venceu por "+numpcarac(diferenca)+" gols")
         se ((gols2 = 1) ou (gols2 = 2)) entao
            escreval("Parabés aos vencedores")
         senao
            se ((gols2 = 4) ou (gols2 = 3)) entao
               escreval("Belíssima vitória do", time2)
            senao
               escreval("Que bela goleada do ", time2)
            fimse
         fimse
      fimse
   fimse
fimalgoritmo