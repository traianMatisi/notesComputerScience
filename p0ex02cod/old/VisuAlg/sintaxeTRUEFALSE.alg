algoritmo "semnome"
var
   j, k : inteiro
   status : logico
inicio
   para j := 1 ate 10 faca
      para k := 1 ate 10 faca
         se k%2 = 0 entao
            status := verdadeiro
            interrompa
         senao
            status := falso
         fimse
         escreval(j,k, status)
      fimpara
      se status = verdadeiro entao
         interrompa
      fimse
      escreval(j,k, status)
   fimpara
fimalgoritmo