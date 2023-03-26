algoritmo "contagemInteligente"
//
var
   inicial, final, contador : inteiro
inicio
   escreva("A partir de qual número devemos inicial a contagem?  ")
   leia(inicial)
   escreva("E a até onde devemos contar?  ")
   leia(final)
   se inicial = final entao
      escreva("Não há contagem só há o numero", inicial)
   senao
      se inicial < final entao
         escreval("contagem progressiva")
         enquanto inicial <= final faca
            escreval(inicial)
            inicial := inicial + 1
         fimenquanto
      senao
         escreval("Contagem regressiva")
         enquanto inicial >= final faca
            escreval(inicial)
            inicial := inicial - 1
         fimenquanto
      fimse
   escreval("Fim da contagem")
   fimse
fimalgoritmo