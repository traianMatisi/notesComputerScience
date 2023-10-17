/*
Hard coded - Shift register (SN74HC595N)
by 0ffie, Traian and Gambihacks
*/

//Variáveis globais
int bin = 0; //variável p digito binário
int num = 0; //numero decimal p converter p bit
int cont = 0; //contador
int ckPin = 10; //saída digital 10
int ltPin = 11; //saída digital 11
int dtPin = 12; //saída digital 12

void setup ()
{
  //setup de pinagem
  pinMode(ckPin, OUTPUT);
  pinMode(ltPin, OUTPUT);
  pinMode(dtPin, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

  //limpando leds da protoboard acendendo todas
  for (int i = 7; i >= 0; i--)
  {
    digitalWrite(dtPin, HIGH);
    digitalWrite(ckPin, HIGH);
    digitalWrite(ckPin, LOW);
    digitalWrite(dtPin, LOW);
  }
  digitalWrite(ltPin, HIGH);
  digitalWrite(ltPin, LOW);

  //contagem regressiva para loop
  for (int i = 5; i > 0 ; i--)
  {
    for (int j = i; j > 0; j--)
    {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(100);
      digitalWrite(LED_BUILTIN, LOW);
      delay(100);
    }
    delay(500);
  }
}

void loop ()
{
  //mantém aceso led do arduino enquanto calcula o byte
  digitalWrite(LED_BUILTIN, HIGH);

  //cálculo do byte
  for (int i = 0; i <= 7; i++)
  {
    bin = num%2;
    if (bin == 1)
    {
      digitalWrite(dtPin, HIGH);
      digitalWrite(ckPin, HIGH);
      digitalWrite(ckPin, LOW);
      digitalWrite(dtPin, LOW);
    }
    else
    {
     digitalWrite(ckPin, HIGH);
     digitalWrite(ckPin, LOW);
    }
    num /= 2;
  }
  //escrita do byte
  digitalWrite(ltPin, HIGH);
  digitalWrite(ltPin, LOW);

  //contagem do loop
  cont++;
  if (cont > 255) //shift register possui 8 leds
  {
    cont = 0;
  }
  num = cont;

  //fim do cálculo do byte
  digitalWrite(13, LOW);
  delay(999);
}
