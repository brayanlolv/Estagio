#include <stdio.h>

int main(){

    int numeroEntrado;
    printf("digite o numero que deseja verificar");
    scanf("%d", &numeroEntrado);

    int numero = 0;
    int proxNumero = 1;
    
    while (numero < numeroEntrado){
        int variavelAux = numero;
        numero = proxNumero;
        proxNumero = variavelAux + numero;

        if(numero==numeroEntrado){
            printf("o numero escolhido %d faz parte da sequência de Fibonacci",numeroEntrado);
            return 0; // para o programa daqui, mas dependendo do caso poderia usar um break
        }

        
    }

    printf("o numero escolhido %d NÃO faz parte da sequência de Fibonacci",numeroEntrado);
return 0;
}