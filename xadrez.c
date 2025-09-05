#include <stdio.h>

int main() {
    // Movendo a torre 5 casas a direita
    for (int t = 0; t < 5; t++)
    {
        printf("Direita\n"); // Imprime a direção do movimento
    }
    
    // Movendo o bispo 5 casas na diagona na direita para cima

    int b = 0;
    
    do
    {
        printf("Cima, Direita\n"); // Imprime a direção do movimento
        b++;
    } while (b < 5);

    // Movendo a rainha 8 casas à esquerda

    int r = 0;

    while(r < 8){

        printf("Esquerda\n"); // Imprime a direção do movimento
        r++;
    }
    
    return 0;
}
