/*
ESSE PROGRAMA VERIFICA SE O USUARIO ESTA APTO PARA TIRAR A HABILITAÇÃO.
 PEDINDO QUE ELE DIGITE SUA IDADE, SE FOR MAIOR QUE 18 ELE PODE TIRAR A HABILITAÇÃO, CASO CONTRARIO NAO.
*/

#include <stdio.h>
#include <stdlib.h>

main () {

int idade;
printf("\n\t DIGITE SUA IDADE: ");
scanf("%d", &idade);

if(idade>=18) {

printf("APTO PARA HABILITAÇÃO"); }

 else {
    printf("VOCE AINDA NAO PODE DIRIGIR,");
}

}

