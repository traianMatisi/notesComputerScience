#include <stdio.h>
#include <string.h>

int main()
{
    char vetor[1001];
    int leds[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int loop, led = 0, tamanho, numero = 0;
    scanf("%d", &tamanho);
    while(tamanho > 0)
    {
        scanf("%s", vetor);
        for(loop = 0; loop < strlen(vetor); loop++)
        {
            numero = (int)vetor[loop]-'0';
            led += leds[numero];
        }
        printf("%d leds\n", led);
        led = 0;
        tamanho--;
    }
    return 0;
}