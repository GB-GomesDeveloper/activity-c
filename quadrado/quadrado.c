#include<stdio.h>;

int calc (int lado){
    int calculo = lado * lado;
    return calculo;
}


int main (void){

int l;

// área
printf("Digite o lado do quadrado: ");
if(scanf("%d", &l) !=1){
    printf("Isso não é um valor inteiro.");
}

printf("A área do quadrado tem: %d", calc(l));

}