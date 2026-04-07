#include <stdio.h>
int main(){
    
//For e printf para a torre
  printf("Movimento da Torre:\n");
    for(int t = 0; t < 5; t++){
        printf("Direita\n", t);
    }
printf("\n"); //Quebra de linha para organizar a saída

//while e printf para o bispo
  printf("Movimento do Bispo:\n");
    int b = 0;
    while(b < 5){
        printf("Cima, Direita\n", b);
        b++;
    }
printf("\n"); //Quebra de linha para organizar a saída

//Do while e printf para a rainha
  printf("Movimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n", r);
        r++;
    } while(r < 8);

return 0;
}   