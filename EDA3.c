#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    if (numero > 0){
        if (numero % 2 == 0){
            printf("Numero par\n");
        }else{
            printf("Numero ìmpar.\n");
        }
    
    } else if (numero == 0){
        printf("Numero é zero.\n");
    }else {
            printf("Negativo.\n");
        }
    }



