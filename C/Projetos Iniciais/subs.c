#include<stdio.h>
#include<cs50.h>
#include<ctype.h>

int main(){

    string subs = get_string("Digite a substituição de cada letra: ");
    string frase = get_string("Digite a frase: ");

    for(int i=0;frase[i]!=0;i++){
        if((frase[i]>='A' && frase[i]<='Z')||(frase[i]>='a' && frase[i]<='z')){
            for(int j=65;j>=65 && j<=122;j++){
                if(frase[i]>=97){
                    if(frase[i]==j){
                        printf("%c", tolower(subs[j-97]));
                    }
                }else{
                    if(frase[i]==j){
                        printf("%c", subs[j-65]);
                    }
                }
            }
        }else{
            printf("%c", frase[i]);
        }
    }
    printf("\n");
    return 0;
}
