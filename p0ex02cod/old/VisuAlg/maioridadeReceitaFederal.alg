algoritmo "maioridadeReceitaFederal"
//
var
   anoAtual, anoNascimento, idade : inteiro
inicio
   escreval("-------------------------")
   escreval("     Receita Federal     ")
   escreval("-------------------------")
   escreva("Digite o ano atual (4 d�gitos): ")
   leia(anoAtual)
   escreva("Digite o ano do seu nascimento (4 d�gitos): ")
   leia(anoNascimento)
   idade := anoAtual - anoNascimento
   se (idade >= 18) entao
      escreval("")
      escreval("----------STATUS----------")
      escreval("       Idade = ", idade)
      escreval("      Apto a tirar CNH")
      escreval("Declara imposto ou isen��o")
      escreval("--------------------------")
   senao
      escreval("")
      escreval("----------STATUS----------")
      escreval("       Idade = ", idade)
      escreval("     Inapto a tirar CNH")
      escreval("Isento de imposto de renda")
      escreval("--------------------------")
   fimse
fimalgoritmo