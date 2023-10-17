algoritmo "testeNumASCIINum"
//
var
   i : inteiro
   p : caractere
inicio
   para i := 0 ate 15 passo 1 faca
      se (i < 10) entao
         p := numpcarac(i)
      senao
         p := carac(i+55)
      fimse
      escreval(p)
   fimpara
fimalgoritmo