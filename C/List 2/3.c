/*
Exercicio 3, lista 2
Nome: Mateus Grechi Araujo
Questão: 3) Lê o Nome, número de horas trabalhadas e número de dependentes de um funcionário. 
Após a leitura, imprime qual o nome, salário bruto, os valores descontadospara cada tipo de 
imposto e finalmente qual o salário líquido do funcionário.

Entrada : Nome do funcionário, Número de horas trabalhadas e Número de dependentes do funcionário
Saída : Nome do funcionário, Salário bruto, Taxa retirada pelo INSS e Taxa retirada pelo Imposto de Renda
*/

#include <stdio.h>

void main(){
    char nome[30];                                                                      // Defina as variáveis utilizadas no código
    double salario_bruto, horas_trabalhadas, inss = 0.085, ir = 0.05, salario_liquido;  //
    int numero_dependentes;                                                             //

    fgets(nome, 30, stdin);                                                             // Lê o nome do funcionário
    scanf("%lf %d", &horas_trabalhadas, &numero_dependentes);                           // Lê as horas trabalhadas e o número de dependentes do funcionário

    salario_bruto = horas_trabalhadas*12 + numero_dependentes*40;                       // Realiza o cálculo do salário bruto
    inss *= salario_bruto;                                                              // Realiza o cálculo do salário bruto
    ir *= salario_bruto;                                                                // 
    salario_liquido = salario_bruto - (inss + ir);                                      //

    printf("Nome: %sSalario Bruto: %.2f\nInss: %.2lf\nImposto de Renda: %.2lf\nSalario Liquido: %.2lf", nome, salario_bruto, inss, ir, salario_liquido);    /* Imprime o nome, 
    Salário bruto, Taxa do INSS, Taxa do Imposto de renda e Salário líquido                                                                                 */
}