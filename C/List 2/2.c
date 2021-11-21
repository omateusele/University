/*
Exercicio 2, lista 2
Nome: Mateus Grechi Araujo
Questão: 2) Leia o nome do automóvel e o preço de fábrica e escreva o nome do automóvel 
e o preço final.

Entrada : Nome do carro e seu preço de fábrica.
Saída : Nome do carro e o preço final corrigido com as taxas.
*/

#include <stdio.h>

void main(){
    float preco, preco_imposto, preco_revendedor;       // Defina as variáveis utilizadas no código
    char nomecarro[30];                                 //

    fgets(nomecarro, 30, stdin);                        // Lê o nome do carro.
    scanf("%f", &preco);                                // Lê o preço do carro.

    preco_imposto = preco * 0.45;                       // Realiza os cálculos dos impostos sobre o preço.

    preco_revendedor = preco * 0.28;                    //

    preco += (preco_imposto + preco_revendedor);        //


    printf("%s%.2f ", nomecarro, preco);                // Imprime o nome do carro e seu preço pós aplicação dos impostos.
}