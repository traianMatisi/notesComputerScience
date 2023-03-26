algoritmo "seletorDePessoas"
//As repetições de código vão sumir quando aprendermos
//procedimentos e funções
//
var
   homens, mulheres, idade, cabelo : inteiro
   resp, sexo : caractere
inicio
   resp := "s"
   enquanto (resp = "S") ou (resp = "s") faca
      repita
         escreval("============================")
         escreval("|    Seletor de pessoas    |")
         escreval("============================")
         escreval("")
         escreva("Escolha seu gênero: [M/F]  ")
         leia(sexo)
         limpatela
      ate (sexo="M")ou(sexo="m")ou(sexo="F")ou(sexo="f")
      repita
         escreval("============================")
         escreval("|    Seletor de pessoas    |")
         escreval("============================")
         escreval("")
         escreval("Escolha seu gênero: [M/F]  ", maiusc(sexo))
         escreva("Digite sua idade:  ")
         leia(idade)
         limpatela
      ate (idade > 0)
      repita
         escreval("============================")
         escreval("|    Seletor de pessoas    |")
         escreval("============================")
         escreval("")
         escreval("Escolha seu gênero: [M/F]  ", maiusc(sexo))
         escreva("Digite sua idade:  ", idade)
         escreval("")
         escreval("_________________________")
         escreval("Qual a cor do seu cabelo?")
         escreval("[1] Preto                ")
         escreval("[2] Castanho             ")
         escreval("[3] Loiro                ")
         escreval("[4] Ruivo                ")
         escreva(">>>  ")
         leia(cabelo)
         limpatela
      ate (cabelo > 0) e (cabelo < 5)
      se (sexo = "M")ou(sexo = "m") entao
         se idade > 18 entao
            se cabelo = 2 entao
               homens := homens + 1
            fimse
         fimse
      senao
         se (sexo = "F") ou (sexo = "f") entao
            se (idade >= 25) ou (idade <= 30) entao
               se cabelo = 3 entao
                  mulheres := mulheres + 1
               fimse
            fimse
         fimse
      fimse
      escreval("============================")
      escreval("|    Seletor de pessoas    |")
      escreval("============================")
      escreval("")
      escreval("Escolha seu gênero: [M/F]  ", maiusc(sexo))
      escreva("Digite sua idade:  ", idade)
      escreval("")
      escreval("_________________________")
      escreval("Qual a cor do seu cabelo?")
      escreval("[1] Preto                ")
      escreval("[2] Castanho             ")
      escreval("[3] Loiro                ")
      escreval("[4] Ruivo                ")
      escreval(">>>  ", cabelo)
      escreval("")
      escreva("Quer cadastrar outra pessoa?  [S/N]  ")
      leia(resp)
      limpatela
   fimenquanto
   escreval("-=-=-=-=-=-=-=-=-=-")
   escreval("| Resultado final |")
   escreval("-=-=-=-=-=-=-=-=-=-")
   escreval("Homens maior de 18 com cabelos castanhos, ", homens)
   escreval("Mulheres entre 25 e 30 anos e loiras, ", mulheres)
fimalgoritmo