#include <stdio.h>
#define MAX 30


//Função que recebe 5 matrizes e e gera a imagem mental da soma delas
void imagem_mental(int matriz1[], int matriz2[], int matriz3[], int matriz4[], int matriz5[]) {
  int matrizP[30], i, j;
  for(i=0;i<30;i++){matrizP[i]=matriz1[i]+matriz2[i]+matriz3[i]+matriz4[i]+matriz5[i];}
  for(i=0;i<6;i++){
    printf("\t");
    for(j=0;j<5;j++){
      printf("%d", matrizP[i*5+j]);
    }
    printf("\n");
  }
}

int main() {
  int matrizA1[MAX]={0,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1};
  int matrizA2[MAX]={1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1};
  int matrizA3[MAX]={0,0,0,0,0,0,1,1,1,0,0,1,0,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0};
  int matrizA4[MAX]={0,0,0,0,0,0,0,1,0,0,0,1,0,1,0,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1};
  int matrizA5[MAX]={0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1};
  int matrizE1[MAX]={1,1,1,1,1,1,0,0,0,0,1,1,1,1,0,1,0,0,0,0,1,0,0,0,0,1,1,1,1,1};
  int matrizE2[MAX]={1,1,1,1,1,1,0,0,0,0,1,1,1,1,0,1,1,1,1,0,1,0,0,0,0,1,1,1,1,1};
  int matrizE3[MAX]={1,1,1,1,0,1,0,0,0,0,1,1,1,0,0,1,0,0,0,0,1,1,1,1,0,0,0,0,0,0};
  int matrizE4[MAX]={0,0,0,0,0,1,1,1,1,0,1,0,0,0,0,1,1,1,0,0,1,0,0,0,0,1,1,1,1,0};
  int matrizE5[MAX]={1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,1,1,1,1,0,1,0,0,0,0,1,1,1,1,1};
  int matrizI1[MAX]={0,1,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,1,1,1,0};
  int matrizI2[MAX]={1,1,1,1,1,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,1,1,1,1,1};
  int matrizI3[MAX]={0,0,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,1,1,1,0};
  int matrizI4[MAX]={0,1,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,1,1,1,0,0,0,0,0,0};
  int matrizI5[MAX]={0,0,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,1,0,0,0,1,1,1,0,0,0,0,0,0};
  int matrizO1[MAX]={0,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,0,1,1,1,0};
  int matrizO2[MAX]={1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1};
  int matrizO3[MAX]={0,0,0,0,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,1,1,0,0,0,0,0,0};
  int matrizO4[MAX]={0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,1,1,0};
  int matrizO5[MAX]={0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0};
  int matrizU1[MAX]={1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,0,1,1,1,0};
  int matrizU2[MAX]={1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1};
  int matrizU3[MAX]={0,0,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,1,1,0,0,0,0,0,0};
  int matrizU4[MAX]={0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,1,1,0};
  int matrizU5[MAX]={0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0};

  //As cinco vogais com 5 exemplos de cada
  printf("Imagens Mentais:\n");

  //Gerando as imagens mentais das cinco vogais
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
