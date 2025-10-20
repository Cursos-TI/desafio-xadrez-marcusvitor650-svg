#include <stdio.h>

int main (){
    
    int i = 0, i2 = 0, i3 = 0;
    int cavalo = 1;
    
    printf("=======-Torre-=======\n");

    do{
        printf("Direita\n");
        i++;
    }while(i < 5);

  
    printf("=======-Bispo-=======\n");

    while (i2 < 5)
    {
        printf("Cima\n""Direita\n");
        i2++;
    }
    
    printf("=======-Rainha-=======\n");

   
    for(i3 = 0; i3 < 8; i3++){
  
    printf("Esquerda\n");
    }   

    printf("=======-Cavalo-=======\n");


  
    while(cavalo--){

        for(int i4 = 0; i4 < 2; i4++){
             printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

    return 0;

}