algoritmo "semnome"
var
   sn, resposta : caractere
   posicao : inteiro
inicio
   sn := "SN"
   repita
      escreval("Digite Sim ou Não: [S/N]")
      leia(resposta)
      resposta := maiusc(resposta)
      posicao := pos(resposta, sn)
   ate posicao > 0
fimalgoritmo