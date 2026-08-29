#include<stdio.h>;

float calc (int dM, int dm){
    float calculo = dM * dm / 2.0;
    return calculo;
}


int main (void){

int dM, dm;

// diagonal maior
printf("Digite o diagonal maior: ");
if(scanf("%d", &dM) !=1){
    printf("Isso não é um valor inteiro.");
};

// diagonal menor
printf("Digite o diagonal menor: ");
if(scanf("%d", &dm) !=1){
    printf("Isso não é um valor inteiro.");
}

printf("A área do losango tem: %2.f", calc(dM, dm));

}