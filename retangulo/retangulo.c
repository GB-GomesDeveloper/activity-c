#include<stdio.h>;

int calc (int base, int altura){
    int calculo = base * altura;
    return calculo;
}


int main (void){

int b, a;

// base
printf("Digite a base: ");
if(scanf("%d", &b) !=1){
    printf("Isso não é um valor inteiro.");
};

// Altura
printf("Digite a altura: ");
if(scanf("%d", &a) !=1){
    printf("Isso não é um valor inteiro.");
}

printf("A área do retângulo tem: %d", calc(b, a));

}