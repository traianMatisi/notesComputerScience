algoritmo "salarioDependentes"
//0 dependentes, aumento de 5%
//1, 2 ou 3 dependentes, aumento de 10%
//4, 5 ou 6 dependentes, aumento de 15%
//7+ dependentes, aumento de 18%
//
var
   nome : caractere
   salario, corrigido : real
   dependentes : inteiro
inicio
   escreva("Nome: ")
   leia(nome)
   escreva("Num de dependentes")
   leia(dependentes)
   escreva("Salário atual")
   leia(salario)
   escolha dependentes
      caso 0
         corrigido := salario + salario * 0.05
      caso 1, 2, 3
         corrigido := salario + salario * 0.10
      caso 4, 5, 6
         corrigido := salario + salario * 0.15
      outrocaso
         corrigido := salario + salario * 0.18
   fimescolha
   escreval(nome + " deverá receber R$ ", corrigido:5:2)
   //perceba acima: concatenação e números
fimalgoritmo