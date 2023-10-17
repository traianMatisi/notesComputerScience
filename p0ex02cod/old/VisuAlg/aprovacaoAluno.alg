algoritmo "aprovacaoAluno"
//Primeira nota abaixo de 3.0: Reprovação automática
//Média das duas primeiras notas maior ou igual a 7.0: Aprovado
//Média das duas primeiras notas menor do que 7.0: Recuperação
//Média final maior ou igual a 5.0: Aprovado
//Média final menor do que 5.0: Reprovado
//
var
   nota1, nota2, nota3, media, mediaFinal : real
inicio
   escreva("Digite a 1a nota: ")
   leia(nota1)
   se (nota1 < 3.0) entao
      escreval("Nota ", nota1:2:1)
      escreval("Baixo rendimento escolar, reprovado automaticamente")
   senao
      escreva("Digite a 2a nota: ")
      leia(nota2)
      media := (nota1 + nota2) / 2
      se (media >= 7.0) entao
         escreval("Nota ", media:2:1)
         escreval("Aluno aprovado")
      senao
         escreval("Nota ", media:2:1)
         escreval("Nota insuficiente para aprovação")
         escreva("Digite a nota da prova de recuperação: ")
         leia(nota3)
         mediaFinal := (media + nota3) / 2
         se (mediaFinal < 5.0) entao
            escreval("Nota ", mediaFinal:2:1)
            escreval("Aluno reprovado")
         senao
            escreval("Nota ", mediaFinal:2:1)
            escreval("Aluno aprovado")
         fimse
      fimse
   fimse
fimalgoritmo