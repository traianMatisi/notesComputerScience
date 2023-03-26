algoritmo "testesSintaxeInterrompa"
var
   x, y, z : caractere
   d, v : inteiro
inicio
   x := "x"
   y := "y"
   z := "z"
   d := 10
   v := 20
   repita
      repita
         d := d + 1
         escreval("D=",d)
         se d > 15 entao
            interrompa
         fimse
         escreval("Dx")
         escreval("Dy")
         escreval("Dz")
      ate d = 20
      v := v + 1
      escreval("V=",v)
      escreval("Vx")
      escreval("Vy")
      escreval("Vz")
   ate v = 30
fimalgoritmo