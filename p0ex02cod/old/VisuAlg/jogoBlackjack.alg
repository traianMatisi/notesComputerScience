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
var
   vencedor : logico
   jogo, carta : caractere
   cartaJ, cartaB, totalJ, totalB, placarJ, placarB: inteiro
inicio
   escreva("Boa noite Sr. Gostaria de jogar Blackjack? ")
   carta := "S"
   repita
      escreva("[S/N] ")
      leia(jogo)
   ate (jogo = "S") ou (jogo = "s") ou (jogo = "N") ou (jogo="n")
   enquanto (jogo = "S") ou (jogo = "s") faca
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
               se (carta = "S") ou (carta = "s") entao//pedido jogador
                  cartaJ := randi(12) + 1 //randi() é aleatótio a partir de 0
                  totalJ := totalJ + cartaJ
               fimse
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
               se vencedor = verdadeiro entao
                  interrompa
               senao
                  se (totalB < totalJ) e (totalJ < 21) entao//pedido banca
                     cartaB := randi(12) + 1 //randi() é aleatório a partir de 0
                     totalB := totalB + cartaB
                  fimse
               fimse
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
                  escreval("Soma das cartas da banca = ", totalB)
               fimse
            fimse
         fimse
         se vencedor = falso entao
            repita
               escreva("Deseja outra carta? [S/N] ")
               leia(carta)
            ate (carta="S")ou(carta="s")ou(carta="N")ou(carta="n")
            se (carta = "N") ou (carta = "n") entao
               enquanto (totalB <= totalJ) faca
                  cartaB := randi(12) + 1
                  totalB := totalB + cartaB
               fimenquanto
               se (totalB < 21) entao
                  vencedor := verdadeiro
                  limpatela
                  escreval("A banca leva essa partida")
                  placarB := placarB + 1
                  escreval("Placar parcial:")
                  escreval("Jogador...["+numpcarac(placarJ)+"]")
                  escreval("Banca.....["+numpcarac(placarB)+"]")
               senao
                  se (totalJ < 21) entao
                     vencedor := verdadeiro
                     limpatela
                     escreval("O jogador leva essa partida.")
                     placarJ := placarJ + 1
                     escreval("Placar parcial:")
                     escreval("Jogador...["+numpcarac(placarJ)+"]")
                     escreval("Banca.....["+numpcarac(placarB)+"]")
                  fimse
               fimse
            fimse
         fimse
      ate vencedor = verdadeiro
      repita
         escreva("Deseja jogar novamente? [S/N] ")
         leia(jogo)
      ate (jogo = "S") ou (jogo = "s") ou (jogo = "N") ou (jogo="n")
      se (jogo = "S") ou (jogo = "s") entao
         vencedor := falso
         carta := "S"
         cartaJ := 0
         cartaB := 0
         totalJ := 0
         totalB := 0
      senao
         limpatela
         escreval("Placar final:")
         escreval("Jogador...["+numpcarac(placarJ)+"]")
         escreval("Banca.....["+numpcarac(placarB)+"]")
      fimse
   fimenquanto
   se (jogo = "N") ou (jogo = "n") entao
      escreval("Aguardamos o Sr. em uma outra oportunidade.")
      escreval("Aproveite outros jogos no Cassino.")
   fimse
fimalgoritmo