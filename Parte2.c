#include <stdio.h>

#define MAX_LINHAS 6
#define MAX_COLUNAS 5

int main() {
  int matrizA1[MAX_LINHAS][MAX_COLUNAS]={{0,1,1,1,0},{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizA2[MAX_LINHAS][MAX_COLUNAS]=
  int matrizA3[MAX_LINHAS][MAX_COLUNAS]=
  int matrizA4[MAX_LINHAS][MAX_COLUNAS]=
  int matrizA5[MAX_LINHAS][MAX_COLUNAS]=
  int matrizE1[MAX_LINHAS][MAX_COLUNAS]={{1,1,1,1,1},{1,0,0,0,0},{1,1,1,1,0},{1,0,0,0,0},{1,0,0,0,0},{1,1,1,1,1}};
  int matrizE2[MAX_LINHAS][MAX_COLUNAS]=
  int matrizE3[MAX_LINHAS][MAX_COLUNAS]=
  int matrizE4[MAX_LINHAS][MAX_COLUNAS]=
  int matrizE5[MAX_LINHAS][MAX_COLUNAS]=
  int matrizI1[MAX_LINHAS][MAX_COLUNAS]=
  int matrizI2[MAX_LINHAS][MAX_COLUNAS]=
  int matrizI3[MAX_LINHAS][MAX_COLUNAS]=
  int matrizI4[MAX_LINHAS][MAX_COLUNAS]=
  int matrizI5[MAX_LINHAS][MAX_COLUNAS]=
  int matrizO1[MAX_LINHAS][MAX_COLUNAS]=
  int matrizO2[MAX_LINHAS][MAX_COLUNAS]=
  int matrizO3[MAX_LINHAS][MAX_COLUNAS]=
  int matrizO4[MAX_LINHAS][MAX_COLUNAS]=
  int matrizO5[MAX_LINHAS][MAX_COLUNAS]=
  int matrizU1[MAX_LINHAS][MAX_COLUNAS]=
  int matrizU2[MAX_LINHAS][MAX_COLUNAS]=
  int matrizU3[MAX_LINHAS][MAX_COLUNAS]=
  int matrizU4[MAX_LINHAS][MAX_COLUNAS]=
  int matrizU5[MAX_LINHAS][MAX_COLUNAS]=
  int i, j, matrizUsuario[MAX_LINHAS][MAX_COLUNAS];
  printf("WiSARD com Bleaching\n\nDigite uma letra em formato de uma matriz 6x5(1:Preto;0:Branco):\n\n");
  for(i=0;i<MAX_LINHAS;i++) {
    for(j=0;j<MAX_COLUNAS;j++) {
      printf("Digite a cor do pixel na linha %d e na coluna %d: ", i, j);
      scanf("%d", &matrizUsuario[i][j]);
    }
  }
}
