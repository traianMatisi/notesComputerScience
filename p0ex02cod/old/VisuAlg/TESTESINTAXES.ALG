algoritmo "testesSintaxeNAN"
//Se tentar deixar os SEs de fora do ENQUANTO o loop fica infinito
//As condições do enquanto podem ser trocadas pelo
//mais simples ENQUANTO VERDADEIRO
//
var
   x : inteiro
inicio
   leia(x)
   se (x = 0) ou (x <> 0) entao
      escreval("numero")
   senao
      escreval("NaN")
   fimse
fimalgoritmo
