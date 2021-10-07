#include <stdio.h>

#define ML 6
#define MC 5

int main(){
  int matrizA[ML][MC]={{0,1,1,1,0},{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizB[ML][MC]={{1,1,1,1,0},{1,0,0,0,1},{1,1,1,1,0},{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,0}};
  int matrizC[ML][MC]={{0,1,1,1,1},{1,0,0,0,0},{1,0,0,0,0},{1,0,0,0,0},{1,0,0,0,0},{0,1,1,1,1}};
  int matrizD[ML][MC]={{1,1,1,1,0},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,0}};
  int matrizE[ML][MC]={{1,1,1,1,1},{1,0,0,0,0},{1,1,1,1,0},{1,0,0,0,0},{1,0,0,0,0},{1,1,1,1,1}};
  int matrizF[ML][MC]={{1,1,1,1,1},{1,0,0,0,0},{1,1,1,1,0},{1,0,0,0,0},{1,0,0,0,0},{1,0,0,0,0}};
  int matrizG[ML][MC]={{0,1,1,1,1},{1,0,0,0,0},{1,0,1,1,0},{1,0,0,0,1},{1,0,0,0,1},{0,1,1,1,0}};
  int matrizH[ML][MC]={{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizI[ML][MC]={{0,1,1,1,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,1,1,1,0}};
  int matrizJ[ML][MC]={{0,0,1,1,1},{0,0,0,1,0},{0,0,0,1,0},{0,0,0,1,0},{0,0,0,1,0},{1,1,1,1,0}};
  int matrizK[ML][MC]={{1,0,0,0,1},{1,0,0,1,0},{1,0,1,0,0},{1,1,0,1,0},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizL[ML][MC]={{1,0,0,0,0},{1,0,0,0,0},{1,0,0,0,0},{1,0,0,0,0},{1,0,0,0,0},{1,1,1,1,1}};
  int matrizM[ML][MC]={{1,0,0,0,1},{1,1,0,1,1},{1,0,1,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizN[ML][MC]={{1,0,0,0,1},{1,1,0,0,1},{1,0,1,0,1},{1,0,0,1,0},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizO[ML][MC]={{0,1,1,1,0},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{0,1,1,1,0}};
  int matrizP[ML][MC]={{1,1,1,1,0},{1,0,0,0,1},{1,1,1,1,0},{1,0,0,0,0},{1,0,0,0,0},{1,0,0,0,0}};
  int matrizQ[ML][MC]={{0,1,1,1,0},{1,0,0,0,1},{1,0,0,0,1},{1,0,1,0,1},{1,0,0,1,0},{0,1,1,0,1}};
  int matrizR[ML][MC]={{1,1,1,1,0},{1,0,0,0,1},{1,1,1,1,0},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizS[ML][MC]={{0,1,1,1,1},{1,0,0,0,0},{0,1,1,1,0},{0,0,0,0,1},{0,0,0,0,1},{1,1,1,1,0}};
  int matrizT[ML][MC]={{1,1,1,1,1},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0}};
  int matrizU[ML][MC]={{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{0,1,1,1,0}};
  int matrizV[ML][MC]={{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{0,1,0,1,0},{0,1,0,1,0},{0,0,1,0,1}};
  int matrizW[ML][MC]={{1,0,0,0,1},{1,0,0,0,1},{1,0,1,0,1},{1,0,1,0,1},{1,0,1,0,1},{0,1,0,1,0}};
  int matrizX[ML][MC]={{1,0,0,0,1},{0,1,0,1,0},{0,0,1,0,0},{0,1,0,1,0},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizY[ML][MC]={{1,0,0,0,1},{0,1,0,1,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0}};
  int matrizZ[ML][MC]={{1,1,1,1,1},{0,0,0,1,0},{0,0,1,0,0},{0,1,0,0,0},{1,0,0,0,0},{1,1,1,1,1}};
  int vetorSoma[26];
  int i, j, matrizUsuario[ML][MC], resultado;
  printf("WiSARD Original\n\nDigite uma letra em formato de uma matriz 6x5(1:Preto;0:Branco):\n\n");
  for(i=0;i<ML;i++) {
    for(j=0;j<MC;j++) {
      printf("Digite a cor do pixel na linha %d e na coluna %d: ", i, j);
      scanf("%d", &matrizUsuario[i][j]);
    }
  }
  for(i=0;i<26;i++) {vetorSoma[i]=0;}
  switch(resultado) {
    case 0: printf("\nResultado: A");break;
    case 1: printf("\nResultado: B");break;
    case 2: printf("\nResultado: C");break;
    case 3: printf("\nResultado: D");break;
    case 4: printf("\nResultado: E");break;
    case 5: printf("\nResultado: F");break;
    case 6: printf("\nResultado: G");break;
    case 7: printf("\nResultado: H");break;
    case 8: printf("\nResultado: I");break;
    case 9: printf("\nResultado: J");break;
    case 10: printf("\nResultado: K");break;
    case 11: printf("\nResultado: L");break;
    case 12: printf("\nResultado: M");break;
    case 13: printf("\nResultado: N");break;
    case 14: printf("\nResultado: O");break;
    case 15: printf("\nResultado: P");break;
    case 16: printf("\nResultado: Q");break;
    case 17: printf("\nResultado: R");break;
    case 18: printf("\nResultado: S");break;
    case 19: printf("\nResultado: T");break;
    case 20: printf("\nResultado: U");break;
    case 21: printf("\nResultado: V");break;
    case 22: printf("\nResultado: W");break;
    case 23: printf("\nResultado: X");break;
    case 24: printf("\nResultado: Y");break;
    case 25: printf("\nResultado: Z");break;
    default: printf("\nResultado indeterminado.");
  }
}
