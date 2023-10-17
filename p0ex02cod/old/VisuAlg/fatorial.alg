algoritmo "fatorialNaoRecursivo"
//Se for pedido 0!, o laço ENQUANTO não roda e fatorial continua 1
//
var
   numero, fatorial, contador : inteiro
inicio
      repita


   escreva("Quer saber o fatorial de qual número?  ")
   leia(numero)
   contador := numero
   fatorial := 1
   enquanto contador > 0 faca
      fatorial := fatorial * contador
      contador := contador - 1
   fimenquanto
   escreval(""+numpcarac(numero)+"! = ", fatorial)
fimalgoritmo