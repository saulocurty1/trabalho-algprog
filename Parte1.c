#include <stdio.h>

#define MAX_LINHAS 6
#define MAX_COLUNAS 5

int main(){
  int matrizA[MAX_LINHAS][MAX_COLUNAS]={{0,0,1,0,0},{0,1,0,1,0},{1,0,0,0,1},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizB[MAX_LINHAS][MAX_COLUNAS]={{1,1,1,1,0},{1,0,0,1,1},{1,1,1,1,0},{1,1,1,1,0},{1,0,0,1,1},{1,1,1,1,0}};
  int matrizC[MAX_LINHAS][MAX_COLUNAS]={{1,1,1,1,1},{1,0,0,0,0},{1,0,0,0,0},{1,0,0,0,0},{1,0,0,0,0},{1,1,1,1,1}};
  int matrizD[MAX_LINHAS][MAX_COLUNAS]={{1,1,1,1,0},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,0}};
  int matrizE[MAX_LINHAS][MAX_COLUNAS]={{1,1,1,1,1},{1,0,0,0,0},{1,1,1,0,0},{1,1,1,0,0},{1,0,0,0,0},{1,1,1,1,1}};
  int somaA=0, somaB=0, somaC=0, somaD=0, somaE=0;
  int i, j, matrizUsuario[MAX_LINHAS][MAX_COLUNAS];
  printf("WiSARD Original\n\nDigite uma letra em formato de uma matriz 6x5(1:Preto;0:Branco):\n\n");
  for(i=0;i<MAX_LINHAS;i++) {
    for(j=0;j<MAX_COLUNAS;j++) {
      printf("Digite a cor do pixel na linha %d e na coluna %d: ", i, j);
      scanf("%d", &matrizUsuario[i][j]);
    }
  }
}
