#include "funcoes.c"
#include <stdio.h>

#define MAX 30

  int matrizA[MAX]={0,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1};
  int matrizB[MAX]={1,1,1,1,0,1,0,0,0,1,1,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,1,1,1,0};
  int matrizC[MAX]={0,1,1,1,1,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,1,1,1};
  int matrizD[MAX]={1,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,1,1,1,0};
  int matrizE[MAX]={1,1,1,1,1,1,0,0,0,0,1,1,1,1,0,1,0,0,0,0,1,0,0,0,0,1,1,1,1,1};
  int matrizF[MAX]={1,1,1,1,1,1,0,0,0,0,1,1,1,1,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0};
  int matrizG[MAX]={0,1,1,1,1,1,0,0,0,0,1,0,1,1,0,1,0,0,0,1,1,0,0,0,1,0,1,1,1,0};
  int matrizH[MAX]={1,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1};
  int matrizI[MAX]={0,1,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,1,1,1,0};
  int matrizJ[MAX]={0,0,1,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,1,1,1,1,0};
  int matrizK[MAX]={1,0,0,0,1,1,0,0,1,0,1,0,1,0,0,1,1,0,1,0,1,0,0,0,1,1,0,0,0,1};
  int matrizL[MAX]={1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,1,1,1};
  int matrizM[MAX]={1,0,0,0,1,1,1,0,1,1,1,0,1,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1};
  int matrizN[MAX]={1,0,0,0,1,1,1,0,0,1,1,0,1,0,1,1,0,0,1,0,1,0,0,0,1,1,0,0,0,1};
  int matrizO[MAX]={0,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,0,1,1,1,0};
  int matrizP[MAX]={1,1,1,1,0,1,0,0,0,1,1,1,1,1,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0};
  int matrizQ[MAX]={0,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1};
  int matrizR[MAX]={1,1,1,1,0,1,0,0,0,1,1,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1};
  int matrizS[MAX]={0,1,1,1,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,0};
  int matrizT[MAX]={1,1,1,1,1,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0};
  int matrizU[MAX]={1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,0,1,1,1,0};
  int matrizV[MAX]={1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,0,1,0,1};
  int matrizW[MAX]={1,0,0,0,1,1,0,0,0,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,0,1,0,1,0};
  int matrizX[MAX]={1,0,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,1,0,0,0,1};
  int matrizY[MAX]={1,0,0,0,1,0,1,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0};
  int matrizZ[MAX]={1,1,1,1,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,1,1,1,1};

int main(){
    int i, j;

    //Criando as tuplas
    int tuplas[30];
    geraTuplas(tuplas, 30);

    //Posicionando os neurônios, para isso cria-se um vetor de posições vazio
    int posicoes[30];

    //Recebendo a matriz do usuário para a prosseguimento da classificação
    // CORRIGIR UAAAAAAAAAAAAAAAH
    int matrizUsuario[MAX] = {0,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1};
    printf("WiSARD Original\n\nDigite uma letra em formato de uma matriz 6x5(1:Preto;0:Branco):\n\n");
    // for(i=0;i<6;i++) {
    //     for(j=0;j<5;j++) {
    //     printf("Digite a cor do pixel na linha %d e na coluna %d: ", i+1, j+1);
    //     scanf("%d", &matrizUsuario[j+i*5]);
    //     }
    // }

    posicaoNeuronios(tuplas, matrizUsuario, posicoes, 30);

    printf("\n\nExibindo as tuplas\n\n");
    for(i=0; i<30; i++)
        printf("%i ", tuplas[i]);

    printf("\n\nExibindo as posições\n\n");
    for(i=0; i<30; i++)
        printf("%i ", posicoes[i]);

    printf("\n\nExibindo a matriz usuario\n\n");
    for(i=0; i<30; i++)
        printf("%i ", matrizUsuario[i]);

    //Criando o discriminante da letra do usuário
    int discriminanteLetraUsuario[80];
    //Limpando a memória do discriminante
    Zera(discriminanteLetraUsuario);
    CriaDiscriminante(discriminanteLetraUsuario, posicoes);

    //testando***
    printf("\n\nExibindo a discriminante do usuario\n\n");
    int cont = 0;
    for(int i = 0; i < 80; i++){
        printf("%d", discriminanteLetraUsuario[i]);
        cont++; 
        if(cont % 8 == 0){
            printf("\n");
            cont = 0;
        }
    }
    //***

    compare(discriminanteLetraUsuario);

    return 0;
}