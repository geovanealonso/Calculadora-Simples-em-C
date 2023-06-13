#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca para adicionar caracteres em portugu�s

int main()
{
    setlocale(LC_ALL,"Portuguese"); //fun��o que adiciona os caracteres em pt, presente na biblioteca locale.h

    float valor1;
    float valor2;
    char operador;
    float resposta;
    int i = 0;

    printf("\t\t\tBem-vindo(a) a calculadora simples\n\n");
    printf("Esta calculadora aceita soma, multiplica��o, divis�o e subtra��o\n\n");


    printf("Insira o primeiro valor: ");
    scanf("%f", &valor1);

    printf("\nInsira o operador:");
    getchar(); //fun��o para capturar o 'enter'
    operador = getchar();

    printf("\nInsira o segundo valor: ");
    scanf("%f", &valor2);



    switch(operador)
    {
    case '/':
        printf("Divis�o!");
        resposta = valor1  / valor2;
        break;
    case '*':
        printf("Multiplica��o!");
        resposta = valor1 * valor2;
        break;
    case '+':
        printf("Soma!");
        resposta = valor1 + valor2;
        break;
    case '-':
        printf("Subtra��o!");
        resposta = valor1 - valor2;
        break;
    default:
        //system("cls");
        printf("\nVoc� n�o inseriou um operador v�lido :\(\n\n");
        break;
    }

    printf("\nSeu resultado � %.2f\n", resposta);
    printf("Obrigado por usar a calculadora\n");
    printf("Desenvolvido por Geovane Alonso\n\n");
    return 0;
}
