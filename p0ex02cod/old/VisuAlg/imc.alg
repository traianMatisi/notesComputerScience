algoritmo "imc"
//Faixas de IMC (fonte: Gustavo Guanabara - Curso em V�deo)
//<17 muito abaixo do peso
//>= 17 e < 18.5 abaixo do peso
//18.5 e 25 peso ideal
//30 sobrepeso
//35 obesidade
//40 obesidade severa
//40+ obesidade m�rbida
//
var
   peso, altura, imc : real
inicio
   escreva("Digite seu peso (kg): ")
   leia(peso)
   escreva("Digite agora sua altura (m): ")
   leia(altura)
   imc := peso/(altura^2)
   se (imc < 17) entao
      escreval("Voc� est� anor�xico")
   senao
      se ((imc >= 17) e (imc < 18.5)) entao
         escreval("Voc� est� abaixo do peso ideal")
      senao
         se ((imc >= 18.5) e (imc < 25)) entao
            escreval("Voc� est� no peso ideal")
         senao
            se ((imc >= 25) e (imc < 30)) entao
               escreval("Voc� est� com sobrepeso")
            senao
               se ((imc >= 30) e (imc < 35)) entao
                  escreval("Voc� est� obeso")
               senao
                  se ((imc >= 35) e (imc < 40)) entao
                     escreval("Voc� est� com obesidade severa")
                  senao
                     escreval("Voc� est� com obesidade m�rbida")
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse
   escreval("IMC = ", imc:3:2)
fimalgoritmo