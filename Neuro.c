#include <stdio.h>
#include <math.h>


int neuA[80];
int neuB[80];
int neuC[80];
int neuD[80];
int neuE[80];
int neuF[80];
int neuG[80];
int neuH[80];
int neuI[80];
int neuJ[80];
int neuL[80];
int neuM[80];
int neuN[80];
int neuO[80];
int neuP[80];
int neuQ[80];
int neuR[80];
int neuS[80];
int neuT[80];
int neuU[80];
int neuV[80];
int neuX[80];
int neuZ[80];

int matrizA1[30];

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
        if(i == 0){
            printf("a  = %d, b = %d, c = %d \n", a,b,c);
        }
        valor  = (pow(2, 0) * c) + (pow(2, 1) * b) + (pow(2, 2) * a) + contador;  
        contador += 8;
        //printf("valor é = %d  quando i = %d", valor, i);
        neuronio[valor]++;
    }

    // for (int  i = 0; i < 30; i++)
    // {
    //     printf("%d", neuronio[i]);
    // }
    
}



int main(){
    int cont = 0;
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
