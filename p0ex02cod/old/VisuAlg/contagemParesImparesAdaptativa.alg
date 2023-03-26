algoritmo "contagemParesImparesAdaptativa"
//A variavel do laço para só pode ser inteiro
//
var
   ip : caractere
   x, s, inicial, final: inteiro
inicio
   escreval("Digite INICIO e FIM:  ")
   leia(inicial, final)
   repita
      escreval("Quer exibir pares ou impares?  [P/I]  ")
      leia(ip)
   ate (ip="I")ou(ip="i")ou(ip="P")ou(ip="p")
   se (ip="I")ou(ip="i") entao
      s := 1
   senao
      s := 0
   fimse
   escreval("")
   se inicial < final entao
      para x <- inicial ate final passo 1 faca
         se x % 2 = s entao
            escreva(x:2," ")
         fimse
      fimpara
   senao
      para x <- inicial ate final passo -1 faca
         se x % 2 = s entao
            escreva(x:2," ")
         fimse
      fimpara
   fimse
fimalgoritmo