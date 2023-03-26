algoritmo "15primeirosFibonacci"
//
var
   a, b, c, contador : inteiro
inicio
   a := 0
   b := 1
   escreval(a)
   escreval(b)
   para contador := 3 ate 15 passo 1 faca
      c := b + a
      escreval(c)
      a := b
      b := c
   fimpara
fimalgoritmo