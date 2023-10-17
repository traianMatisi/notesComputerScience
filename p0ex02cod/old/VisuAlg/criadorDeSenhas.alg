Algoritmo "criadorDeSenhas"
//
Var
   i, char, tamanho : inteiro
   resp : caractere
Inicio
   resp := "S"
   enquanto (resp = "S") ou (resp ="s") faca
      escreva("Que tamanho de seha você deseja?  ")
      leia(tamanho)
      escreva("[")
      para i := 1 ate tamanho passo 1 faca
         char := randi(94) + 32
         escreva(carac(char))
      fimpara
      escreva("]")
      repita
         escreval("")
         escreva("Deseja criar outra senha aleatória? [S/N] ")
         leia(resp)
         resp := maiusc(resp)
      ate (resp = "S") ou (resp = "N")
   fimenquanto
Fimalgoritmo