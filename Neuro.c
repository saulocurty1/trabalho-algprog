#include <stdio.h>
#include <math.h>


typedef struct classes{
    int neuro[80];
    char nome[10];
}classe;


classe letraA;
classe letraB;
classe letraC;
classe letraD;
classe letraE;
classe letraF;
classe letraG;
classe letraH;
classe letraI;
classe letraJ;
classe letraK;
classe letraL;
classe letraM;
classe letraN;
classe letraO;
classe letraP;
classe letraQ;
classe letraR;
classe letraS;
classe letraT;
classe letraU;
classe letraV;
classe letraW;
classe letraX;
classe letraY;
classe letraZ;



void CriaDiscriminante(classe letra, int *tupla){
    int contador = 0;
    int a, b, c = 0;
    int valor = 0;
    for(int i = 0; i < 30; i = i + 3){
        a = tupla[i];
        b = tupla[i + 1];
        c = tupla[i + 2];
        valor  = (pow(2, 0) * a) + (pow(2, 1) * b) + (pow(2, 2) * c) + contador;  
        contador += 8;
        letra.neuro[valor]++;
    }

    for (int  i = 0; i < 30; i++)
    {
        printf("%d", letra.neuro[i]);
    }
    
}



int main(){

}