algoritmo "testesSintaxeNAN"
//Como não há como acessar tipo ou casting, tive que fazer ma gambiarra pra
//aceitar apenas números
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
