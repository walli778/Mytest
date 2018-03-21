//project7

#include <stdio.h>
#include <stdlib.h>

int main (void) {
    float x=0, y=0, resultado=0;
    int op=0;

    do{

        printf("\n\n\n\t SEJA BEM VINDO A CALCULADORA BOLADONA");

        printf("\n\t1 - SOMA\n\t2 - SUBTRAÇÃO\n\t3 - MULTIPLICAÇÃO\n\t4 - DIVISÃO\n\t\t DIGITE A OPÇÃO: ");
        scanf("%i", &op);

        printf("\n DIGITE O PRIMEIRO NUMERO: ");
        scanf("%f", &x);

        printf("\n DIGITE O SEGUNDO NÚMERO: ");
        scanf("%f", &y);


        switch(op){

            case 1:
                resultado= x+y;
                break;

            case 2:
                resultado= x-y;
                break;

            case 3:
                resultado= x*y;
                break;

            case 4:
                resultado= x/y;
                break;

            default:
                printf("\n DIGITE UMA OPÇÃO VALIDA");
                break;

            }

            printf("\n\t O RESULTADO É: %0.2f", resultado);
            printf("\n DIGITE 1 PARA CONTINUAR: ");
            scanf("%i", &op);

    }while(op==1);
}
