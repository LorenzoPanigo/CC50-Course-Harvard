#include <stdio.h>

int main()
{
    char palavra1[50], palavra2[50];
    int p=0, soma1=0, soma2=0, pontos[]={1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    
    
    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);
    
    for(int i=0;palavra1[i] != '\0';i++){
        if(palavra1[i]>=65 && palavra1[i]<=90){
            p = palavra1[i] - 65;
        }
        if(palavra1[i]>=97 && palavra1[i]<=122){
            p = palavra1[i] - 97;
        }
        soma1 += pontos[p];
    }
    
   for(int i=0;palavra2[i] != '\0';i++){
        if(palavra2[i]>=65 && palavra2[i]<=90){
            p = palavra2[i] - 65;
        }
        if(palavra2[i]>=97 && palavra2[i]<=122){
            p = palavra2[i] - 97;
        }
        soma2 += pontos[p];
    }
    
    printf("O jogador 1 fez %d pontos e o jogador 2, %d pontos\n", soma1, soma2);
    if(soma1>soma2){
        printf("O jogador 1 ganhou");
    }else{
        printf("O jogador 2 ganhou");
    }
    return 0;
}
