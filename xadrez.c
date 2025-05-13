#include <stdio.h>

void torre(int numero) {        //RECURSIVIDADE: TORRE

    if(numero <= 5){
        printf("Direita!\n");
        torre(numero +1);
    }
}

void bispo(int numero){         //RECURSIVIDADE E LOOP ANINHADO: BISPO
    int cima, valorcima, direita, valordireita;

    for (int cima = 1, valorcima = 10; cima < valorcima; cima++, valorcima--) {
        printf("Cima!\n");

        for (int direita = 1, valordireita = 10; direita %2; direita++, valordireita--){
        printf("Direita!\n");
        }  
    }
}

void rainha(int numero){        //RECURSIVIDADE: RAINHA

    if(numero <= 8){
        printf("Esquerda!\n");
        rainha(numero + 1);
    }
}

void cavalo(int numero){        //RECURSIVIDADE E LOOP COMPLEXO: CAVALO

    for (int cima = 0, direita = 3; cima < direita; cima++, direita--) {
        printf("Cima!\n");  
    }
    printf("Direita!\n");
}

int main(){

    int numtorre = 1;
    int numbispo = 1;      //DECLARA OS VALORES UTILIZADOS PELAS PEÇAS PARA CADA FUNÇÃO PARA RECURSIVIDADE
    int numrainha = 1;
    int numcavalo = 1;
    
    printf("Torre: \n");
    torre(numtorre);        //CHAMA A FUNÇÃO RECURSIVA TORRE

    printf("\n");

    printf("Bispo: \n");
    bispo(numbispo);        //CHAMA A FUNÇÃO RECURSIVA BISPO

    printf("\n");

    printf("Rainha: \n");
    rainha(numrainha);      //CHAMA A FUNÇÃO RECURSIVA RAINHA
    
    printf("\n");
    printf("Cavalo: \n");
    cavalo(numcavalo);      //CHAMA A FUNÇÃO RECURSIVA CAVALO

    printf("\n");
    return 0;       //Fim do Código.
}
