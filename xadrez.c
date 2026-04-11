#include <stdio.h>

// A Torre move-se em linha reta. Ex 5 Casas para a Direita
void moverTorre(int casas){
    if (casas <= 0) return; // Caso Base
    {
      printf("Direita\n");
    }
  moverTorre(casas - 1); // Chamada Recursiva
}

// O Bispo move-se em diagonal. Ex 4 Casas para cima e Direita
void moverBispo(int casas){
  if (casas <= 0) return; // Caso Base
  {
    printf("Cima e Direita\n");
  }
  moverBispo(casas - 1); // Chamada Recursiva
}

// A Rainha combina movimentos. Ex 8 Casas para Esquerda
void moverRainha(int casas){
  if (casas <= 0) return; // Caso Base
  {
    printf("Esquerda\n");
  }
  moverRainha(casas - 1); // Chamada Recursiva
}



int main(){
// DEFINIÇÃO DAS CONSTANTES DE MOVIMENTO
  int MOV_TORRE = 5;
  int MOV_BISPO = 4;
  int MOV_RAINHA = 8;
  int MOV_CAVALO = 1;
  moverTorre(MOV_TORRE);
  moverBispo(MOV_BISPO);
  moverRainha(MOV_RAINHA);
  moverCavalo(MOV_CAVALO);

// 1.MOVIMENTAÇÃO DA TORRE (Recursividade)
printf("Movimentação da Torre:\n");
moverTorre(MOV_TORRE);
printf("\n");

// 2.MOVIMENTAÇÃO DO BISPO (Recursividade)
printf("Movimentação do Bispo:\n");
moverBispo(MOV_BISPO);
printf("\n");

// 3.MOVIMENTAÇÃO DA RAINHA (Recursividade)
printf("Movimentação da Rainha:\n");
moverRainha(MOV_RAINHA);
printf("\n");

// 4. BISPO COM LOOPS ANINHADOS
    // Simula o movimento diagonal usando eixos verticais e horizontais
    printf("Movimento do Bispo (Loops Aninhados):\n");
    for (int i = 0; i < MOV_BISPO; i++) { // Vertical
        for (int j = 0; j < 1; j++) {     // Horizontal (executa uma vez por degrau)
            printf("Cima, ");
        }
        printf("Direita\n");
    }
    printf("\n");


// 5. CAVALO COM LOOPS ANINHADOS (Ajustado)
    printf("Movimento do Cavalo:\n");
    int cavaloTentativas = MOV_CAVALO; // Criamos uma variável para o controle do while
    
    while (cavaloTentativas > 0)
    {
        for (int cm = 0; cm < 2; cm++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        
        cavaloTentativas--; // Reduz a contagem para o loop não ser infinito
    }
return 0;
}   