/*Sucesión de Fibonacci
Lesly Moreno*/

#include <stdio.h>
int main(){
    /*Declaración de variables
    numero=numero que inserta el usuario*/

    int numero, i, x, y, z;
    x=0;
    y=1;
    z=1;

    printf("cuantos numeros deseas? ");
    scanf("%i",&numero);

    printf("0\n");

    for (i = 1; i <numero; i++){
        z=x+y;
        x=y;
        y=z;

        printf("%i\n",z);
    }
    
    return 0;
}