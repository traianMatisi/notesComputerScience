/*
Morse code alphabet
Traian Matisi - 29/06/2022
Last modified - 01/07/2022
*/

int morseLed = 13;

void setup()
{
  pinMode(morseLed, OUTPUT);
}

void loop()
{
  delay(3000);
  
  //startCountdown
  for(int i = 5; i > 0; i--)
  {
    for(int j = i; j > 0; j--)
    {
      dot();
      wordsSpace();
    }
    wordsSpace();
  }
  
  delay(3000);
  
  //A .-
  dot();
  dash();
  wordsSpace();
  
  //B -...
  dash();
  dot();
  dot();
  dot();
  wordsSpace();
  
  //C -.-.
  dash();
  dot();
  dash();
  dot();
  wordsSpace();
  
  //D -..
  dash();
  dot();
  dot();
  wordsSpace();
  
  //E .
  dot();
  wordsSpace();
  
  //F ..-.
  dot();
  dot();
  dash();
  dot();
  wordsSpace();
  
  //G --.
  dash();
  dash();
  dot();
  wordsSpace();
  
  //H ....
  dot();
  dot();
  dot();
  dot();
  wordsSpace();
  
  //I ..
  dot();
  dot();
  wordsSpace();
  
  //J .---
  dot();
  dash();
  dash();
  dash();
  wordsSpace();
  
  //K -.-
  dash();
  dot();
  dash();
  wordsSpace();
  
  //L .-..
  dot();
  dash();
  dot();
  dot();
  wordsSpace();
  
  //M --
  dash();
  dash();
  wordsSpace();
  
  //N -.
  dash();
  dot();
  wordsSpace();  
  
  //O ---
  dash();
  dash();
  dash();
  wordsSpace();
  
  //P .--.
  dot();
  dash();
  dash();
  dot();
  wordsSpace();
    
  //Q --.-
  dash();
  dash();
  dot();
  dash();
  wordsSpace();
  
  //R .-.
  dot();
  dash();
  dot();
  wordsSpace();
  
  //S ...
  dot();
  dot();
  dot();
  wordsSpace();
    
  //T -
  dash();
  wordsSpace();
  
  //U ..-
  dot();
  dot();
  dash();
  wordsSpace();
  
  //V ...-
  dot();
  dot();
  dot();
  dash();
  wordsSpace();
  
  //W .--
  dot();
  dash();
  dash();
  wordsSpace();
  
  //X -..-
  dash();
  dot();
  dot();
  dash();
  wordsSpace();
  
  //Y -.--
  dash();
  dot();
  dash();
  dash();
  wordsSpace();
  
  //Z --..
  dash();
  dash();
  dot();
  dot();
  wordsSpace();
  
  //0 -----
  dash();
  dash();
  dash();
  dash();
  dash();
  wordsSpace();
  
  //1 .----
  dot();
  dash();
  dash();
  dash();
  dash();
  wordsSpace();
  
  //2 ..---
  dot();
  dot();
  dash();
  dash();
  dash();
  wordsSpace();
  
  //3 ...--
  dot();
  dot();
  dot();
  dash();
  dash();
  wordsSpace();
  
  //4 ....-
  dot();
  dot();
  dot();
  dot();
  dash();
  wordsSpace();
   
  //5 .....
  dot();
  dot();
  dot();
  dot();
  dot();
  wordsSpace();
   
  //6 -....
  dash();
  dot();
  dot();
  dot();
  dot();
  wordsSpace();
  
  //7 --...
  dash();
  dash();
  dot();
  dot();
  dot();
  wordsSpace();
  
  //8 ---..
  dash();
  dash();
  dash();
  dot();
  dot();
  wordsSpace();
  
  //9 ----.
  dash();
  dash();
  dash();
  dash();
  dot();
  wordsSpace();
  
  //restartingMorse
  int k = 10;
  int l = 250;
  while(k <= l)
  {
    digitalWrite(morseLed, HIGH);
    delay(k);
    digitalWrite(morseLed, LOW);
    delay(l);
    l -= 10;
  }
}

void dot()
{
  //dot
  digitalWrite(morseLed, HIGH);
  delay(100);
  digitalWrite(morseLed, LOW);
  delay(100);
}

void dash()
{
  //dash
  digitalWrite(morseLed, HIGH);
  delay(300);
  digitalWrite(morseLed, LOW);
  delay(100);
}

void wordsSpace()
{
  //space
  delay(700);
}
