algoritmo "sintaxeParametros"
var
   w, x, y, z : real
inicio
   procedimento oper(var a, b, c, d : real)
   inicio
      a <- a + 2
      b <- b - 2
      c <- c * 2
      d <- d / 2
   fimprocedimento
   leia(w,x,y,z)
   escreval(w,x,y,z)
   oper(w,x,y,z)
   escreval(w,x,y,z)
fimalgoritmo