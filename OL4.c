#include <stdio.h>

int main(){
    int idade = 17;
    float altura = 1.75;

    if (idade >= 18 && idade <= 30 && altura > 1.70){
        printf("Você atende os requisitos.\n");
    }else{
        printf("Você não atende os requisitos.\n");
    }


}