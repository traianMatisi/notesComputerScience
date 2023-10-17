algoritmo "superContador"
//Quero tentar implementar um limpatela pra UX
//
var
   menu, inicial : inteiro
inicio
   repita
      escreval("==================")
      escreval("||     MENU     ||")
      escreval("==================")
      escreval("| [1] De 1 a 10  |")
      escreval("| [2] De 10 a 1  |")
      escreval("| [3] Sair       |")
      escreval("==================")
      leia(menu)
      escolha menu
      caso 1
         inicial := 1
         enquanto inicial <= 10 faca
            escreva(inicial)
            se inicial <> 10 entao
               escreva("->")
            fimse
            inicial := inicial + 1
         fimenquanto
      caso 2
         inicial := 10
         enquanto inicial >= 1 faca
            escreva(inicial)
            se inicial <> 1 entao
               escreva("->")
            fimse
            inicial := inicial - 1
         fimenquanto
      fimescolha
      escreval("")
   ate menu = 3
fimalgoritmo