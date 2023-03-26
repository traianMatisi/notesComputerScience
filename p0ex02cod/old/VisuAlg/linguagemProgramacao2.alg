algoritmo "linguagemProgramção2"
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
   escolha asc(a)
      caso 86, 118
         escreval("VisuAlg é bom com o Gustavo Guanabara ensinando")
      caso 80, 112
         escreval("Python é uma linguagem de sintaxe simples boa pra iniciantes")
      caso 74, 106
         escreval("JavaScript parece uma linguagem onipresente na computação")
      caso 67, 99
         escreval("C é sem sombra de dúvidas o latim das linguas de programação")
      caso 71, 103
         escreval("Golang é bom pra quem quer ganhar mito dinheiro remotamente")
      caso 75, 107
         escreval("Java é um Highlander, parece que não morre")
      caso 72, 104
         escreval("O mascote do elefantinho é meu segundo favorito")
      caso 83, 115
         escreval("Sql é bom pra mercado de trabalho")
      outrocaso
         escreval("Parece que você digitou um valor inválido")
   fimescolha
fimalgoritmo