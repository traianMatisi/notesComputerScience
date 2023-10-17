algoritmo "contagemCurta1a100"
//A variavel do laço para só pode ser inteiro
//
var
   x : inteiro
inicio
   para x <- 1 ate 100 passo 1 faca
      escreva(x:2:0)
      se x <> 100 entao
         escreva("-->")
      fimse
      se x % 10 = 0 entao
         escreval("")
      fimse
   fimpara
fimalgoritmo