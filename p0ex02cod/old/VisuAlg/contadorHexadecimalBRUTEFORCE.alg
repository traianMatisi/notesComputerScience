algoritmo "contadorHexadecimalBRUTEFORCE"
//
var
   i, j, k, l, c : inteiro
   p, q, r, s : caractere
inicio
   escreval("Contagem Hexadecimal")
   para i := 0 ate 15 passo 1 faca
      se (i < 10) entao
         p := numpcarac(i)
      senao
         p := carac(i+55)
      fimse
      para j := 0 ate 15 passo 1 faca
         se (j < 10) entao
            q := numpcarac(j)
         senao
            q := carac(j+55)
         fimse
         para k := 0 ate 15 passo 1 faca
            se (k < 10) entao
               r := numpcarac(k)
            senao
               r := carac(k+55)
            fimse
            para l := 0 ate 15 passo 1 faca
               se (l < 10) entao
                  s := numpcarac(l)
               senao
                  s := carac(l+55)
               fimse
               escreval(c:4, " = 0x", p, q, r, s)
               c := c + 1
            fimpara
         fimpara
      fimpara
   fimpara
fimalgoritmo