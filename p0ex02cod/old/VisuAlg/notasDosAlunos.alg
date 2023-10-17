algoritmo "maiorNotaDosAlunos"
var
   alunos, contador : inteiro
   notas, maior : real
inicio
   escreva("Quantos alunos fizeram a prova? ")
   leia(alunos)
   contador := 1
   maior := 0
   enquanto (contador <= alunos) faca
      escreva("Digite a nota da "+numpcarac(contador)+"a prova: ")
      leia(notas)
      se (notas > maior) entao
         maior := notas
      fimse
      contador := contador + 1
   fimenquanto
   escreval("Maior nota conquistada foi ", maior)
fimalgoritmo