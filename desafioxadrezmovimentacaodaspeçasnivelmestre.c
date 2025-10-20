#include <stdio.h>

void recursivo(int torre){
    if(torre > 0){
        printf("Direita\n");
        recursivo(torre - 1);
        
    }
    }
void recbispo(int bispo){
    
    if(bispo > 0){
        printf("Direita\n");
        recbispo(bispo - 1);
    }
    }

void recrainha(int rainha){

    if(rainha > 0){
        printf("Esquerda\n");
        recrainha(rainha - 1);
}
}
    
int main (){
    
    int torre = 4, bispo = 0, rainha = 7;
    int ibispo;
    int m1, m2;
    
    printf("=======-Torre-=======\n");

        printf("Direita\n");
        recursivo(torre);

    printf("=======-Bispo-=======\n");

    for(ibispo = 1; ibispo <= 5; ibispo++){
        
        printf("Cima\n");
        printf("Direita\n");
        recbispo(bispo);
    }
        


    printf("=======-Rainha-=======\n");

    printf("Esquerda\n");
    recrainha(rainha);   

    printf("=======-Cavalo-=======\n");

    for(m1 = 1; m1 <= 2; m1++)
    {
        printf("Cima\n");
    }
    for(m2 = 1; m2 <= 1; m2++)
    {
        printf("Direita");
    }

       
    
    return 0;

}