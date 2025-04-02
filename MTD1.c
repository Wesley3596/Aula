#include <stdint.h>

int main(){

    int numeroNormal = 2147483647; //vamor max int
    long int numeroGrande = 2147483647;

    printf("Numero regular (int): %d\n", numeroNormal);
    printf("Numero grande (long int): %ld\n", numeroGrande);

     numeroGrande = 2147483649; //valor maior que o max int
     printf("Numero grande atualizado (long int): %ld\n", numeroGrande);

     numeroGrande = 2147483649; //valor maior que o max int
     printf("Numero grande atualizado (long long int): %lld\n", numeroGrande);
      







}