#include <stdio.h>
#include <cs50.h>

int main(){

    string frase = get_string("Digite a frase: ");
    int des = get_int("Digite o número de deslocamentos: ");

    printf("Frase cifrada: ");
    for(int i=0;frase[i]!=0;i++){
        if((frase[i]+des>='A' && frase[i]+des<='Z') || (frase[i]+des>='a' && frase[i]+des<='z')){
            printf("%c", frase[i]+des);
        }else{
            printf("%c", frase[i]);
        }
    }

    return 0;
}
