#include <stdio.h>
int main(){

    int cavaloMovimento = 1; // Variável para controlar o movimento do cavalo
    
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

printf("\n"); //Quebra de linha para organizar a saída

//for alinhado e printf para o cavalo
  printf("Movimento do Cavalo:\n");
    while (cavaloMovimento--)
    {
      for (int cm = 0; cm < 2; cm++)
      {
        printf("Baixo\n");
      }
      
      printf("Esquerda\n");
   
    }

return 0;
}   