algoritmo "contagemInteligente"
//
var
   inicial, final, contador : inteiro
inicio
   escreva("A partir de qual n�mero devemos inicial a contagem?  ")
   leia(inicial)
   escreva("E a at� onde devemos contar?  ")
   leia(final)
   se inicial = final entao
      escreva("N�o h� contagem s� h� o numero", inicial)
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