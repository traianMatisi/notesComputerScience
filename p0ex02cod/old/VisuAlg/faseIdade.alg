algoritmo "faseIdade"
//
var
   anoAtual, anoNascimento, idade : inteiro
inicio
   escreva("Qual o ano atual? aaaa : ")
   leia(anoAtual)
   escreva("E qual o ano do seu nascimento? aaaa : ")
   leia(anoNascimento)
   idade := anoAtual - anoNascimento
   se (idade <= 2) entao
      escreval("Voc� � um beb�.")
   senao
      se ((idade > 2) e (idade <= 6)) entao
         escreval("Voc� � uma criancinha.")
      senao
         se ((idade > 6) e (idade <= 9)) entao
            escreval("Voc� � uma crian�a.")
         senao
            se ((idade > 9) e (idade < 12)) entao
               escreval("Voc� � um pr� adolescente")
            senao
               se((idade >= 12) e (idade < 18)) entao
                  escreval("Voc� � um adolescente.")
               senao
                  se ((idade >= 18) e (idade < 30)) entao
                     escreval("Voc� � um adulto jovem.")
                  senao
                     se ((idade >= 30) e (idade < 65)) entao
                        escreval("Voc� � um adulto de meia idade")
                     senao
                        se ((idade >= 65) e (idade < 75)) entao
                           escreval("Voc� � idoso")
                        senao
                           escreval("Voc� � um Highlander!?")
                        fimse
                     fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse
fimalgoritmo