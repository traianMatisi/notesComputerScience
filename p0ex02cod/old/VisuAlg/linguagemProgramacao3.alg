algoritmo "linguagemProgram��o3"
//
var
   a : caractere
inicio
   escreval("Qual sua linguagem de programa��o favorita?")
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
         escreval("VisuAlg � bom com o Gustavo Guanabara ensinando")
      caso "P", "p"
         escreval("Python � uma linguagem de sintaxe simples boa pra iniciantes")
      caso "J", "j"
         escreval("JavaScript parece uma linguagem onipresente na computa��o")
      caso "C", "c"
         escreval("C � sem sombra de d�vidas o latim das linguas de programa��o")
      caso "G", "g"
         escreval("Golang � bom pra quem quer ganhar mito dinheiro remotamente")
      caso "K", "k"
         escreval("Java � um Highlander, parece que n�o morre")
      caso "H", "h"
         escreval("O mascote do elefantinho � meu segundo favorito")
      caso "S", "s"
         escreval("Sql � bom pra mercado de trabalho")
      outrocaso
         escreval("Parece que voc� digitou um valor inv�lido")
   fimescolha
fimalgoritmo