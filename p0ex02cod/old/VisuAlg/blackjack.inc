algoritmo "blackjack"
//  
Var
   vencedor : logico
   jogo, carta : caractere
   cartasJ, cartasB, placarJ, placarB: inteiro
Inicio
   procedimento blackjack()
   inicio
      boasVindas(jogo)
      jogo()//jogo = S
      despedida()//jogo = N
   fimprocedimento//BLACKJACK()
   procedimento boasVindas(play : caractere)//psg por referência opcional aqui
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
      //fimrepita////(Não funciona em algumas versões do VisuAlg)
      ate vencedor = verdadeiro
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
      se (carta <> "N") e (vencedor = falso) entao//se  usar <> nao precisamos
         cartasJ := cartasJ + randi(12) + 1//inicializar a variável carta
         calculoCartas()
      fimse
   fimprocedimento//PEDIDOJOGADOR()
   procedimento pedidoBanca()
   inicio
      se (cartasB < 18) e (cartasB <  cartasJ) e (vencedor = falso) entao//pedido banca
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
      escreval("Soma das cartas:")
      escreval("Jogador[1]...["+numpcarac(cartasJ)+"]")
      escreval("Banca........["+numpcarac(cartasB)+"]")
   fimprocedimento//DISPLAYSOMA()
   procedimento outraCarta()
   inicio
      repita
         escreva("Deseja outra carta? [S/N] ")
         leia(carta)
         carta := maiusc(carta)
      ate (carta="S") ou (carta="N")
   fimprocedimento//OUTRACARTA()
   procedimento placarParcial()
   inicio
      escreval(" _Placar_PARCIAL_ ")
      escreval("| Jogador....["+numpcarac(placarJ)+"] |")
      escreval("| Banca......["+numpcarac(placarB)+"] |")
      escreval("==================")
   fimprocedimento//DISPLAYPARCIAL()
   procedimento outraRodada(var round : caractere)//referência obrigatória aqui
   inicio
      repita
         escreva("Deseja jogar novamente? [S/N] ")
         leia(round)
         round := maiusc(round)
      ate (round = "S") ou (round = "N")
   fimprocedimento//OUTRARODADA()
   procedimento reset()
   inicio
      se jogo = "S" entao
         vencedor := falso
         carta := "S"
         cartasJ := 0
         cartasB := 0
      senao
         placarFinal()
      fimse
   fimprocedimento//RESET()
   procedimento placarFinal()
   inicio
      banner()
      escreval(" _Placar__FINAL__ ")
      escreval("| Jogador....["+numpcarac(placarJ)+"] |")
      escreval("| Banca......["+numpcarac(placarB)+"] |")
      escreval("==================")
   fimprocedimento//PLACARFINAL()
   procedimento despedida()
   inicio
      se (jogo = "N") ou (jogo = "n") entao
         escreval("Aguardamos o Sr. em uma outra oportunidade.")
         escreval("Aproveite outros jogos no Cassino.")
      fimse
   fimprocedimento//DESPEDIDA()
   blackjack()//procedimento para integrar todo esse script num cassino
fimalgoritmo
