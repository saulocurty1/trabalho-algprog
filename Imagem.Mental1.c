#include <stdio.h>

#define ML 6
#define MC 5


void imagem_mental(int matriz1[][MC], int matriz2[][MC], int matriz3[][MC], int matriz4[][MC], int matriz5[][MC]) {
  int matrizP[ML][MC], i, j;
  for(i=0;i<ML;i++){for(j=0;j<MC;j++){matrizP[i][j]=matriz1[i][j]+matriz2[i][j]+matriz3[i][j]+matriz4[i][j]+matriz5[i][j];}}
  for(i=0;i<ML;i++){
    printf("\t");
    for(j=0;j<MC;j++){printf("%d", matrizP[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int matrizA1[ML][MC]={{0,1,1,1,0},{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizA2[ML][MC]={{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizA3[ML][MC]={{0,0,0,0,0},{0,1,1,1,0},{0,1,0,1,0},{0,1,1,1,0},{0,1,0,1,0},{0,1,0,1,0}};
  int matrizA4[ML][MC]={{0,0,0,0,0},{0,0,1,0,0},{0,1,0,1,0},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizA5[ML][MC]={{0,0,1,0,0},{0,1,0,1,0},{1,0,0,0,1},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizE1[ML][MC]={{1,1,1,1,1},{1,0,0,0,0},{1,1,1,1,0},{1,0,0,0,0},{1,0,0,0,0},{1,1,1,1,1}};
  int matrizE2[ML][MC]={{1,1,1,1,1},{1,0,0,0,0},{1,1,1,1,0},{1,1,1,1,0},{1,0,0,0,0},{1,1,1,1,1}};
  int matrizE3[ML][MC]={{1,1,1,1,0},{1,0,0,0,0},{1,1,1,0,0},{1,0,0,0,0},{1,1,1,1,0},{0,0,0,0,0}};
  int matrizE4[ML][MC]={{0,0,0,0,0},{1,1,1,1,0},{1,0,0,0,0},{1,1,1,0,0},{1,0,0,0,0},{1,1,1,1,0}};
  int matrizE5[ML][MC]={{1,1,1,1,1},{1,0,0,0,0},{1,0,0,0,0},{1,1,1,1,0},{1,0,0,0,0},{1,1,1,1,1}};
  int matrizI1[ML][MC]={{0,1,1,1,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,1,1,1,0}};
  int matrizI2[ML][MC]={{1,1,1,1,1},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{1,1,1,1,1}};
  int matrizI3[ML][MC]={{0,0,0,0,0},{0,1,1,1,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,1,1,1,0}};
  int matrizI4[ML][MC]={{0,1,1,1,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,1,1,1,0},{0,0,0,0,0}};
  int matrizI5[ML][MC]={{0,0,0,0,0},{0,1,1,1,0},{0,0,1,0,0},{0,0,1,0,0},{0,1,1,1,0},{0,0,0,0,0}};
  int matrizO1[ML][MC]={{0,1,1,1,0},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{0,1,1,1,0}};
  int matrizO2[ML][MC]={{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,1}};
  int matrizO3[ML][MC]={{0,0,0,0,0},{0,1,1,1,0},{0,1,0,1,0},{0,1,0,1,0},{0,1,1,1,0},{0,0,0,0,0}};
  int matrizO4[ML][MC]={{0,0,0,0,0},{0,0,0,0,0},{0,1,1,1,0},{0,1,0,1,0},{0,1,0,1,0},{0,1,1,1,0}};
  int matrizO5[ML][MC]={{0,1,1,1,0},{0,1,0,1,0},{0,1,0,1,0},{0,1,1,1,0},{0,0,0,0,0},{0,0,0,0,0}};
  int matrizU1[ML][MC]={{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{0,1,1,1,0}};
  int matrizU2[ML][MC]={{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,1}};
  int matrizU3[ML][MC]={{0,0,0,0,0},{0,1,0,1,0},{0,1,0,1,0},{0,1,0,1,0},{0,1,1,1,0},{0,0,0,0,0}};
  int matrizU4[ML][MC]={{0,0,0,0,0},{0,0,0,0,0},{0,1,0,1,0},{0,1,0,1,0},{0,1,0,1,0},{0,1,1,1,0}};
  int matrizU5[ML][MC]={{0,1,0,1,0},{0,1,0,1,0},{0,1,0,1,0},{0,1,1,1,0},{0,0,0,0,0},{0,0,0,0,0}};
  printf("Imagens Mentais:\n");
  printf("\nImagem Mental da letra A:\n\n");
  imagem_mental(matrizA1, matrizA2, matrizA3, matrizA4, matrizA5);
  printf("\nImagem Mental da letra E:\n\n");
  imagem_mental(matrizE1, matrizE2, matrizE3, matrizE4, matrizE5);
  printf("\nImagem Mental da letra I:\n\n");
  imagem_mental(matrizI1, matrizI2, matrizI3, matrizI4, matrizI5);
  printf("\nImagem Mental da letra O:\n\n");
  imagem_mental(matrizO1, matrizO2, matrizO3, matrizO4, matrizO5);
  printf("\nImagem Mental da letra U:\n\n");
  imagem_mental(matrizU1, matrizU2, matrizU3, matrizU4, matrizU5);
  return 0;
}
