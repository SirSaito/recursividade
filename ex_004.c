#include <stdio.h>
#include <stdlib.h>

int tribonacci(int);

int x, y, i=0, t, u, p;

int main(){

    printf("Digite um numero: \n");
    scanf("%d", &x);//leitura da variavel;
    y=tribonacci(x);//atribuição de valor a y;
    printf("\t\tResultado de tribonacci e igual ha: %d\n", y);//impressão de valor;
    return 0;

}

int tribonacci (int x){//função de tribonacci;
    
    if (x<=1){//condição para a operação;
        return i=0;
    }

    if (x==2){//retorno de valor a y;
        return i=1;
    }

    if (x>2){
        t=tribonacci(x-1);
        u=tribonacci(x-2);
        p=tribonacci(x-3);
        i=u+t+p;
        return i;
    }

}