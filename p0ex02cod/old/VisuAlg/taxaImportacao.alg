algoritmo "taxaImportacao"
//
var
   preco, taxado : real
inicio
   escreva("Digite o pre�o do produto: R$ ")
   leia(preco)
   taxado := preco + (preco * 0.6)
   escreval("Pre�o com impostos: R$", taxado:3:2)
fimalgoritmo