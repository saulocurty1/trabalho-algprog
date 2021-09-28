int usario();

int main(){
  int matrizA[6][5]={{0,0,1,0,0},{0,1,0,1,0},{1,0,0,0,1},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};
  int matrizB[6][5]={{1,1,1,1,0},{1,0,0,1,1},{1,1,1,1,0},{1,1,1,1,0},{1,0,0,1,1},{1,1,1,1,0}};
  int matrizC[6][5]={{1,1,1,1,1},{1,0,0,0,0},{1,0,0,0,0},{1,0,0,0,0},{1,0,0,0,0},{1,1,1,1,1}};
  int matrizD[6][5]={{1,1,1,1,0},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,0}};
  int matrizE[6][5]={{1,1,1,1,1},{1,0,0,0,0},{1,1,1,0,0},{1,1,1,0,0},{1,0,0,0,0},{1,1,1,1,1}};
  int somaA=0, somaB=0, somaC=0, somaD=0, somaE=0;
  int matrizUsuario[6][5];
  matrizUsuario[6][5]=usuario();
}

int usuario(){
  int i, j, matriz[6][5];
  printf("WiSARD Original\n\nDigite uma letra em formato de uma matriz 6x5(1:Preto;0:Branco):\n\n");
  for(i=0;i<6;i++) {
    for(j=0;j<5;j++) {
      printf("Digite a cor na linha %d e na coluna %d: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  return matriz[6][5];
}
