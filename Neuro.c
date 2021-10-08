#include <stdio.h>
#include <math.h>


int neuA[30] = {0,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1};
int neuB[30];
int neuC[30];
int neuD[30];
int neuE[30];
int neuF[30];
int neuG[30];
int neuH[30];
int neuI[30];
int neuJ[30];
int neuL[30];
int neuM[30];
int neuN[30];
int neuO[30];
int neuP[30];
int neuQ[30];
int neuR[30];
int neuS[30];
int neuT[30];
int neuU[30];
int neuV[30];
int neuX[30];
int neuZ[30];
int matrizA1[30]={0,1,1, 1,0,1, 0,0,0, 1,1,0, 0,0,1, 1,1,1, 1,1,1, 0,0,0, 1,1,0, 0,0,1};

void Zera(int *ma){
    for(int i=0; i< 30; i++){
        ma[i] = 0;
    }
}

void CriaDiscriminante(int *neuronio, int *tupla){
    int contador = 0;
    int a, b, c = 0;
    int valor = 0;
    for(int i = 0; i < 30; i = i + 3){
        a = tupla[i];
        b = tupla[i + 1];
        c = tupla[i + 2];
        valor  = (pow(2, 0) * a) + (pow(2, 1) * b) + (pow(2, 2) * c) + contador;  
        contador += 8;
        neuronio[valor]++;
    }

    // for (int  i = 0; i < 80; i++)
    // {
    //     printf("%d", neuronio[i]);
    // }
    
}



int main(){
    int cont = 1;
    Zera(neuB);
    CriaDiscriminante(neuB, matrizA1);
    for(int i = 0; i < 80; i++){
        
        printf("%d", neuB[i]);
        cont++; 
        if(cont % 8 == 0){
            printf("\n");
            cont = 0;
        }
    }
}