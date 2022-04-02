#include <stdio.h>

int main(void) {
  int quadrado, linha, coluna;
  printf("Número entre 1 e 20: ");
  scanf("%i", &quadrado);


  // ==> Quadrado preenchido
  printf("Quadrado Preenchido!\n");
  for (linha = 1 ; linha <= quadrado ; linha++){
    printf("\n");
    for (coluna = 1 ; coluna <= quadrado ; coluna++){
      printf("* ");
    }
  }
  
  // ==> Quadrado vazio
  printf("\n\nQuadrado Vazio!\n");
  for (linha = 1 ; linha <= quadrado ; linha++){
    printf("\n");
    if ((linha == 1) || (linha == quadrado)){      // Linha de cima e debaixo
      for (coluna = 1 ; coluna <= quadrado ; coluna++){
        printf("* ");
      }  
    }
    else{       // Restante das linhas
      for (coluna = 1 ; coluna <= quadrado ; coluna++){
        if ((coluna == 1) || (coluna == quadrado)){     // Bordas
          printf("* ");     // Asteriscos das bordas
        }
        else{   // Espaços em branco
          printf("  ");
        }
      }
    }
  }
  return 0;