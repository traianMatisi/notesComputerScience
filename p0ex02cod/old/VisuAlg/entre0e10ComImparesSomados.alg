algoritmo "entre0e10ComImparesSomados"
//Evitei concatenar pq � mais simples usando v�rgulas
//como m�scaras de vari�veis
//
//Pra somar impares fora do intervalo n�o preisa digitar mais
//linhas, basta mover o bloco da linha 18,19,20 para as linhas 16,17,18
//As outras estruturas obviamente v�o descer
//
var
   x, contador, impares : inteiro
   r : caractere
inicio
   r := "S"
   enquanto (r = "S") ou (r = "s") faca
      escreva("Digite um n�mero:  ")
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
   escreval("A soma dos �mpares � igual a ", impares)
fimalgoritmo