#include <stdio.h>
#include <string.h>

typedef struct
{
    char *region;
    int fnormal;
    int fpeso;
} Include;

Include data[] = {
    {"sul", 30, 50},
    {"sudeste", 25, 45},
    {"norte", 35, 55},
    {"nordeste", 40, 60},
};

int total = (sizeof data) / (sizeof data[0]);

int calcFrete(char *region, int peso){  
    for (int i = 0; i < total; i++){
        if(strcmp(region, data[i].region) == 0){
            int result = peso >= 2 ? peso * data[i].fpeso: data[i].fnormal;
            return result;
        }else{
            printf("Essa região não existe");
        }
    }
}

int main () {
    char* region;
    int peso;
    
    //regiao
    printf("Digite a região: ");
    if(scanf("%s", region) !=1 ){
        printf("Somente string");
        return 1;
    }

    //peso
    printf("Digite o peso do produto: ");
    if(scanf("%s", &peso) != 1){
        printf("somente float");
        return 1;
    }
    float resultadoFrete = calcFrete(region, peso); 
    printf("%s\n", resultadoFrete);

    return 0;
}
