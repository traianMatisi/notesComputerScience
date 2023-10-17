algoritmo "entre0e10ComImparesSomados"
//Evitei concatenar pq é mais simples usando vírgulas
//como máscaras de variáveis
//
//Pra somar impares fora do intervalo não preisa digitar mais
//linhas, basta mover o bloco da linha 18,19,20 para as linhas 16,17,18
//As outras estruturas obviamente vão descer
//
var
   x, contador, impares : inteiro
   r : caractere
inicio
   r := "S"
   enquanto (r = "S") ou (r = "s") faca
      escreva("Digite um número:  ")
      leia(x)
      se (x >= 0) e (x <= 10) entao
         contador := contador + 1
         se x % 2 = 1 entao
            impares := impares + x
         fimse
      fimse
      repita
         escreva("Quer continuar?  [S/N]")
         leia(r)
      ate (r = "N") ou (r = "n") ou (r = "S") ou (r = "s")
   fimenquanto
   escreval("Foram digitados ", contador," numeros entre 0 e 10")
   escreval("A soma dos ímpares é igual a ", impares)
fimalgoritmo