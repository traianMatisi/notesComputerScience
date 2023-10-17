algoritmo "contadorOctalBRUTEFORCE"
//
var
   p, q, r, s: inteiro
inicio
   enquanto verdadeiro faca
      para p := 0 ate 7 passo 1 faca
         para q := 0 ate 7 passo 1 faca
            para r := 0 ate 7 passo 1 faca
               limpatela
               escreva("0o",p,q,r," = ")
               escreval(s)
               s := s +1
            fimpara
         fimpara
      fimpara
      p := 0
      q := 0
      r := 0
      s := 0
   fimenquanto
fimalgoritmo