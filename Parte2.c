#include <stdio.h>

#define ML 6
#define MC 5

int main() {
  
  int i, j, matrizUsuario[ML][MC];
  printf("WiSARD com Bleaching\n\nDigite uma letra em formato de uma matriz 6x5(1:Preto;0:Branco):\n\n");
  for(i=0;i<ML;i++) {
    for(j=0;j<MC;j++) {
      printf("Digite a cor do pixel na linha %d e na coluna %d: ", i, j);
      scanf("%d", &matrizUsuario[i][j]);
    }
  }
}
