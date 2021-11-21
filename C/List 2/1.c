/*
Exercicio 1, lista 2
Nome: Mateus Grechi Araujo
Questão: 1) Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3)/6. A
partir da média, informar o conceito de acordo com a tabela.

Entrada : 3 notas N1, N2 e N3
Saída : A letra representada na tabela de acordo com anota.
*/

#include <stdio.h>

void main(){
    float N1, N2, N3, MA;                           // Defina as variáveis utilizadas no código

    scanf("%f %f %f", &N1, &N2, &N3);               // Lê as notas N1, N2, N3

    while ((N1 < 0) || (N2 < 0) || (N3 < 0)){       // Caso a nota digitada seja negativa, pede para digitar novamente
        printf("Alguma ou todas as notas inválidas, digite novamente.\n");
        scanf("%f %f %f", &N1, &N2, &N3);
    }

    MA = (N1 + N2 * 2 + N3 * 3)/6;                  // Cálculo da média de aproveitamento

    if (MA >= 9){                                   // Encaixa a nota na tabela, imprimindo a respectiva letra no intervalo ao qual o MA se encontra
        printf("A");
    }
    else if (MA >= 7.5 || MA < 9){
        printf("B");
    }
    else if (MA >= 6 || MA < 7.5){
        printf("C");
    }
    else if (MA >= 4 || MA < 6){
        printf("D");
    }
    else if (MA < 4){
        printf("E");
    }
}