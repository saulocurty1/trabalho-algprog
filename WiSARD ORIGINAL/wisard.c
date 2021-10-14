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

    int posicoesA[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesB[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesC[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesD[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesE[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesF[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesG[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesH[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesI[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesJ[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesK[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesL[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesM[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesN[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesO[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesP[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesQ[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesR[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesS[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesT[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesU[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesV[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesW[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesX[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesY[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesZ[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


    int classeA[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeB[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeC[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeD[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeE[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeF[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeG[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeH[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeI[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeJ[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeK[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeL[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeM[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeN[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeO[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeP[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeQ[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeR[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeS[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeT[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeU[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeV[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeW[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeX[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeY[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int classeZ[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    void criaTodosDiscriminantes(int *tuplas);

int main(){
    printf("***Bem-vindo(a) a WiSARD!***\n");

    int i, j;
    int testar, menu;
    int matrizUsuario[MAX];

    //Criando as tuplas
    int tuplas[30];
    geraTuplas(tuplas, 30);
    printf("Caso queira visualizar a ordem das coordenadas selecionadas para a formacao das tuplas digite '1'. ");
    scanf("%i", &testar);
    if(testar == 1){
        for(i=0; i<30; i+=3){
            printf("(%i, %i, %i) ", tuplas[i], tuplas[i+1], tuplas[i+2]);}}

    //Criando o discriminante das letras da base de dados
    criaTodosDiscriminantes(tuplas);
    printf("\nCaso queira visualizar o discriminante de todas as letras da base de dados digite '1'\n[AVISO] A exibicao dos discriminantes ocupa 500 linhas. ");
    scanf("%i", &testar);
    if(testar == 1){
        printf("Discriminante da classe A:\n");
        exibeDiscriminante(classeA);
        printf("Discriminante da classe B:\n");
        exibeDiscriminante(classeB);
        printf("Discriminante da classe C:\n");
        exibeDiscriminante(classeC);
        printf("Discriminante da classe D:\n");
        exibeDiscriminante(classeD);
        printf("Discriminante da classe E:\n");
        exibeDiscriminante(classeE);
        printf("Discriminante da classe F:\n");
        exibeDiscriminante(classeF);
        printf("Discriminante da classe G:\n");
        exibeDiscriminante(classeG);
        printf("Discriminante da classe H:\n");
        exibeDiscriminante(classeH);
        printf("Discriminante da classe I:\n");
        exibeDiscriminante(classeI);
        printf("Discriminante da classe J:\n");
        exibeDiscriminante(classeJ);
        printf("Discriminante da classe K:\n");
        exibeDiscriminante(classeK);
        printf("Discriminante da classe L:\n");
        exibeDiscriminante(classeL);
        printf("Discriminante da classe M:\n");
        exibeDiscriminante(classeM);
        printf("Discriminante da classe N:\n");
        exibeDiscriminante(classeN);
        printf("Discriminante da classe O:\n");
        exibeDiscriminante(classeO);
        printf("Discriminante da classe P:\n");
        exibeDiscriminante(classeP);
        printf("Discriminante da classe Q:\n");
        exibeDiscriminante(classeQ);
        printf("Discriminante da classe R:\n");
        exibeDiscriminante(classeR);
        printf("Discriminante da classe S:\n");
        exibeDiscriminante(classeS);
        printf("Discriminante da classe T:\n");
        exibeDiscriminante(classeT);
        printf("Discriminante da classe U:\n");
        exibeDiscriminante(classeU);
        printf("Discriminante da classe V:\n");
        exibeDiscriminante(classeV);
        printf("Discriminante da classe W:\n");
        exibeDiscriminante(classeW);
        printf("Discriminante da classe X:\n");
        exibeDiscriminante(classeX);
        printf("Discriminante da classe Y:\n");
        exibeDiscriminante(classeY);
        printf("Discriminante da classe Z:\n");
        exibeDiscriminante(classeZ);
    }

    //Menu do usuário
    while(menu != 9){
    printf("Digite o numero correspondente a funcao desejada\nPara classificar uma letra[1]\nVisualizar as imagens mentais da base de dados[2]\n");
    printf("Para sair da WiSARD[9] - [AVISO] Todo o progresso sera perdido\n");
    scanf("%i", &menu);
    if(menu == 1){ //CLASSIFICAR UMA LETRA
        //Recebendo a matriz do usuário para a prosseguimento da classificação
        printf("\n\nDigite uma letra em formato de uma matriz 6x5(1:Preto;0:Branco):\n\n");
        for(i=0;i<6;i++) {
            for(j=0;j<5;j++) {
            printf("Digite a cor do pixel na linha %d e na coluna %d: ", i+1, j+1);
            scanf("%d", &matrizUsuario[j+i*5]);
            }
        }

        //Posicionando os neurônios, para isso cria-se um vetor de posições vazio
        int posicoes[30];
        //Atribuindo valores binários as posições das tuplas da letra do usuário
        posicaoNeuronios(tuplas, matrizUsuario, posicoes, 30);
        printf("Caso queira visualizar os valores binarios atribuidos as tuplas digite '1'. ");
        scanf("%i", &testar);
        if(testar == 1){
            for(i=0; i<30; i+=3){
                printf("(%i, %i, %i) ", posicoes[i], posicoes[i+1], posicoes[i+2]);}}

        //Criando o discriminante da letra do usuário
        int discriminanteLetraUsuario[80];
        //Limpando a memória
        Zera(discriminanteLetraUsuario);
        printf("\nCaso queira conferir se o discriminante foi realmente zerado digite 1. ");
        scanf("%i", &testar);
        if(testar == 1){
            printf("Discriminante zerado:\n");
            exibeDiscriminante(discriminanteLetraUsuario);}

        //Propriamente criando a discriminante do usuario
        CriaDiscriminante(discriminanteLetraUsuario, posicoes);
        printf("Caso queira visualizar o discrminante correspondente a letra digitada pelo usuario digite 1. ");
        scanf("%i", &testar);
        if(testar == 1){
            printf("Discriminante do usuario:\n");
            exibeDiscriminante(discriminanteLetraUsuario);}

        //Comparando a letra do usuário com as letras treinados e exibindo o resultado 
        compare(discriminanteLetraUsuario, classeA, classeB, classeC, classeD,classeE, classeF, classeG, classeH, classeI, classeJ, classeK, classeL, classeM, classeN, classeO, classeP, classeQ, classeR, classeS, classeT, classeU, classeV, classeW, classeX, classeY, classeZ);
        printf("Caso queira visualizar o valor de igualdade entre a letra digitada e cada uma das letras possiveis digite 1. ");
        scanf("%i", &testar);
            if(testar == 1){
                printf("Igualdade com a letra A: %i\n", comparadisc(discriminanteLetraUsuario, classeA));
                printf("Igualdade com a letra B: %i\n", comparadisc(discriminanteLetraUsuario, classeB));
                printf("Igualdade com a letra C: %i\n", comparadisc(discriminanteLetraUsuario, classeC));
                printf("Igualdade com a letra D: %i\n", comparadisc(discriminanteLetraUsuario, classeD));
                printf("Igualdade com a letra E: %i\n", comparadisc(discriminanteLetraUsuario, classeE));
                printf("Igualdade com a letra F: %i\n", comparadisc(discriminanteLetraUsuario, classeF));
                printf("Igualdade com a letra G: %i\n", comparadisc(discriminanteLetraUsuario, classeG));
                printf("Igualdade com a letra H: %i\n", comparadisc(discriminanteLetraUsuario, classeH));
                printf("Igualdade com a letra I: %i\n", comparadisc(discriminanteLetraUsuario, classeI));
                printf("Igualdade com a letra J: %i\n", comparadisc(discriminanteLetraUsuario, classeJ));
                printf("Igualdade com a letra K: %i\n", comparadisc(discriminanteLetraUsuario, classeK));
                printf("Igualdade com a letra L: %i\n", comparadisc(discriminanteLetraUsuario, classeL));
                printf("Igualdade com a letra M: %i\n", comparadisc(discriminanteLetraUsuario, classeM));
                printf("Igualdade com a letra N: %i\n", comparadisc(discriminanteLetraUsuario, classeN));
                printf("Igualdade com a letra O: %i\n", comparadisc(discriminanteLetraUsuario, classeO));
                printf("Igualdade com a letra P: %i\n", comparadisc(discriminanteLetraUsuario, classeP));
                printf("Igualdade com a letra Q: %i\n", comparadisc(discriminanteLetraUsuario, classeQ));
                printf("Igualdade com a letra R: %i\n", comparadisc(discriminanteLetraUsuario, classeR));
                printf("Igualdade com a letra S: %i\n", comparadisc(discriminanteLetraUsuario, classeS));
                printf("Igualdade com a letra T: %i\n", comparadisc(discriminanteLetraUsuario, classeT));
                printf("Igualdade com a letra U: %i\n", comparadisc(discriminanteLetraUsuario, classeU));
                printf("Igualdade com a letra V: %i\n", comparadisc(discriminanteLetraUsuario, classeV));
                printf("Igualdade com a letra W: %i\n", comparadisc(discriminanteLetraUsuario, classeW));
                printf("Igualdade com a letra X: %i\n", comparadisc(discriminanteLetraUsuario, classeX));
                printf("Igualdade com a letra Y: %i\n", comparadisc(discriminanteLetraUsuario, classeY));
                printf("Igualdade com a letra Z: %i\n", comparadisc(discriminanteLetraUsuario, classeZ));
                }
                int decisao;
                printf("Caso queira visualizar a imagem mental da sua letra digite '1' ");
                scanf("%i", &decisao);
                if(decisao == 1)
                    exibirImagemMental(matrizUsuario);
    
        //Treinando a WiSARD
        printf("\nA letra apontada foi exibida corretamente?\nDigite [1]-SIM  [2]-NAO\n");
        int correta;
        scanf("%i", &correta);
        if(correta == 2){
            printf("Qual era a letra correta?\n");
            char letra;
            getchar();
            scanf("%c", &letra);
            if(letra == 'a' || letra == 'A'){
                CriaDiscriminante(classeA, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeA);
            }
            if(letra == 'b' || letra == 'B'){
                CriaDiscriminante(classeB, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeB);
            }
            if(letra == 'c' || letra == 'C'){
                CriaDiscriminante(classeC, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeC);
            }
            if(letra == 'd' || letra == 'D'){
                CriaDiscriminante(classeD, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeD);
            }
            if(letra == 'e' || letra == 'E'){
                CriaDiscriminante(classeE, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeE);
            }
            if(letra == 'f' || letra == 'F'){
                CriaDiscriminante(classeF, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeF);
            }
            if(letra == 'g' || letra == 'G'){
                CriaDiscriminante(classeG, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeG);
            }
            if(letra == 'h' || letra == 'H'){
                CriaDiscriminante(classeH, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeH);
            }
            if(letra == 'i' || letra == 'I'){
                CriaDiscriminante(classeI, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeI);
            }
            if(letra == 'j' || letra == 'J'){
                CriaDiscriminante(classeJ, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeJ);
            }
            if(letra == 'k' || letra == 'K'){
                CriaDiscriminante(classeK, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeK);
            }
            if(letra == 'l' || letra == 'L'){
                CriaDiscriminante(classeL, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeL);
            }
            if(letra == 'm' || letra == 'M'){
                CriaDiscriminante(classeM, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeM);
            }
            if(letra == 'n' || letra == 'N'){
                CriaDiscriminante(classeN, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeN);
            }
            if(letra == 'o' || letra == 'O'){
                CriaDiscriminante(classeO, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeO);
            }
            if(letra == 'p' || letra == 'P'){
                CriaDiscriminante(classeP, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeP);
            }
            if(letra == 'q' || letra == 'Q'){
                CriaDiscriminante(classeQ, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeQ);
            }
            if(letra == 'r' || letra == 'R'){
                CriaDiscriminante(classeR, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeR);
            }
            if(letra == 's' || letra == 'S'){
                CriaDiscriminante(classeS, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeS);
            }
            if(letra == 't' || letra == 'T'){
                CriaDiscriminante(classeT, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeT);
            }
            if(letra == 'u' || letra == 'U'){
                CriaDiscriminante(classeU, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeU);
            }
            if(letra == 'v' || letra == 'V'){
                CriaDiscriminante(classeV, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeV);
            }
            if(letra == 'w' || letra == 'W'){
                CriaDiscriminante(classeW, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeW);
            }
            if(letra == 'x' || letra == 'X'){
                CriaDiscriminante(classeX, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeX);
            }
            if(letra == 'y' || letra == 'Y'){
                CriaDiscriminante(classeY, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeY);
            }
            if(letra == 'z' || letra == 'Z'){
                CriaDiscriminante(classeZ, posicoes);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(classeZ);
            }
        }
    }

    if(menu == 2){//Imagens mentais da base de dados
        printf("Imagem mental da Letra A:\n");
        exibirImagemMental(matrizA);
        printf("Imagem mental da Letra B:\n");
        exibirImagemMental(matrizB);
        printf("Imagem mental da Letra C:\n");
        exibirImagemMental(matrizC);
        printf("Imagem mental da Letra D:\n");
        exibirImagemMental(matrizD);
        printf("Imagem mental da Letra E:\n");
        exibirImagemMental(matrizE);
        printf("Imagem mental da Letra F:\n");
        exibirImagemMental(matrizF);
        printf("Imagem mental da Letra G:\n");
        exibirImagemMental(matrizG);
        printf("Imagem mental da Letra H:\n");
        exibirImagemMental(matrizH);
        printf("Imagem mental da Letra I:\n");
        exibirImagemMental(matrizI);
        printf("Imagem mental da Letra J:\n");
        exibirImagemMental(matrizJ);
        printf("Imagem mental da Letra K:\n");
        exibirImagemMental(matrizK);
        printf("Imagem mental da Letra L:\n");
        exibirImagemMental(matrizL);
        printf("Imagem mental da Letra M:\n");
        exibirImagemMental(matrizM);
        printf("Imagem mental da Letra N:\n");
        exibirImagemMental(matrizN);
        printf("Imagem mental da Letra O:\n");
        exibirImagemMental(matrizO);
        printf("Imagem mental da Letra P:\n");
        exibirImagemMental(matrizP);
        printf("Imagem mental da Letra Q:\n");
        exibirImagemMental(matrizQ);
        printf("Imagem mental da Letra R:\n");
        exibirImagemMental(matrizR);
        printf("Imagem mental da Letra S:\n");
        exibirImagemMental(matrizS);
        printf("Imagem mental da Letra T:\n");
        exibirImagemMental(matrizT);
        printf("Imagem mental da Letra U:\n");
        exibirImagemMental(matrizU);
        printf("Imagem mental da Letra V:\n");
        exibirImagemMental(matrizV);
        printf("Imagem mental da Letra W:\n");
        exibirImagemMental(matrizW);
        printf("Imagem mental da Letra X:\n");
        exibirImagemMental(matrizX);
        printf("Imagem mental da Letra Y:\n");
        exibirImagemMental(matrizY);
        printf("Imagem mental da Letra Z:\n");
        exibirImagemMental(matrizZ);
    }}
    
    return 0;
}

//Função para criar os discriminantes de todas as letras
void criaTodosDiscriminantes(int *tuplas){
    posicaoNeuronios(tuplas, matrizA, posicoesA, 30);
    CriaDiscriminante(classeA,posicoesA);
    //---
    posicaoNeuronios(tuplas, matrizB, posicoesB, 30);
    CriaDiscriminante(classeB, posicoesB);
    //---
    posicaoNeuronios(tuplas, matrizC, posicoesC, 30);
    CriaDiscriminante(classeC, posicoesC);
    //---
    posicaoNeuronios(tuplas, matrizD, posicoesD, 30);
    CriaDiscriminante(classeD, posicoesD);
    //---
    posicaoNeuronios(tuplas, matrizE, posicoesE, 30);
    CriaDiscriminante(classeE, posicoesE);
    //---
    posicaoNeuronios(tuplas, matrizF, posicoesF, 30);
    CriaDiscriminante(classeF, posicoesF);
    //---
    posicaoNeuronios(tuplas, matrizG, posicoesG, 30);
    CriaDiscriminante(classeG, posicoesG);
    //---
    posicaoNeuronios(tuplas, matrizH, posicoesH, 30);
    CriaDiscriminante(classeH, posicoesH);
    //---
    posicaoNeuronios(tuplas, matrizI, posicoesI, 30);
    CriaDiscriminante(classeI, posicoesI);
    //---
    posicaoNeuronios(tuplas, matrizJ, posicoesJ, 30);
    CriaDiscriminante(classeJ, posicoesJ);
    //---
    posicaoNeuronios(tuplas, matrizK, posicoesK, 30);
    CriaDiscriminante(classeK, posicoesK);
    //---
    posicaoNeuronios(tuplas, matrizL, posicoesL, 30);
    CriaDiscriminante(classeL, posicoesL);
    //---
    posicaoNeuronios(tuplas, matrizM, posicoesM, 30);
    CriaDiscriminante(classeM, posicoesM);
    //---
    posicaoNeuronios(tuplas, matrizN, posicoesN, 30);
    CriaDiscriminante(classeN, posicoesN);
    //---
    posicaoNeuronios(tuplas, matrizO, posicoesO, 30);
    CriaDiscriminante(classeO, posicoesO);
    //---
    posicaoNeuronios(tuplas, matrizP, posicoesP, 30);
    CriaDiscriminante(classeP, posicoesP);
    //---
    posicaoNeuronios(tuplas, matrizQ, posicoesQ, 30);
    CriaDiscriminante(classeQ, posicoesQ);
    //---
    posicaoNeuronios(tuplas, matrizR, posicoesR, 30);
    CriaDiscriminante(classeR, posicoesR);
    //---
    posicaoNeuronios(tuplas, matrizS, posicoesS, 30);
    CriaDiscriminante(classeS, posicoesS);
    //---
    posicaoNeuronios(tuplas, matrizT, posicoesT, 30);
    CriaDiscriminante(classeT, posicoesT);
    //---
    posicaoNeuronios(tuplas, matrizU, posicoesU, 30);
    CriaDiscriminante(classeU, posicoesU);
    //---
    posicaoNeuronios(tuplas, matrizV, posicoesV, 30);
    CriaDiscriminante(classeV, posicoesV);
    //---
    posicaoNeuronios(tuplas, matrizW, posicoesW, 30);
    CriaDiscriminante(classeW, posicoesW);
    //---
    posicaoNeuronios(tuplas, matrizX, posicoesX, 30);
    CriaDiscriminante(classeX, posicoesX);
    //---
    posicaoNeuronios(tuplas, matrizY, posicoesY, 30);
    CriaDiscriminante(classeY, posicoesY);
    //---
    posicaoNeuronios(tuplas, matrizZ, posicoesZ, 30);
    CriaDiscriminante(classeZ, posicoesZ);
    //--- 
}