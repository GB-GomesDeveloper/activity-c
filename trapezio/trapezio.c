#include<stdio.h>;

float calc (int baseM, int basem, int altura){
    float calculo = ((baseM + basem) * altura ) / 2.0;
    return calculo;
}


int main (void){

int bM, bm, h;

// base maior
printf("Digite a base Maior: ");
if(scanf("%d", &bM) !=1){
    printf("Isso não é um valor inteiro.");
};

// base menor
printf("Digite a base Menor: ");
if(scanf("%d", &bm) !=1){
    printf("Isso não é um valor inteiro.");
};

// Altura
printf("Digite a altura: ");
if(scanf("%d", &h) !=1){
    printf("Isso não é um valor inteiro.");
}

printf("A área do trapézio tem: %f", calc(bM, bm, h));

}