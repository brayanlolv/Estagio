#include <stdio.h>


int main(){

    char palavraEntrada[40]; //improvavel uma palavra maior
    for (int i = 0; i < 40; i++){palavraEntrada[i] = ' ';}
    
    printf("entre a palavra a ser utilizada \n");
    scanf("%s",palavraEntrada);

    int counter = 0;
    for (int i = 0; i < 40;i++){

        if(palavraEntrada[i] == 'a'|| palavraEntrada[i] == 'A'){//poderia usar toLower mas tentei usar apenas a stdio
       
            counter++;
        }
    }   

 
    

    printf("a letra a apareceu %d vezes na sua palavra",counter);
return 0;
}