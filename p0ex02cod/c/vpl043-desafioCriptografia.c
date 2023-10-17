/*
DESAFIO - CRIPTOGRAFIA
Solicitaram para que você construisse um programa simples de criptografia. Este programa deve possibilitar enviar mensagens codificadas sem que alguém consiga lê-las. O processo é muito simples. São feitas três passadas em todo o texto. 

Na primeira passada, somente caracteres que sejam letras minúsculas e maiúsculas devem ser deslocadas 3 posições para a direita, segundo a tabela ASCII: letra 'a' deve virar letra 'd', letra 'y' deve virar caractere '|' e assim sucessivamente. Na segunda passada, a linha deverá ser invertida. Na terceira e última passada, todo e qualquer caractere a partir da metade em diante (truncada) devem ser deslocados uma posição para a esquerda na tabela ASCII. Neste caso, 'b' vira 'a' e 'a' vira '`'.

Por exemplo, se a entrada for “Texto #3”, o primeiro processamento sobre esta entrada deverá produzir “Wh{wr #3”. O resultado do segundo processamento inverte os caracteres e produz “3# rw{hW”. Por último, com o deslocamento dos caracteres da metade em diante, o resultado final deve ser “3# rvzgV”.
Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso de teste contém um inteiro N (1 ≤ N ≤ 1*104), indicando a quantidade de linhas que o problema deve tratar. As N linhas contém cada uma delas M (1 ≤M ≤ 1*103) caracteres.

Saída
Para cada entrada, deve-se apresentar a mensagem criptografada.

Exemplo:
Entrada
4
Texto #3
abcABC1
vxpdylY .ph
vv.xwfxo.fd

Saída
3# rvzgV
1FECedc
ks. \n{frzx
gi.r{hyz-xx
*/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int tmp, l, leng = 0;
    char*palavra = malloc(256 * sizeof(char));
    fgets(palavra, 255, stdin);
    // LEITURA TAMANHO DA PALAVRA DIGITADA
    for (int i = 0; *(palavra+i) != '\0'; i++)
    {
        leng++;
    }
    l = leng;
    // PRIMEIRO TRABALHO DESLOCAMENTO DIREITO 3 DAS LETRAS
    for(int i = 0; *(palavra+i) != '\0'; i++)
    {
        if((*(palavra+i) > 64 && *(palavra+i) < 91) || (*(palavra+i) > 96 && *(palavra+i) < 123))
        {
            *(palavra+i) += 3;
        }
    }
    // SEGUNDO TRABALHO INVERTER A PALAVRA
    for(int i = 0, l = leng-2; i < leng/2; i++, l--)// (-2) referentes a '\n' e '\0'
    {
        tmp = *(palavra+i);
        *(palavra+i) = *(palavra+l);
        *(palavra+l) = tmp;
    }
    // TERCEIRO TRABALHO INVERTE SEGUNDA METADE 1 CARACTER PRA ESQUERDA
    l = leng;
    printf("l = %i\n", l);
    for(int i = l-2; i > ((l/2)-2+(l%2)); i--)// (l-2) --> \0 e \n
    {
        *(palavra+i) -= 1;
    }
    // IMPRESSAO MENSAGEM CIFRADA
    for (int i = 0; *(palavra+i) != '\0'; i++)
    {
        printf("%c", *(palavra+i));
    }
    /**/
    return 0;
}
// Tive bastante problemas pra acertar a condicao do terceiro trabalho
// Length teve dois caracteres no fim, new line (\n) e null (\0) que me confundiu