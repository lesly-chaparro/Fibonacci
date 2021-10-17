/*Sucesión de Fibonacci
Lesly Moreno*/

#include <stdio.h>
int main(){
    //Declaración de variables
    int numero, i, x, y,z;
    x = 0;
    y = 1;
    z = 1;
    
    printf("cuántos numeros deseas: ");
    scanf("%i",&numero);

    printf("1 , ");

    for (i = 1; i < numero; i++)
    {
        z=x+y;
        x=y;
        y=z;

        printf("%i , ",z);
    }
    
    return 0;
}