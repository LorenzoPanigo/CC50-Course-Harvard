#include <stdio.h>

int main()
{
    int numdavez=0, soma1=0, soma2=0, casas=0, somafinal;
    long num;
    printf("Digite o numero do cartao de credito: ");
    scanf("%li", &num);
    
    long original = num;
    
    long temp = num;
    while (temp > 0) {
        casas++;
        temp /= 10;
    }

    
   for (int i = 0; i < casas; i++) {
        int digito = num % 10;
        num /= 10;

        if (i % 2 == 0) {
            soma2 += digito;
        } else {
            int dobro = digito * 2;
            if (dobro > 9) {
                soma1 += (dobro - 9); 
            } else {
                soma1 += dobro;
            }
        }
    }
    somafinal=soma1+soma2;
    
    int prefixo1 = original / 10000000000000;   
    int prefixo2 = original / 100000000000000;   
    int prefixo3 = original / 1000000000000;   
    int prefixo4 = original / 1000000000000000; 

    
    if(casas==15 && (prefixo1==34||prefixo1==37)){
        printf("Valido: American Express");
    }
    if(casas==16 && (prefixo2>=51 && prefixo2<=55)){
        printf("Valido: Mastercard");
    }
    if(casas==13 || casas==16 && (prefixo3==4||prefixo4==4)){
        printf("Valido: American Express");
    }else{
        printf("Invalido");
    }
    
    
    return 0;
}
