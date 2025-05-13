# ♟️ MateCheck - Desafio de Xadrez com Recursividade e Loops

🎯 Este projeto foi desenvolvido como parte do desafio proposto pela **MateCheck**, utilizando conceitos de **funções recursivas** e **estruturas de repetição** para simular a movimentação de peças de xadrez. Ideal para treinar lógica de programação e manipulação de loops em C!

---

## 🚀 Descrição do Projeto

Cada peça do xadrez foi implementada com diferentes estruturas de controle:

- ♖ **Torre**: Recursão simples para movimento contínuo à direita.
- ♗ **Bispo**: Combinação de recursividade e loops aninhados para movimentação diagonal.
- 👑 **Rainha**: Recursividade para simular o movimento para a esquerda.
- ♞ **Cavalo**: Loop com múltiplas variáveis simulando o movimento em L.

---

## 🔍 Estrutura do Código

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
## 🔄 Funções:
♖ void torre(int numero)
Usa recursão para simular o movimento horizontal da torre.

Executa printf("Direita!\n") até atingir 5 movimentos.

♗ void bispo(int numero)
Usa loops aninhados com recursividade para simular a diagonal.

Exibe "Cima!" e "Direita!" em sequência.

👑 void rainha(int numero)
Usa recursão para simular 8 movimentos para a esquerda.

♞ void cavalo(int numero)
Usa um loop complexo com variáveis múltiplas.

Simula o movimento em "L" com prints de "Cima!" e "Direita!".

## 🧠 Conceitos Utilizados
📚 Funções recursivas

🔁 Loops aninhados (for)

⚙️ Controle de fluxo com variáveis múltiplas

🧩 Lógica combinada de repetição e condição

## 📤 Exemplo de Saída
Torre: 
Direita!
Direita!
Direita!
Direita!
Direita!

Bispo: 
Cima!
Direita!
Cima!
Direita!
Cima!
Direita!
Cima!
Direita!
Cima!
Direita!

Rainha: 
Esquerda!
Esquerda!
Esquerda!
Esquerda!
Esquerda!
Esquerda!
Esquerda!
Esquerda!

Cavalo: 
Cima!
Cima!
Cima!
Direita!
