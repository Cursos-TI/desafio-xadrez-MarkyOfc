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

```c
#include <stdio.h>
🔄 Funções:
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

🧠 Conceitos Utilizados
📚 Funções recursivas

🔁 Loops aninhados (for)

⚙️ Controle de fluxo com variáveis múltiplas

🧩 Lógica combinada de repetição e condição

🖥️ Como Executar
Compile o programa:

bash
Copiar
Editar
gcc -o matecheck matecheck.c
Execute:

bash
Copiar
Editar
./matecheck
📤 Exemplo de Saída
txt
Copiar
Editar
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
🛠️ Melhorias Futuras
