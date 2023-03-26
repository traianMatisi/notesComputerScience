algoritmo "linguagemProgramção1"
//
var
   a : inteiro
inicio
   escreval("Qual sua linguagem de programação favorita?")
   escreval("[0] para VisuAlg")
   escreval("[1] para Python")
   escreval("[2] para JavaScript")
   escreval("[3] para C/C++")
   escreval("[4] para Golang")
   escreval("[5] para Java")
   escreval("[6] para PHP")
   escreval("[7] para SQL")
   leia(a)
   escolha a
      caso 0
         escreval("VisuAlg é bom com o Gustavo Guanabara ensinando")
      caso 1
         escreval("Python é uma linguagem de sintaxe simples boa pra inician-tes")
      caso 2
         escreval("JavaScript parece uma linguagem onipresente na computa-ção")
      caso 3
         escreval("C é sem sombra de dúvidas o latim das linguas de programa-ção")
      caso 4
         escreval("Golang é bom pra quem quer ganhar mito dinheiro remotamen-te")
      caso 5
         escreval("Java é um Highlander, parece que não morre")
      caso 6
         escreval("O mascote do elefantinho é meu segundo favorito")
      caso 7
         escreval("Sql é bom pra mercado de trabalho")
      outrocaso
         escreval("Parece que você digitou um valor inválido")
   fimescolha
fimalgoritmo