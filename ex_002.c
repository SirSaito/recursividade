#include <stdio.h>
#include <stdlib.h>

int contagem(int);

int x, i=0, y;

int main(){

    printf("\t\tDigite um numero, para saber sua quantidade de digitos: \n");
    scanf("%d", &x);//leitura de valor;
    y = contagem(x);//atribuição de valor;
    printf("\t\tO numero de digitos e igual ha: %d\n", y);//impressão de valor;
    return 0;

}

int contagem(int x){

    if(x>0){//condição de valor
        i++;
        contagem(x / 10);//recursividade de valor;
    }
    else{
    return i;//retorno de variavel;
    }
    
}