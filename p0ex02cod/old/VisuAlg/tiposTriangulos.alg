algoritmo "tiposTriangulos"
//
var
   a, b, c, t: real
inicio
   escreva("Digite o 1o lado do triangulo: ")
   leia(a)
   escreva("Digite o 2o lado do triangulo: ")
   leia(b)
   se (b > a) entao//ordena crescentemente os lados do triangulo
      t <- a
      a <- b
      b <- t
   fimse
   escreva("Digite o 3o lado do triangulo: ")
   leia(c)
   se (c > a) entao//ordena crescentemente os lados do triangulo
      t <- a
      a <- c
      c <- t
   fimse
   se (c > b) entao//ordena crescentemente os lados do triangulo
      t <- b
      b <- c
      c <- t
   fimse
   //escreval(a, b, c)/*debug: A é de fato o maior segmento e C o menor?*/
   se (a >= b + c) entao
      escreval("Os segmentos fornecidos não podem formar um triângulo")
   senao
      se ((a = b) e (b = c)) entao
         escreval("O triângulo é equilátero e agudo")
      senao
         se ((a <> b) e (b <> c) e (c <> a)) entao
            se (a^2 < b^2 + c^2) entao
               escreval("O triângulo é escaleno e agudo")
            senao
               se (a^2 > b^2 + c^2) entao
                  escreval("O triângulo é escaleno e obtuso")
               senao
                  escreval("O triângulo é escaleno e retângulo")
               fimse
            fimse
         senao
            se (a = b) entao
               escreval("O triângulo é isóscees e agudo")
            senao
               se (a^2 = b^2 + c^2) entao
                  escreval("O triângulo é isósceles e retângulo")
               senao
                  escreval("O triângulo é isósceles e obtuso")
               fimse
            fimse
         fimse
      fimse
   fimse
fimalgoritmo