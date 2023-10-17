algoritmo "conversorTemperaturaF2C"
//
var
   F, C : real
inicio
   escreva("Qual a temperatura em Fahrenheit? ")
   leia(F)
   C := (F - 32) / 1.8
   escreval("A temperatura em celsius é ", C:3:1)
fimalgoritmo