#include <stdio.h>
#include <cs50.h>

int main(){

int cont=0, letras=0, tamanho=0, k=0, frases=0, palavras=0;

string frase = get_string("Digite a frase: ");

while(frase[k]>0){
    tamanho++;
    k++;
}
for(int i=0;i<tamanho;i++){
    if((frase[i]>='a' && frase[i]<= 'z')||(frase[i]>='A' && frase[i]<='Z')){
        letras++;
        }
    if(frase[i] == ' ' && frase[i] != '\0'){
            palavras++;
    }
    if(frase[i]=='.' || frase[i]=='!' || frase[i]=='?'){
        frases++;
    }
}

float medialetras = (float)letras/palavras*100;
float mediafrases = (float)frases/palavras*100;

float indice = 0.0588 * medialetras - 0.296 * mediafrases - 15.8;

if(indice>16){
    printf("Grade 16+\n");
}else if(indice<1){
    printf("Before Grade 1\n");
}else{
    printf("Grade %.0f\n", indice);
}

return 0;
}
