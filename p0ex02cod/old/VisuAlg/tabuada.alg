algoritmo "tabuada"
//Com la�o de repeti��o a tabuada fica mais f�cil e mais curta
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