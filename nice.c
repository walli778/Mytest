
#include <stdio.h>

main () {

float numero1, numero2;
char operador;

printf("\n\t ESCOLHA UMA OPERAÇÃO\n\t + - SOMA\n\t - - SUBTRAÇÃO\n\t * - MULTIPLICAÇÃO\n\t / - DIVISÃO\n\t escolha: ");
scanf("%c", &operador);

printf("\n\t Digite o primeiro número = ");
scanf("%f", &numero1);

printf("\n\tDigite o segundo número = ");
scanf("%f", &numero2);


if(operador == '+'){
printf("\n\t A soma desse numero é %1.f", numero1 + numero2);
}

if(operador == '-'){
printf("\n\t A subtração desse numero é %1.f", numero1 - numero2);
}

if(operador == '*'){
printf("\n\t A multiplicação desse numero é %1.f", numero1 * numero2);
}

if(operador == '/'){
printf("\n\t A divisão desse numero é %1.f", numero1 / numero2);
}

}
