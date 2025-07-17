#include <stdio.h>

int main(){
    
    int moedas=0, valor, c=5, d=10, v=25, u=1;
    float entrada;
    
    do{
    printf("Digite o valor do troco para saber quantas moedas usar: ");
    scanf("%f", &entrada);
    if (entrada<=0) printf("Digite um valor válido.\n");
    }while (entrada<=0);
    valor = (int)(entrada * 100 + 0.5);
    
    for(;valor>0;){
        if(valor>=v){
            moedas += valor/v; 
            valor %= v;
        }
        if(valor>=d){
            moedas += valor/d;
            valor %= d;
        }
        if(valor>=c){
            moedas += valor/c;
            valor %= c;
        }
        if(valor>=u){
            moedas += valor/u;
            valor %= u;
        }
    }
    
    printf("Foram usadas %d moedas", moedas);
    
    return 0;
}
