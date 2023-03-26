algoritmo "taxaImportacao"
//
var
   preco, taxado : real
inicio
   escreva("Digite o preço do produto: R$ ")
   leia(preco)
   taxado := preco + (preco * 0.6)
   escreval("Preço com impostos: R$", taxado:3:2)
fimalgoritmo