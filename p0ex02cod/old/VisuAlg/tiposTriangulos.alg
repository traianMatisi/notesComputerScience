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
   //escreval(a, b, c)/*debug: A � de fato o maior segmento e C o menor?*/
   se (a >= b + c) entao
      escreval("Os segmentos fornecidos n�o podem formar um tri�ngulo")
   senao
      se ((a = b) e (b = c)) entao
         escreval("O tri�ngulo � equil�tero e agudo")
      senao
         se ((a <> b) e (b <> c) e (c <> a)) entao
            se (a^2 < b^2 + c^2) entao
               escreval("O tri�ngulo � escaleno e agudo")
            senao
               se (a^2 > b^2 + c^2) entao
                  escreval("O tri�ngulo � escaleno e obtuso")
               senao
                  escreval("O tri�ngulo � escaleno e ret�ngulo")
               fimse
            fimse
         senao
            se (a = b) entao
               escreval("O tri�ngulo � is�scees e agudo")
            senao
               se (a^2 = b^2 + c^2) entao
                  escreval("O tri�ngulo � is�sceles e ret�ngulo")
               senao
                  escreval("O tri�ngulo � is�sceles e obtuso")
               fimse
            fimse
         fimse
      fimse
   fimse
fimalgoritmo