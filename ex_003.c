#include <stdio.h>
#include <stdlib.h>

int soma(int);

int x, y, i=0;

int main(){

    printf("Digite um numero: \n");
    scanf("%d", &x);//leitura da variavel;
    y=soma(x);//atribuição de valor a y;
    printf("%d\n", y);//impressão de valor;
    return 0;

}

int soma (int x){//função de soma;
    if(x%2==0){//condição de numero par;
        i+=x;
    }
    
    if (x>1){//condição para a operação;
        soma(x-1);//recursividade de valor;
    }
    if (x==1){//retorno de valor a y;
        return i;
    }
}