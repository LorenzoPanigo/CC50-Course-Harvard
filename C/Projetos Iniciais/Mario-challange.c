#include <stdio.h>

void miau(void){
    printf("#");
}

int main(void)
{
    int blocos=-1;
    
    do{
    printf("Digite o numero de blocos da pirâmide de cada lado: ");
    scanf("%d", &blocos);
    }while(blocos<=0 || blocos>8);


    for (int i = 1; i <= blocos; i++) {
        for (int k = 0; k < blocos - i; k++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            miau();
        }
        printf(" ");
        for(int b=0;b<i;b++){
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
