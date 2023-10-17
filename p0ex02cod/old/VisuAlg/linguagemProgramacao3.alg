algoritmo "linguagemProgramção3"
//
var
   a : caractere
inicio
   escreval("Qual sua linguagem de programação favorita?")
   escreval("[V] para VisuAlg")
   escreval("[P] para Python")
   escreval("[J] para JavaScript")
   escreval("[C] para C/C++")
   escreval("[G] para Golang")
   escreval("[K] para Java")
   escreval("[H] para PHP")
   escreval("[S] para SQL")
   leia(a)
   escolha maiusc(a)
      caso "V", "v"
         escreval("VisuAlg é bom com o Gustavo Guanabara ensinando")
      caso "P", "p"
         escreval("Python é uma linguagem de sintaxe simples boa pra iniciantes")
      caso "J", "j"
         escreval("JavaScript parece uma linguagem onipresente na computação")
      caso "C", "c"
         escreval("C é sem sombra de dúvidas o latim das linguas de programação")
      caso "G", "g"
         escreval("Golang é bom pra quem quer ganhar mito dinheiro remotamente")
      caso "K", "k"
         escreval("Java é um Highlander, parece que não morre")
      caso "H", "h"
         escreval("O mascote do elefantinho é meu segundo favorito")
      caso "S", "s"
         escreval("Sql é bom pra mercado de trabalho")
      outrocaso
         escreval("Parece que você digitou um valor inválido")
   fimescolha
fimalgoritmo