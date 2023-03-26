algoritmo "rendimentoEscolar"
//A: de 10.00 a 9.00
//B: de 8.99 a 8.00
//C: de 7.99 a 7.00
//D: de 6.99 a 6.00
//E: de 5.99 a 5.00
//F: abaixo de 5.00
//É possível reaproveitar o código de média de notas
//
var
   media : real
   campoMedia : inteiro
inicio
   escreva("Média: ")
   leia(media)
   campoMedia := int(media)
   escolha campoMedia
      caso 10, 9
         escreval("Conceito A")
      caso 8
         escreval("Conceito B")
      caso 7
         escreval("Conceito C")
      caso 6
         escreval("Conceito D")
      caso 5
         escreval("Conceito E")
      caso 4, 3, 2, 1, 0
         escreval("Conceito F")
      outrocaso
         escreval("Entrada inválida")
   fimescolha
fimalgoritmo