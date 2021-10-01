#include <stdio.h>

#define MAX_LINHAS 6
#define MAX_COLUNAS 5

int main() {
  int matrizA1[MAX_LINHAS][MAX_COLUNAS]={{0,1,1,1,0},{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizA2[MAX_LINHAS][MAX_COLUNAS]={{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizA3[MAX_LINHAS][MAX_COLUNAS]={{0,0,0,0,0},{0,1,1,1,0},{0,1,0,1,0},{0,1,1,1,0},{0,1,0,1,0},{0,1,0,1,0}};
  int matrizA4[MAX_LINHAS][MAX_COLUNAS]={{0,0,0,0,0},{0,0,1,0,0},{0,1,0,1,0},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizA5[MAX_LINHAS][MAX_COLUNAS]={{0,0,1,0,0},{0,1,0,1,0},{1,0,0,0,1},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizE1[MAX_LINHAS][MAX_COLUNAS]={{1,1,1,1,1},{1,0,0,0,0},{1,1,1,1,0},{1,0,0,0,0},{1,0,0,0,0},{1,1,1,1,1}};
  int matrizE2[MAX_LINHAS][MAX_COLUNAS]={{1,1,1,1,1},{1,0,0,0,0},{1,1,1,1,0},{1,1,1,1,0},{1,0,0,0,0},{1,1,1,1,1}};
  int matrizE3[MAX_LINHAS][MAX_COLUNAS]={{1,1,1,1,0},{1,0,0,0,0},{1,1,1,0,0},{1,0,0,0,0},{1,1,1,1,0},{0,0,0,0,0}};
  int matrizE4[MAX_LINHAS][MAX_COLUNAS]={{0,0,0,0,0},{1,1,1,1,0},{1,0,0,0,0},{1,1,1,0,0},{1,0,0,0,0},{1,1,1,1,0}};
  int matrizE5[MAX_LINHAS][MAX_COLUNAS]={{1,1,1,1,1},{1,0,0,0,0},{1,0,0,0,0},{1,1,1,1,0},{1,0,0,0,0},{1,1,1,1,1}};
  int matrizI1[MAX_LINHAS][MAX_COLUNAS]={{0,1,1,1,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,1,1,1,0}};
  int matrizI2[MAX_LINHAS][MAX_COLUNAS]={{1,1,1,1,1},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{1,1,1,1,1}};
  int matrizI3[MAX_LINHAS][MAX_COLUNAS]={{0,0,0,0,0},{0,1,1,1,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,1,1,1,0}};
  int matrizI4[MAX_LINHAS][MAX_COLUNAS]={{0,1,1,1,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,1,1,1,0},{0,0,0,0,0}};
  int matrizI5[MAX_LINHAS][MAX_COLUNAS]={{0,0,0,0,0},{0,1,1,1,0},{0,0,1,0,0},{0,0,1,0,0},{0,1,1,1,0},{0,0,0,0,0}};
  int matrizO1[MAX_LINHAS][MAX_COLUNAS]={{0,1,1,1,0},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{0,1,1,1,0}};
  int matrizO2[MAX_LINHAS][MAX_COLUNAS]={{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,1}};
  int matrizO3[MAX_LINHAS][MAX_COLUNAS]={{0,0,0,0,0},{0,1,1,1,0},{0,1,0,1,0},{0,1,0,1,0},{0,1,1,1,0},{0,0,0,0,0}};
  int matrizO4[MAX_LINHAS][MAX_COLUNAS]={{0,0,0,0,0},{0,0,0,0,0},{0,1,1,1,0},{0,1,0,1,0},{0,1,0,1,0},{0,1,1,1,0}};
  int matrizO5[MAX_LINHAS][MAX_COLUNAS]={{0,1,1,1,0},{0,1,0,1,0},{0,1,0,1,0},{0,1,1,1,0},{0,0,0,0,0},{0,0,0,0,0}};
  int matrizU1[MAX_LINHAS][MAX_COLUNAS]={{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{0,1,1,1,0}};
  int matrizU2[MAX_LINHAS][MAX_COLUNAS]={{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,1}};
  int matrizU3[MAX_LINHAS][MAX_COLUNAS]={{0,0,0,0,0},{0,1,0,1,0},{0,1,0,1,0},{0,1,0,1,0},{0,1,1,1,0},{0,0,0,0,0}};
  int matrizU4[MAX_LINHAS][MAX_COLUNAS]={{0,0,0,0,0},{0,0,0,0,0},{0,1,0,1,0},{0,1,0,1,0},{0,1,0,1,0},{0,1,1,1,0}};
  int matrizU5[MAX_LINHAS][MAX_COLUNAS]={{0,1,0,1,0},{0,1,0,1,0},{0,1,0,1,0},{0,1,1,1,0},{0,0,0,0,0},{0,0,0,0,0}};
  int i, j, matrizUsuario[MAX_LINHAS][MAX_COLUNAS];
  printf("WiSARD com Bleaching\n\nDigite uma letra em formato de uma matriz 6x5(1:Preto;0:Branco):\n\n");
  for(i=0;i<MAX_LINHAS;i++) {
    for(j=0;j<MAX_COLUNAS;j++) {
      printf("Digite a cor do pixel na linha %d e na coluna %d: ", i, j);
      scanf("%d", &matrizUsuario[i][j]);
    }
  }
}
