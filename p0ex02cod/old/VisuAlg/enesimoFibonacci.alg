algoritmo "enesimoFibonacci"
//
var
   a, b, c, enesimo, contador : inteiro
inicio
   a := 0
   b := 1
   repita
      escreva("Qual enésimo fibonacci você deseja saber?  ")
      leia(enesimo)
   ate enesimo > 0
   se enesimo = 1 entao
      escreval(enesimo, "o fibonacci = ", a)
   senao
      se enesimo = 2 entao
         escreval(enesimo, "o fibonacci = ", b)
      senao
         para contador := 3 ate enesimo passo 1 faca
            c := b + a
            a := b
            b := c
         fimpara
         escreval(enesimo, "o fibonacci = ", c)
      fimse
   fimse
fimalgoritmo