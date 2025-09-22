#include <stdio.h>

int main(){
    // Movendo a torre 5 casas a direita

    printf("Movimentação da torre: \n");

    for (int t = 0; t < 5; t++)
    {
        printf("Direita\n"); // Imprime a direção do movimento
    }
    
    printf("\n");

    // Movendo o bispo 5 casas na diagonal na direita para cima

    int b = 0;
    
    printf("Movimentação do bispo: \n");

    do
    {
        printf("Cima, Direita\n"); // Imprime a direção do movimento
        b++;
    } while (b < 5);

    printf("\n");
    
    // Movendo a rainha 8 casas à esquerda

    int r = 0;

    printf("Movimentação da rainha: \n");

    while(r < 8){

        printf("Esquerda\n"); // Imprime a direção do movimento
        r++;
    }
    
    printf("\n");

    //Movendo o cavalo em L(duas vezes para baixo e uma para a esquerda)
    
    int movimentocompleto = 1;

    printf("Movimentação do cavalo: \n");

    do{

        for(int i = 1; i <= 1; i++){
        
            printf("Baixo \n");    
            
        }
        
    }while(movimentocompleto--);
    
    printf("Esquerda \n");
    
return 0;
}
