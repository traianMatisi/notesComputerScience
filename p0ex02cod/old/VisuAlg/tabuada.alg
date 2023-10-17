algoritmo "tabuada"
//Com laço de repetição a tabuada fica mais fácil e mais curta
//
var
   t, l, c : inteiro
inicio
   escreva("Digite qual a tabuada vc deseja mostrar:  ")
   leia(t)
   c := 1
   l := 10
   enquanto c <= l faca
      escreval(""+numpcarac(t)+" x "+numpcarac(c)+" = ", t * c)
      c := c + 1
   fimenquanto
fimalgoritmo