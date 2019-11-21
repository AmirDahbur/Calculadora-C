#include <stdio.h>

int soma (int numero1,int numero2){

    int resultado;

    resultado=numero1 + numero2;

    return resultado;
}
int subitracao (int numero1,int numero2){

    int resultado;

    resultado=numero1 - numero2;

    return resultado;

}
int divisao (int numero1,int numero2){

    int resultado;

    resultado=numero1 / numero2;

    return resultado;
}
int porcentagem (int numero1,int numero2){

    int resultado;

    resultado=numero1 * numero2 / 100;

    return resultado;
}
int multiplicacao (int numero1,int numero2){

    int resultado;

    resultado=numero1 * numero2;

    return resultado;
}

void main (){
    int resultado , numero1 , numero2;
    int operacao;

    printf("Coloque o primeiro valor!");
    scanf("%d", &numero1);

    printf("Coloque o segundo valor!");
    scanf("%d", &numero2);

    printf("Escreva 1 para soma 2 para porcentagem 3 para subtracao 4 multiplicacao e 5 para divisao!");
    scanf("%d" , &operacao);

switch(operacao){

case 1:

    soma(numero1,numero2);

    break;
case 2:

    porcentagem(numero1,numero2);

    break;

case 3:

    subitracao(numero1,numero2);

    break;

case 4:

    multiplicacao(numero1,numero2);

    break;

case 5:

    divisao(numero1,numero2);

    break;
}
}

