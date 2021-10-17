#include <stdio.h>

//Sucesión de Fibbonacci
int x = 0;
int y = 1;
int z = 0;

    int fibi(){
        z=x+y;
        x=y;
        y=z;
        return z;
    }
int main(){
    int numero;
    printf("¿Cuántos números quieres?\n");
    scanf("%i",numero);
    for (int i=0; i<numero; i++);
    {
        printf("%d\n",fibi);
    }
}
    return 0;
}