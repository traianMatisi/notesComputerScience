#include <stdio.h>

int main(){

    int i, j, ii, ij, fi, fj; // iteraçoes
    int U = 1, D = 1, L = 1, R = 1; // up down left right
    int l, c; // linhas colunas

    

    scanf("%d %d", &l, &c);
    
    char mapa[l][c];
    
    for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			scanf(" %c", &mapa[i][j]);
		}
	}


    for (i = 0; i < l; i++){

        for (j = 0; j < c; j++){

            if (mapa[i][j] == 'F'){
                fi = i;
                fj = j;
            }

            if (mapa[i][j] == 'I'){
                ii = i;
                ij = j;
            }
        }
    }

    if(ii > fi){

        for (i = ii; i > fi; i--){

            if (mapa[i][ij] == 'X'){
                U = 1;
                break;
            }
            else{
                U = 0;
            }
        }

        if(i == fi && U == 0){
            if(ij < fj){

                for (j = ij; j < fj; j++){
                    if (mapa[fi][j] == 'X'){
                        R = 1;
                        break;
                    }
                    else{
                        R = 0;
                    }
                }
            }
            else{

                for (j = ij; j > fj; j--){

                    if (mapa[fi][j] == 'X'){
                        L = 1;
                        break;
                    }
                    else{
                        L = 0;
                    }
                }
            }
        }
    }
    else{

        for (i = ii; i < fi; i++){

            if(mapa[i][ij] == 'X'){
                D = 1;
                break;
            }
            else{
                D = 0;
            }
        }

        if(i == fi && D == 0){

            if(ij < fj){

                for (j = ij; j < fj; j++){

                    if (mapa[fi][j] == 'X'){
                        R = 1;
                        break;
                    }
                    else{
                        R = 0;
                    }
                }
            }
            else{

                for (j = ij; j > fj; j--){

                    if (mapa[fi][j] == 'X'){
                        L = 1;
                        break;
                    }
                    else{
                        L = 0;
                    }
                }
            }
        }
    }

    if(ij < fj){

        for (j = ij; j < fj; j++){

            if (mapa[ii][j] == 'X'){
                R = 1;
                break;
            }
            else{
                R = 0;
            }
        }

        if(j == fj && R == 0){

            if(ii > fi){

                for (i = ii; i > fi; i--){

                    if (mapa[i][fj] == 'X'){
                        U = 1;
                        break;
                    }
                    else{
                        U = 0;
                    }
                }
            }
            else{

                for (i = ii; i < fi; i++){

                    if (mapa[i][fj] == 'X'){
                        D = 1;
                        break;
                    }
                    else{
                        D = 0;
                    }
                }
            }
        }
    }

    else{
        for (j = ij; j > fj; j--){

            if (mapa[ii][j] == 'X'){
                L = 1;
                break;
            }
            else{
                L = 0;
            }
        }

        if(j == fj && L == 0){

            if(ii > fi){

                for (i = ii; i > fi; i--){

                    if (mapa[i][fj] == 'X'){
                        U = 1;
                        break;
                    }
                    else{
                        U = 0;
                    }
                }
            }
            else{

                for (i = ii; i < fi; i++){
                    if (mapa[i][fj] == 'X'){
                        D = 1;
                        break;
                    }
                    else{
                        D = 0;
                    }
                }
            }
        }
    }

    if (U == 0 && R == 0 || U == 0 && L == 0 || D == 0 && R == 0 || D == 0 && L == 0){
        printf("S");
    }
    else{
        printf("N");
    }
    return 0;
}