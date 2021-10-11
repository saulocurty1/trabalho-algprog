//Bleaching incompleto, Discriminante em processo
#include <stdio.h>
#include <math.h>

#define ML 6
#define MC 5
//int endereco [8][3] = {{0,0,0},{0,0,1}, {0,1,0}, {0,1,1},{1,0,0}, {1,0,1}, {1,1,0},{1,1,1}};
int endereco [8] = {0,1, 2, 3, 4, 5, 6, 7};


/*//Nao funciona:

int BinarioToDecimal(int m[][3]){
    int v[8] = {0,0,0,0,0,0,0,0};

    for(int i = 0; i<10; i++){
        for(int j = 3; j>=3; j--){
        v[i] *= pow(2,m[i][j]);
        printf("%d\n", v[i]);
        }
    }

    return v[8];
}*/

//Função que recebe 5 matrizes e e gera a imagem mental da soma delas
void imagem_mental(int matriz1[][MC], int matriz2[][MC], int matriz3[][MC], int matriz4[][MC], int matriz5[][MC]) {

  int matrizP[ML][MC];
  for(int i=0;i<ML;i++){
        for(int j=0;j<MC;j++){
            matrizP[i][j]=matriz1[i][j]+matriz2[i][j]+matriz3[i][j]+matriz4[i][j]+matriz5[i][j];//somatoria das matrizes da classe (?)
        }
    }
}
//funcao que pega 5 exemplos e forma o Discriminante da classe dela, alem dos neuronios(linha do Discriminante da Classe)
  void Discriminante(int matriz1[][MC],int matriz2[][MC],int matriz3[][MC],int matriz4[][MC],int matriz5[][MC],int endereco1[8]) {

    int matrizP[ML][MC];
    int indice = 0,vetorP[30], i, j;
//MATRIZ1
///transformando matriz retina1 em vetor retina1
    for( i = 0; i < 6; i ++){
        for(j = 0; j<5; j ++){
            vetorP[indice] = matriz1[i][j];
            //printf("%d", vetorP[indice]);
            indice++;
        }
        }indice = 0;

///Transformando vetorP em matrizOrdena1(10x3):
int matrizOrdena1[10][3];
printf("Discriminante EX1\n");
for( i = 0; i< 10; i++){
    printf("\t");
    for(j = 0; j < 3; j++){
        matrizOrdena1[i][j] = vetorP[indice];
        printf("%d",vetorP[indice]);
        indice++;
    }printf("\n");
}indice = 0;
/*//Transformando valores da Discriminante EX1 em decimal:
    int decimal[8];
    for(i=0; i<10; i++){
        for(j=0; j<3; j++){
            decimal[i] = BinarioToDecimal(matrizOrdena1[i][j]);
            printf("\n%d", decimal[i]);
        }
    }


    int decimal [8];
    for(int i = 0; i < 10; i++){
        printf("\t");
        for(int j = 0; j< 3; j++){
           matrizP[i][j] = matrizOrdena1[i][j];//varrer a matriz da retina
           printf("%d", matrizP[i][j]);
        }
        printf("\n");
    decimal[i] = BinarioToDecimal(matrizOrdena1[i][3]);
    printf("%d", decimal[i]);

    }*/

//MATRIZ2
///transformando matriz retina2 em vetor retina2


    for( i = 0; i < 6; i ++){
        for(j = 0; j<5; j ++){
            vetorP[indice] = matriz2[i][j];
            //printf("%d", vetorP[indice]);
            indice++;
        }
        }indice = 0;

///Transformando vetorP em matrizOrdena1(10x3):
int matrizOrdena2[10][3];
printf("Discriminante EX2\n");
for( i = 0; i< 10; i++){
    printf("\t");
    for(j = 0; j < 3; j++){
        matrizOrdena2[i][j] = vetorP[indice];
        printf("%d",vetorP[indice]);
        indice++;
    }printf("\n");
}indice = 0;
//MATRIZ3
printf("\n\nDiscriminante EX3\n");
///transformando matriz retina3 em vetor retina3
    for( i = 0; i < 6; i ++){
        for(j = 0; j<5; j ++){
            vetorP[indice] = matriz3[i][j];
            //printf("%d", vetorP[indice]);
            indice++;
        }
        }indice = 0;
///Transformando vetorP em matrizOrdena3(10x3):
int matrizOrdena3[10][3];
for( i = 0; i< 10; i++){
    printf("\t");
    for(j = 0; j < 3; j++){
        matrizOrdena3[i][j] = vetorP[indice];
        printf("%d",vetorP[indice]);
        indice++;
    }printf("\n");
}indice = 0;
//MATRIZ4
printf("\n\nDiscriminante EX4\n");
///transformando matriz retina4 em vetor retina4
    for( i = 0; i < 6; i ++){
        for(j = 0; j<5; j ++){
            vetorP[indice] = matriz4[i][j];
            //printf("%d", vetorP[indice]);
            indice++;
        }
        }indice = 0;
///Transformando vetorP em matrizOrdena4(10x3):
int matrizOrdena4[10][3];
for( i = 0; i< 10; i++){
    printf("\t");
    for(j = 0; j < 3; j++){
        matrizOrdena4[i][j] = vetorP[indice];
        printf("%d",vetorP[indice]);
        indice++;
    }printf("\n");
}indice = 0;
//MATRIZ5
printf("\n\nDiscriminante EX5\n");
///transformando matriz retina5 em vetor retina5
    for( i = 0; i < 6; i ++){
        for(j = 0; j<5; j ++){
            vetorP[indice] = matriz5[i][j];
            //printf("%d", vetorP[indice]);
            indice++;
        }
        }indice = 0;
///Transformando vetorP em matrizOrdena5(10x3):
int matrizOrdena5[10][3];
for( i = 0; i< 10; i++){
    printf("\t");
    for(j = 0; j < 3; j++){
        matrizOrdena5[i][j] = vetorP[indice];
        printf("%d",vetorP[indice]);
        indice++;
    }printf("\n");
}
///Com isso, pegamos essas discriminantes e passamos pra decimal:



}

    //comparar os 3 valores da retina com o endereco definido para marcar a posicao
   /* for(int i = 0; i < 10; i++){
        for(int j = 0; j< 3; j++){
        if(matrizP[i][j] == endereco[i][j]){

           }
        }
    }*/



int main() {

    //int cont = 0;
    //int aux=0;
    //Zera(neuA);
    //CriaDiscriminante(neuB, matrizA1);
    //compare (bb );

    int matrizA1[ML][MC]={0,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1};
    int matrizA2[ML][MC]={{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};
    int matrizA3[ML][MC]={{0,0,0,0,0},{0,1,1,1,0},{0,1,0,1,0},{0,1,1,1,0},{0,1,0,1,0},{0,1,0,1,0}};
    int matrizA4[ML][MC]={{0,0,0,0,0},{0,0,1,0,0},{0,1,0,1,0},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};
    int matrizA5[ML][MC]={{0,0,1,0,0},{0,1,0,1,0},{1,0,0,0,1},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};


/*
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
*/
  //As cinco vogais com 5 exemplos de cada
 // printf("Imagens Mentais:\n");

  //Gerando as imagens mentais das cinco vogais
// printf("\nImagem Mental da letra A:\n");
  //  imagem_mental(matrizA1, matrizA2, matrizA3, matrizA4, matrizA5);

 //Gerando a discriminante
  printf("\nDiscriminantes da letra A:\n" );
    Discriminante(matrizA1, matrizA2, matrizA3, matrizA4, matrizA5, endereco);







  /*printf("\n\nImagem Mental da letra E:\n");
    imagem_mental(matrizE1, matrizE2, matrizE3, matrizE4, matrizE5);

  printf("\n\nImagem Mental da letra I:\n");
    imagem_mental(matrizI1, matrizI2, matrizI3, matrizI4, matrizI5);

  printf("\n\nImagem Mental da letra O:\n");
    imagem_mental(matrizO1, matrizO2, matrizO3, matrizO4, matrizO5);

  printf("\n\nImagem Mental da letra U:\n");
    imagem_mental(matrizU1, matrizU2, matrizU3, matrizU4, matrizU5);
*/


   return 0;
}

  
