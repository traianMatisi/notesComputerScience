algoritmo "testesSintaxeENQUANTO"
//Se tentar deixar os SEs de fora do ENQUANTO o loop fica infinito
//As condi��es do enquanto podem ser trocadas pelo
//mais simples ENQUANTO VERDADEIRO
//
var
   r : caractere
inicio
   enquanto (r <> "S")ou(r <> "s")ou(r <> "N")ou(r <> "n") faca
      escreva("responda sim ou n�o: [S/N] ")
      leia(r)
      se (r = "S")ou(r = "s") entao
         escreval("Perfeito: Sim")
         interrompa
      fimse
      se (r = "N")ou(r = "n") entao
         escreval("N�o? Tranquilo ent�o...")
         interrompa
      fimse
   fimenquanto
fimalgoritmo
