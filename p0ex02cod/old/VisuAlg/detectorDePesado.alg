algoritmo "detectorDePesado"
//
var
   i : inteiro
   nome, nomepeso: caractere
   peso, maiorPeso : real
inicio
   procedimento GUI()
   inicio
      escreval("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-")
      escreval("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-")
      escreval("           Detector de pesado            ")
      escreval("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-")
      escreval("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-")
      escreval("O maior peso é de "+nomePeso+" e é de, ",maiorPeso,"kg")
      escreval("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-")
   fimprocedimento
   para i := 0 ate 4 passo 1 faca
      GUI()
      escreval("")
      escreval("")
      escreva("Digite o nome da pessoa: ")
      leia(nome)
      escreva("Digite o peso dela em kg: ")
      leia(peso)
      se peso > maiorPeso entao
         maiorPeso := peso
         nomePeso := nome
      fimse
      limpatela
   fimpara
   GUI()
fimalgoritmo