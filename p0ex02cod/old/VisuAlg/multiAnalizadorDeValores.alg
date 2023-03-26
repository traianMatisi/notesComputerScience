algoritmo "multiAnalizadorDeValores"
//Soma, media, quantos /5, quantos nulos (zeros), soma dos pares
var
   i, entradas, divcinco, nulo : inteiro
   entrada, soma, media, somaPares : real
inicio
   repita
      escreva("Quantas entradas serão analisadas?  ")
      leia(entradas)
   ate entradas > 0
   Escreval("Digite as entradas:")
   para i := 1 ate entradas passo 1 faca
      escreva("Digite o",i ,"o valor:  ")
      leia(entrada)
      soma := soma + entrada
      se entrada % 5 = 0 entao
         divcinco := divcinco + 1
      fimse
      se entrada = 0 entao
         nulo := nulo + 1
      fimse
      se entrada % 2 = 0 entao
         somaPares := somaPares + entrada
      fimse
   fimpara
   media := soma/entradas
   escreval("")
   escreval("Somatório............", soma:2)
   escreval("Media................", media:2)
   escreval("Divisiveis por 5.....", divcinco)
   escreval("Nulos................", nulo)
   escreval("Soma dos pares.......",somaPares:2)
fimalgoritmo