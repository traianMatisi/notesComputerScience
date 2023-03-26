algoritmo "blackjack"
// O jogo não está estatísticamente correto pois não leva os naipes em
//consideração, portanto um "naipe" pode aparecer até 5 vezes, para isso é
//necessário criar uma matriz com as 52 cartas, matriz estará mais a frente
//nas aulas
//
// Ainda, a função RANDI gera números aleatórios inteiros a partir do zero
//daí o motivo de precisarmos somar 1 nele, já que o VisuAlg não recebe
//um limite inferior como argumento do Randi
//
//O comando INTERROMPA nao funciona como o BREAK, ele apenas interrompe
//os comandos abaixo dele no bloco em que ele se encontra. Isso torna ele
//inapropriado pra criar jogos no terminal devido ao abuso do comando
//
//Houve um bug persistente devido à ordem dos blocos incorreta
// os ATE e ENQUANTO estavam em conflito por causa de um FIMSE no meio
//
//Ainda há um bug que mostra o total das cartas da banca quando
//ela vence a partida
//
var
   vencedor : logico
   jogo, carta : caractere
   cartaJ, cartaB, totalJ, totalB, placarJ, placarB: inteiro
inicio
   procedimento blackjack()//main(void){
   inicio
      boasVindas()
      jogo()
      despedida()
   fimprocedimento//BLACKJACK()
   procedimento boasVindas()
   inicio
      escreva("Boa noite Sr. Gostaria de jogar Blackjack? ")
      carta := "S"
      repita
         escreva("[S/N] ")
         leia(jogo)
      ate (jogo = "S") ou (jogo = "s") ou (jogo = "N") ou (jogo="n")
   fimprocedimento//BOASVINDAS()
   procedimento jogo()
   inicio
      enquanto (jogo = "S") ou (jogo = "s") faca
         rodada()
         outraRodada()
      fimenquanto
   fimprocedimento//JOGO()
   procedimento despedida()
   inicio
      se (jogo = "N") ou (jogo = "n") entao
         escreval("Aguardamos o Sr. em uma outra oportunidade.")
         escreval("Aproveite outros jogos no Cassino.")
      fimse
   fimprocedimento//DESPEDIDA()
   procedimento rodada()
   inicio
      repita
         se vencedor = verdadeiro entao
            interrompa
         senao
            limpatela
            escreval("---------------------")
            escreval("|  $  BLACKJACK  $  |")
            escreval("---------------------")
            se vencedor = verdadeiro entao
               interrompa
            senao
               pedidoJogador()
               calculoJogador()
               pedidoBanca()
               calculoBanca()
            fimse
            outraCarta()
            bancaTenta()
            //calculoVencedor()
      ate vencedor = verdadeiro
   fimprocedimento//RODADA()
   procedimento pedidoJogador()
   inicio
      se (carta = "S") ou (carta = "s") entao//pedido jogador
         cartaJ := randi(12) + 1 //randi() é aleatótio a partir de 0
         totalJ := totalJ + cartaJ
      fimse
   fimprocedimento//PEDIDOJOGADOR()
   procedimento calculoJogador()
   inicio
      se (totalJ > 21) entao
         vencedor := verdadeiro
         placarB := placarB + 1
         limpatela
         escreval("Que pena, a banca leva essa rodada!")
         escreval("Soma das cartas do jogador...", totalJ)
         escreval("Soma das cartas da banca.....", totalB)
         escreval("Placar parcial:")
         escreval("Jogador...["+numpcarac(placarJ)+"]")
         escreval("Banca.....["+numpcarac(placarB)+"]")
      senao
         se vencedor = verdadeiro entao
            interrompa
         senao
            escreval("Soma das cartas do jogador = ", totalJ)
         fimse
      fimse
   fimse
   fimprocedimento//CALCULOJOGADOR()
   procedimento pedidoBanca()
   inicio
   //se ((carta = "S") ou (carta = "s")) entao
      se vencedor = verdadeiro entao
         interrompa
      senao
         se (totalB < 17) entao//pedido banca
            cartaB := randi(12) + 1 //randi() é aleatório a partir de 0
            totalB := totalB + cartaB
         fimse
      fimse
   //fimse
   fimprocedimento//PEDIDOBANCA()
   procedimento calculoBanca()
   inicio
      se (totalB > 21) entao
         vencedor := verdadeiro
         placarJ := placarJ + 1
         limpatela
         escreval("Parabéns, o sr venceu essa rodada!")
         escreval("Soma das cartas do jogador...", totalJ)
         escreval("Soma das cartas da banca.....", totalB)
         escreval("Placar parcial:")
         escreval("Jogador...["+numpcarac(placarJ)+"]")
         escreval("Banca.....["+numpcarac(placarB)+"]")
      senao
         se vencedor = verdadeiro entao
            interrompa
         senao
            escreval("Soma das cartas da banca = ", totalB)
         fimse
      fimse
   fimprocedimento//CALCULOBANCA()
   procedimento bancaTenta()
   inicio
      se (carta = "N") ou (carta = "n") entao
         enquanto (totalB <= totalJ) e (totalB < 21) e (totalJ <= 18) faca
            limpatela
            timer(600)
            cartaB := randi(12) + 1
            totalB := totalB + cartaB
            escreval("Soma das cartas do jogador...[",totalJ,"]")
            escreval("Soma das cartas da banca.....[",totalB,"]")
            timer(0)
         fimenquanto
         se (totalB > totalJ) e (totalB <= 21) entao
            vencedor := verdadeiro
            limpatela
            placarB := placarB + 1
            escreval("Soma das cartas do jogador...[",totalJ,"]")
            escreval("Soma das cartas da banca.....[",totalB,"]")
            escreval("A banca leva")
            escreval("Placar parcial:")
            escreval("Jogador...["+numpcarac(placarJ)+"]")
            escreval("Banca.....["+numpcarac(placarB)+"]")
         senao
            vencedor := verdadeiro
            limpatela
            placarj := placarJ + 1
            escreval("Soma das cartas do jogador...[",totalJ,"]")
            escreval("Soma das cartas da banca.....[",totalB,"]")
            escreval("Parabéns jogador!")
            escreval("Placar parcial:")
            escreval("Jogador...["+numpcarac(placarJ)+"]")
            escreval("Banca.....["+numpcarac(placarB)+"]")
         fimse
      fimse
   fimprocedimento//BANCATENTA()
   procedimento outraRodada()
   inicio
      repita
         escreva("Deseja jogar novamente? [S/N] ")
         leia(jogo)
      ate (jogo = "S") ou (jogo = "s") ou (jogo = "N") ou (jogo="n")
      se (jogo = "S") ou (jogo = "s") entao
         reset()
      senao
         limpatela
         escreval("Placar final:")
         escreval("Jogador...["+numpcarac(placarJ)+"]")
         escreval("Banca.....["+numpcarac(placarB)+"]")
      fimse
   fimprocedimento//OUTRARODADA()
   procedimento outraCarta()
   inicio
      se vencedor = falso entao
         repita
            escreva("Deseja outra carta? [S/N] ")
            leia(carta)
         ate (carta="S")ou(carta="s")ou(carta="N")ou(carta="n")
      fimse
   fimprocedimento//OUTRACARTA()
   procedimento calculoVencedor()
   inicio
      se ((carta = "N") ou (carta = "n")) entao
         se (totalB > totalJ) e (totalB <= 21) entao
            escreval("Soma das cartas do jogador...[",totalJ,"]")
            escreval("Soma das cartas da banca.....[",totalB,"]")
            escreval("A banca leva")
         senao
            escreval("Soma das cartas do jogador...[",totalJ,"]")
            escreval("Soma das cartas da banca.....[",totalB,"]")
            escreval("Parabéns jogador!")
         fimse
      fimse
   fimprocedimento//CALCULOVENCEDOR()
   procedimento reset()
   inicio
      vencedor := falso
      carta := "S"
      cartaJ := 0
      cartaB := 0
      totalJ := 0
      totalB := 0
   fimprocedimento//RESET()
//acima só há procedimentos(blocos de rotinas sem RETORNO)
//Abaixo é o código de fato em uma única linha [int main(void)]
   blackjack()
fimalgoritmo