algoritmo "fatorialRecursivo"
var
   n, f: inteiro

funcao fatorial(n:inteiro):inteiro
inicio
      se (n >= 1) entao
         retorne n * fatorial(n-1)
      senao
           retorne 1
fimfuncao

inicio
      escreva("Digite número para calcular seu fatorial")
      leia(n)
      f <- fatorial(n)
      escreval(f)
fimalgoritmo