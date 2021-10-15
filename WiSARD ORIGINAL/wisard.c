#include "funcoes.c"
#include <stdio.h>

#define MAX 30

    //Base de dados com 26 letras em formato de matriz, mas armazenadas como vetores
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
    
    void criaTodosDiscriminadores(int *tuplas);

int main(){
    printf("\n\n***Bem-vindo(a) a WiSARD!***\n\n");

    int i, j;
    int testar, menu;
    int matrizUsuario[MAX];

    //Criando as tuplas
    int tuplas[30];
    geraTuplas(tuplas, 30);
    printf("[Debug] - Caso queira visualizar a ordem das coordenadas selecionadas para a formacao das tuplas digite '1'. ");
    scanf("%i", &testar);
    if(testar == 1){
        for(i=0; i<30; i+=3){
            printf("(%i, %i, %i) ", tuplas[i], tuplas[i+1], tuplas[i+2]);}}

    //Criando o discriminador das letras da base de dados
    criaTodosDiscriminadores(tuplas);
    printf("\n\n[Debug] - Caso queira visualizar o discriminador de todas as letras da base de dados digite '1'\n[AVISO] A exibicao dos discriminadores ocupa 500 linhas. ");
    scanf("%i", &testar);
    if(testar == 1){
        printf("Discriminador da classe A:\n");
        exibeDiscriminador(classeA);
        printf("Discriminador da classe B:\n");
        exibeDiscriminador(classeB);
        printf("Discriminador da classe C:\n");
        exibeDiscriminador(classeC);
        printf("Discriminador da classe D:\n");
        exibeDiscriminador(classeD);
        printf("Discriminador da classe E:\n");
        exibeDiscriminador(classeE);
        printf("Discriminador da classe F:\n");
        exibeDiscriminador(classeF);
        printf("Discriminador da classe G:\n");
        exibeDiscriminador(classeG);
        printf("Discriminador da classe H:\n");
        exibeDiscriminador(classeH);
        printf("Discriminador da classe I:\n");
        exibeDiscriminador(classeI);
        printf("Discriminador da classe J:\n");
        exibeDiscriminador(classeJ);
        printf("Discriminador da classe K:\n");
        exibeDiscriminador(classeK);
        printf("Discriminador da classe L:\n");
        exibeDiscriminador(classeL);
        printf("Discriminador da classe M:\n");
        exibeDiscriminador(classeM);
        printf("Discriminador da classe N:\n");
        exibeDiscriminador(classeN);
        printf("Discriminador da classe O:\n");
        exibeDiscriminador(classeO);
        printf("Discriminador da classe P:\n");
        exibeDiscriminador(classeP);
        printf("Discriminador da classe Q:\n");
        exibeDiscriminador(classeQ);
        printf("Discriminador da classe R:\n");
        exibeDiscriminador(classeR);
        printf("Discriminador da classe S:\n");
        exibeDiscriminador(classeS);
        printf("Discriminador da classe T:\n");
        exibeDiscriminador(classeT);
        printf("Discriminador da classe U:\n");
        exibeDiscriminador(classeU);
        printf("Discriminador da classe V:\n");
        exibeDiscriminador(classeV);
        printf("Discriminador da classe W:\n");
        exibeDiscriminador(classeW);
        printf("Discriminador da classe X:\n");
        exibeDiscriminador(classeX);
        printf("Discriminador da classe Y:\n");
        exibeDiscriminador(classeY);
        printf("Discriminador da classe Z:\n");
        exibeDiscriminador(classeZ);
    }

    //Menu do usuário
    while(menu != 9){
    printf("\n\nDigite o numero correspondente a funcao desejada\nPara classificar uma letra[1]\nVisualizar as imagens mentais da base de dados[2]\n");
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
        printf("\n\n[Debug] - Caso queira visualizar os valores binarios atribuidos as tuplas digite '1'. ");
        scanf("%i", &testar);
        if(testar == 1){
            for(i=0; i<30; i+=3){
                printf("(%i, %i, %i) ", posicoes[i], posicoes[i+1], posicoes[i+2]);}}

        //Criando o discriminador da letra do usuário
        int discriminadorLetraUsuario[80];
        //Limpando a memória
        Zera(discriminadorLetraUsuario);
        printf("\n\n[Debug] - Caso queira conferir se o discriminador foi realmente zerado digite 1. ");
        scanf("%i", &testar);
        if(testar == 1){
            printf("Discriminador zerado:\n");
            exibeDiscriminador(discriminadorLetraUsuario);}

        //Propriamente criando a discriminador do usuario
        CriaDiscriminador(discriminadorLetraUsuario, posicoes);
        printf("\n\n[Debug] - Caso queira visualizar o discrminante correspondente a letra digitada pelo usuario digite 1. ");
        scanf("%i", &testar);
        if(testar == 1){
            printf("Discriminador do usuario:\n");
            exibeDiscriminador(discriminadorLetraUsuario);}

        //Comparando a letra do usuário com as letras treinados e exibindo o resultado 
        compare(discriminadorLetraUsuario, classeA, classeB, classeC, classeD,classeE, classeF, classeG, classeH, classeI, classeJ, classeK, classeL, classeM, classeN, classeO, classeP, classeQ, classeR, classeS, classeT, classeU, classeV, classeW, classeX, classeY, classeZ);
        printf("\n\n[Debug] - Caso queira visualizar o valor de igualdade entre a letra digitada e cada uma das letras possiveis digite 1. ");
        scanf("%i", &testar);
            if(testar == 1){
                printf("Igualdade com a letra A: %i\n", comparadisc(discriminadorLetraUsuario, classeA));
                printf("Igualdade com a letra B: %i\n", comparadisc(discriminadorLetraUsuario, classeB));
                printf("Igualdade com a letra C: %i\n", comparadisc(discriminadorLetraUsuario, classeC));
                printf("Igualdade com a letra D: %i\n", comparadisc(discriminadorLetraUsuario, classeD));
                printf("Igualdade com a letra E: %i\n", comparadisc(discriminadorLetraUsuario, classeE));
                printf("Igualdade com a letra F: %i\n", comparadisc(discriminadorLetraUsuario, classeF));
                printf("Igualdade com a letra G: %i\n", comparadisc(discriminadorLetraUsuario, classeG));
                printf("Igualdade com a letra H: %i\n", comparadisc(discriminadorLetraUsuario, classeH));
                printf("Igualdade com a letra I: %i\n", comparadisc(discriminadorLetraUsuario, classeI));
                printf("Igualdade com a letra J: %i\n", comparadisc(discriminadorLetraUsuario, classeJ));
                printf("Igualdade com a letra K: %i\n", comparadisc(discriminadorLetraUsuario, classeK));
                printf("Igualdade com a letra L: %i\n", comparadisc(discriminadorLetraUsuario, classeL));
                printf("Igualdade com a letra M: %i\n", comparadisc(discriminadorLetraUsuario, classeM));
                printf("Igualdade com a letra N: %i\n", comparadisc(discriminadorLetraUsuario, classeN));
                printf("Igualdade com a letra O: %i\n", comparadisc(discriminadorLetraUsuario, classeO));
                printf("Igualdade com a letra P: %i\n", comparadisc(discriminadorLetraUsuario, classeP));
                printf("Igualdade com a letra Q: %i\n", comparadisc(discriminadorLetraUsuario, classeQ));
                printf("Igualdade com a letra R: %i\n", comparadisc(discriminadorLetraUsuario, classeR));
                printf("Igualdade com a letra S: %i\n", comparadisc(discriminadorLetraUsuario, classeS));
                printf("Igualdade com a letra T: %i\n", comparadisc(discriminadorLetraUsuario, classeT));
                printf("Igualdade com a letra U: %i\n", comparadisc(discriminadorLetraUsuario, classeU));
                printf("Igualdade com a letra V: %i\n", comparadisc(discriminadorLetraUsuario, classeV));
                printf("Igualdade com a letra W: %i\n", comparadisc(discriminadorLetraUsuario, classeW));
                printf("Igualdade com a letra X: %i\n", comparadisc(discriminadorLetraUsuario, classeX));
                printf("Igualdade com a letra Y: %i\n", comparadisc(discriminadorLetraUsuario, classeY));
                printf("Igualdade com a letra Z: %i\n", comparadisc(discriminadorLetraUsuario, classeZ));
                }
                int decisao;
                printf("\n\nCaso queira visualizar a imagem mental da sua letra digite '1' ");
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
                CriaDiscriminador(classeA, posicoes);
                somaMatrizes(matrizA,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeA);
            }
            if(letra == 'b' || letra == 'B'){
                CriaDiscriminador(classeB, posicoes);
                somaMatrizes(matrizB,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeB);
            }
            if(letra == 'c' || letra == 'C'){
                CriaDiscriminador(classeC, posicoes);
                somaMatrizes(matrizC,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeC);
            }
            if(letra == 'd' || letra == 'D'){
                CriaDiscriminador(classeD, posicoes);
                somaMatrizes(matrizD,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeD);
            }
            if(letra == 'e' || letra == 'E'){
                CriaDiscriminador(classeE, posicoes);
                somaMatrizes(matrizE,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeE);
            }
            if(letra == 'f' || letra == 'F'){
                CriaDiscriminador(classeF, posicoes);
                somaMatrizes(matrizF,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeF);
            }
            if(letra == 'g' || letra == 'G'){
                CriaDiscriminador(classeG, posicoes);
                somaMatrizes(matrizG,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeG);
            }
            if(letra == 'h' || letra == 'H'){
                CriaDiscriminador(classeH, posicoes);
                somaMatrizes(matrizH,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeH);
            }
            if(letra == 'i' || letra == 'I'){
                CriaDiscriminador(classeI, posicoes);
                somaMatrizes(matrizI,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeI);
            }
            if(letra == 'j' || letra == 'J'){
                CriaDiscriminador(classeJ, posicoes);
                somaMatrizes(matrizJ,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeJ);
            }
            if(letra == 'k' || letra == 'K'){
                CriaDiscriminador(classeK, posicoes);
                somaMatrizes(matrizK,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeK);
            }
            if(letra == 'l' || letra == 'L'){
                CriaDiscriminador(classeL, posicoes);
                somaMatrizes(matrizL,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeL);
            }
            if(letra == 'm' || letra == 'M'){
                CriaDiscriminador(classeM, posicoes);
                somaMatrizes(matrizM,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeM);
            }
            if(letra == 'n' || letra == 'N'){
                CriaDiscriminador(classeN, posicoes);
                somaMatrizes(matrizN,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeN);
            }
            if(letra == 'o' || letra == 'O'){
                CriaDiscriminador(classeO, posicoes);
                somaMatrizes(matrizO,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeO);
            }
            if(letra == 'p' || letra == 'P'){
                CriaDiscriminador(classeP, posicoes);
                somaMatrizes(matrizP,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeP);
            }
            if(letra == 'q' || letra == 'Q'){
                CriaDiscriminador(classeQ, posicoes);
                somaMatrizes(matrizQ,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeQ);
            }
            if(letra == 'r' || letra == 'R'){
                CriaDiscriminador(classeR, posicoes);
                somaMatrizes(matrizR,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeR);
            }
            if(letra == 's' || letra == 'S'){
                CriaDiscriminador(classeS, posicoes);
                somaMatrizes(matrizS,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeS);
            }
            if(letra == 't' || letra == 'T'){
                CriaDiscriminador(classeT, posicoes);
                somaMatrizes(matrizT,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeT);
            }
            if(letra == 'u' || letra == 'U'){
                CriaDiscriminador(classeU, posicoes);
                somaMatrizes(matrizU,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeU);
            }
            if(letra == 'v' || letra == 'V'){
                CriaDiscriminador(classeV, posicoes);
                somaMatrizes(matrizV,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeV);
            }
            if(letra == 'w' || letra == 'W'){
                CriaDiscriminador(classeW, posicoes);
                somaMatrizes(matrizW,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeW);
            }
            if(letra == 'x' || letra == 'X'){
                CriaDiscriminador(classeX, posicoes);
                somaMatrizes(matrizX,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeX);
            }
            if(letra == 'y' || letra == 'Y'){
                CriaDiscriminador(classeY, posicoes);
                somaMatrizes(matrizY,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeY);
            }
            if(letra == 'z' || letra == 'Z'){
                CriaDiscriminador(classeZ, posicoes);
                somaMatrizes(matrizZ,matrizUsuario,30);
                printf("\nLetra %c atualizada!\nNovo Discriminador:\n", letra);
                exibeDiscriminador(classeZ);
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

//Função para criar os discriminadores de todas as letras
void criaTodosDiscriminadores(int *tuplas){
    posicaoNeuronios(tuplas, matrizA, posicoesA, 30);
    CriaDiscriminador(classeA,posicoesA);
    //---
    posicaoNeuronios(tuplas, matrizB, posicoesB, 30);
    CriaDiscriminador(classeB, posicoesB);
    //---
    posicaoNeuronios(tuplas, matrizC, posicoesC, 30);
    CriaDiscriminador(classeC, posicoesC);
    //---
    posicaoNeuronios(tuplas, matrizD, posicoesD, 30);
    CriaDiscriminador(classeD, posicoesD);
    //---
    posicaoNeuronios(tuplas, matrizE, posicoesE, 30);
    CriaDiscriminador(classeE, posicoesE);
    //---
    posicaoNeuronios(tuplas, matrizF, posicoesF, 30);
    CriaDiscriminador(classeF, posicoesF);
    //---
    posicaoNeuronios(tuplas, matrizG, posicoesG, 30);
    CriaDiscriminador(classeG, posicoesG);
    //---
    posicaoNeuronios(tuplas, matrizH, posicoesH, 30);
    CriaDiscriminador(classeH, posicoesH);
    //---
    posicaoNeuronios(tuplas, matrizI, posicoesI, 30);
    CriaDiscriminador(classeI, posicoesI);
    //---
    posicaoNeuronios(tuplas, matrizJ, posicoesJ, 30);
    CriaDiscriminador(classeJ, posicoesJ);
    //---
    posicaoNeuronios(tuplas, matrizK, posicoesK, 30);
    CriaDiscriminador(classeK, posicoesK);
    //---
    posicaoNeuronios(tuplas, matrizL, posicoesL, 30);
    CriaDiscriminador(classeL, posicoesL);
    //---
    posicaoNeuronios(tuplas, matrizM, posicoesM, 30);
    CriaDiscriminador(classeM, posicoesM);
    //---
    posicaoNeuronios(tuplas, matrizN, posicoesN, 30);
    CriaDiscriminador(classeN, posicoesN);
    //---
    posicaoNeuronios(tuplas, matrizO, posicoesO, 30);
    CriaDiscriminador(classeO, posicoesO);
    //---
    posicaoNeuronios(tuplas, matrizP, posicoesP, 30);
    CriaDiscriminador(classeP, posicoesP);
    //---
    posicaoNeuronios(tuplas, matrizQ, posicoesQ, 30);
    CriaDiscriminador(classeQ, posicoesQ);
    //---
    posicaoNeuronios(tuplas, matrizR, posicoesR, 30);
    CriaDiscriminador(classeR, posicoesR);
    //---
    posicaoNeuronios(tuplas, matrizS, posicoesS, 30);
    CriaDiscriminador(classeS, posicoesS);
    //---
    posicaoNeuronios(tuplas, matrizT, posicoesT, 30);
    CriaDiscriminador(classeT, posicoesT);
    //---
    posicaoNeuronios(tuplas, matrizU, posicoesU, 30);
    CriaDiscriminador(classeU, posicoesU);
    //---
    posicaoNeuronios(tuplas, matrizV, posicoesV, 30);
    CriaDiscriminador(classeV, posicoesV);
    //---
    posicaoNeuronios(tuplas, matrizW, posicoesW, 30);
    CriaDiscriminador(classeW, posicoesW);
    //---
    posicaoNeuronios(tuplas, matrizX, posicoesX, 30);
    CriaDiscriminador(classeX, posicoesX);
    //---
    posicaoNeuronios(tuplas, matrizY, posicoesY, 30);
    CriaDiscriminador(classeY, posicoesY);
    //---
    posicaoNeuronios(tuplas, matrizZ, posicoesZ, 30);
    CriaDiscriminador(classeZ, posicoesZ);
    //--- 
}
