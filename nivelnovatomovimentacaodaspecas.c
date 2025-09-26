#include <stdio.h>

int main (){
    
    int i = 0, i2 = 0, i3 = 0;
    
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

   
    for(int i = 0; i < 8; i++){
  
    printf("Esquerda\n");
    }   
}