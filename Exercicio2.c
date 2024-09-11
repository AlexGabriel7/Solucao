#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[1000];
    int cont =0;

    printf("Digite a string: ");
     fgets(str, sizeof(str), stdin);

    for(int i=0; i<strlen(str); i++){
        if(str[i]=='a' || str[i]== 'A')
        cont++;
    }

    if(cont==0)
        printf("Nao ha repepticoes da letra \'a\' na string");
    
    else 
        printf("A letra \'a\' aparece %d vezes.",cont);

}