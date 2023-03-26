algoritmo "testesSintaxeENQUANTO"
//Se tentar deixar os SEs de fora do ENQUANTO o loop fica infinito
//As condições do enquanto podem ser trocadas pelo
//mais simples ENQUANTO VERDADEIRO
//
var
   r : caractere
inicio
   enquanto (r <> "S")ou(r <> "s")ou(r <> "N")ou(r <> "n") faca
      escreva("responda sim ou não: [S/N] ")
      leia(r)
      se (r = "S")ou(r = "s") entao
         escreval("Perfeito: Sim")
         interrompa
      fimse
      se (r = "N")ou(r = "n") entao
         escreval("Não? Tranquilo então...")
         interrompa
      fimse
   fimenquanto
fimalgoritmo
