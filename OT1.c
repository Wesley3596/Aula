#include <stdint.h>

int main(){
int temperatura = 10;
int resultado;

//temperatura > 30 ? printf("Está calor\n") : printf("Está frio\n");

resultado = temperatura > 30 ? 1 : 0 ;

if(resultado == 1)
{
    printf(" Está calor\n");
}else{
    printf("Está frio\n");
}







}