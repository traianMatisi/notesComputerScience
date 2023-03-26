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
      escreval("Você é um bebê.")
   senao
      se ((idade > 2) e (idade <= 6)) entao
         escreval("Você é uma criancinha.")
      senao
         se ((idade > 6) e (idade <= 9)) entao
            escreval("Você é uma criança.")
         senao
            se ((idade > 9) e (idade < 12)) entao
               escreval("Você é um pré adolescente")
            senao
               se((idade >= 12) e (idade < 18)) entao
                  escreval("Você é um adolescente.")
               senao
                  se ((idade >= 18) e (idade < 30)) entao
                     escreval("Você é um adulto jovem.")
                  senao
                     se ((idade >= 30) e (idade < 65)) entao
                        escreval("Você é um adulto de meia idade")
                     senao
                        se ((idade >= 65) e (idade < 75)) entao
                           escreval("Você é idoso")
                        senao
                           escreval("Você é um Highlander!?")
                        fimse
                     fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse
fimalgoritmo