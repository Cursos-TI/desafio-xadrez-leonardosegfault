#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int casas_bispo = 5;
    const int casas_torre = 5;
    const int casas_rainha = 8;
    const int casas_cavalo_v = 2;
    const int casas_cavalo_h = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("BISPO\n");
    for (int i = 0; i < casas_bispo; i++) {
        printf("Cima, Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("TORRE\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("RAINHA\n");
    for (int i = 0; i < casas_rainha; i++) {
        printf("Esquerda\n");
    }
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("CAVALO\n");
    int c_casas_v = 0; // Contador de casas verticais
    while (c_casas_v++ < casas_cavalo_v) {
        printf("Baixo\n");

        for (int c_casas_h = 0; // Contador de casas horizontais
            // Aqui é utilizado duas condições para que seja sabido quando o topo foi chegado.
            c_casas_v == casas_cavalo_v && c_casas_h < casas_cavalo_h;
            c_casas_h++) {

            printf("Esquerda\n");
        }
    }
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
