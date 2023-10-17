algoritmo "equacao_do_2_grau"
var
   a, b, c, x, x1, x2 : real
inicio
      escreva("Digite o 1o coeficiente:  ")
      leia(a)
      escreva("Digite o 2o coeficiente:  ")
      leia(b)
      escreva("Digite o 3o coeficiente:  ")
      leia(c)
      se (b^2-4*a*c < 0) entao
         escreval("A equacao nao possui raízes reais.")
      senao
           se (b^2-4*a*c = 0) entao
              x <- -b/2*a
              escreval("x = ", x:4:3)
           senao
                x1 <- (-b+raizq(b^2-4*a*c))/(2*a)
                x2 <- (-b-raizq(b^2-4*a*c))/(2*a)
                escreval("x1 = ", x1:4:3)
                escreval("x2 = ", x2:4:3)
           fimse
      fimse
            
fimalgoritmo
