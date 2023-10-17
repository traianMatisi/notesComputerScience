algoritmo "blackjack"
//  
//  
// O jogo não está estatísticamente correto pois não leva os naipes em
//consideração, portanto um "naipe" pode aparecer até 5 vezes, para isso é
//necessário criar uma matriz com as 52 cartas, matriz estará mais a frente
//nas aulas e o jogo será então refatorado
//
Var
   vencedor : logico
   jogo, carta : caractere
   cartasJ, cartasB, placarJ, placarB: inteiro
Inicio
   procedimento boasVindas(var play : caractere)
   inicio
      escreva("Boa noite Sr. Gostaria de jogar Blackjack? ")
      repita
         escreva("[S/N] ")
         leia(play)
         play := maiusc(play)
      ate (play = "S") ou (play = "N")
   fimprocedimento//BOASVINDAS()
   procedimento jogo()
   inicio
      repita
         rodada()
         outraRodada(jogo)//jogo := S ou N
         reset()
      ate jogo = "N"
   fimprocedimento//JOGO()
   procedimento rodada()
   inicio
      repita
         banner()
         pedidoJogador()
         pedidoBanca()
         displaySoma()
         se vencedor = verdadeiro entao
            placarParcial()
            interrompa
         senao
            outraCarta()
         fimse
      fimrepita//(Não funciona em algumas versões do VisuAlg)
      //ate vencedor = verdadeiro
   fimprocedimento//RODADA()
   procedimento banner()
   inicio
      limpatela
      escreval("----------------------")
      escreval("|  $  BLACKJACK  $   |")
      escreval("----------------------")
   fimprocedimento//BANNER()
   procedimento pedidoJogador()
   inicio
      se (carta <> "N") e (vencedor = falso) entao//pedido jogador
         cartasJ := cartasJ + randi(12) + 1
         calculoCartas()
      fimse
   fimprocedimento//PEDIDOJOGADOR()
   procedimento pedidoBanca()
   inicio
      se (cartasB < 22) e (vencedor = falso) entao//pedido banca
         cartasB := cartasB + randi(12) + 1
         calculoCartas()
      fimse
   fimprocedimento//PEDIDOBANCA()
   procedimento calculoCartas()
   inicio
      se (cartasB > 20) ou (cartasJ > 20) entao
         vencedor := verdadeiro
         se (cartasB = 21) ou (cartasJ > 21) entao
            escreval("A banca leva essa rodada")
            placarB := placarB + 1
         senao
            escreval("Parabéns Jogador[1] !!")
            placarJ := placarJ + 1
         fimse
      fimse
   fimprocedimento//CALCULOCARTAS()
   procedimento displaySoma()
   inicio
      escreval("")
      escreval("Soma das cartas:")
      escreval("")
      escreval(" Jogador[1]...[", cartasJ, "]")
      escreval(" Banca........[", cartasB, "]")
      escreval("")
   fimprocedimento//DISPLAYSOMA()
   procedimento outraCarta()
   inicio
      repita
         escreval("")
         escreva("Deseja outra carta? [S/N] ")
         leia(carta)
         carta := maiusc(carta)
      ate (carta="S") ou (carta="N")
   fimprocedimento//OUTRACARTA()
   procedimento placarParcial()
   inicio
      escreval("")
      escreval("Placar parcial:")
      escreval("")
      escreval("Jogador[1]...["+numpcarac(placarJ)+"]")
      escreval("Banca........["+numpcarac(placarB)+"]")
   fimprocedimento//DISPLAYPARCIAL()
   procedimento outraRodada(var round : caractere)
   inicio
      repita
         escreval("")
         escreva("Deseja jogar novamente? [S/N] ")
         leia(round)
         round := maiusc(round)
      ate (round = "S") ou (round = "N")
   fimprocedimento//OUTRARODADA()
   procedimento reset()
   inicio
      se jogo = "S" entao
         clear()
      senao
         placarFinal()
      fimse
   fimprocedimento//RESET()
   procedimento clear()
   inicio
      vencedor := falso
      carta := "S"
      cartasJ := 0
      cartasB := 0
   fimprocedimento//CLEAR()
   procedimento placarFinal()
   inicio
      banner()
      escreval("_____Placar Final_____")
      escreval("|                    |")
      escreval("|   Jogador...[",placarJ,"]   |")
      escreval("|   Banca.....[",placarB,"]   |")
      escreval("______________________")
      escreval("")
   fimprocedimento//PLACARFINAL()
   procedimento despedida()
   inicio
      se (jogo = "N") ou (jogo = "n") entao
         escreval("")
         escreval("Aguardamos o Sr. em uma outra oportunidade.")
         escreval("Aproveite outros jogos no Cassino.")
         escreval("")
      fimse
   fimprocedimento//DESPEDIDA()
//acima só há procedimentos(blocos de rotinas sem RETORNO de valores)
//Abaixo é o código de fato em uma única linha [int main(void)]
   boasVindas(jogo)
   jogo()//jogo = S
   despedida()//jogo = N
fimalgoritmo
