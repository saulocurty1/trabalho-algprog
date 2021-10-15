#include <stdio.h>
#include <stdbool.h>
#include "funcoes.c"
#define MAX 30
	int vet[5];
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

	int discu[MAX]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int posicu[MAX]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int classu[80] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	int posicoesA[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesE[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesI[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesO[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicoesU[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    int ClasseA[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int ClasseE[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int ClasseI[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int ClasseO[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int ClasseU[80] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    int tuplaA[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int comparadiscBleaching(int neuroletra[], int neuroalfabeto[], int n){
    //Compara duas discriminantes
    int i;
    int contadorigualdade=0;
    for(i=0;i<80;i++){
        if(neuroletra[i]>0 && neuroalfabeto[i]>n){
            contadorigualdade++; 
        }
    }
    return contadorigualdade;
}


int compareBleaching(int *neuroletrausuario){
	//ve quais tem
	int n = 0;
	for(n=0;n<5;n++){
    vet[0]=comparadiscBleaching(neuroletrausuario, ClasseA, n);
    vet[1]=comparadiscBleaching(neuroletrausuario, ClasseE, n);
    vet[2]=comparadiscBleaching(neuroletrausuario, ClasseI, n);
    vet[3]=comparadiscBleaching(neuroletrausuario, ClasseO, n);
    vet[4]=comparadiscBleaching(neuroletrausuario, ClasseU, n);
    for (int i = 0; i < 5; ++i)
    {
    	printf("Vet %d es %d ||||||||| ->",i,vet[i]);
    }
    int maior2 = 0;
    int letra2 = 0;
    int aux = 0;
    for (int i = 0; i <  5; ++i) {            
        if(vet[i] > maior2){
            maior2 = vet[i];
            letra2  = i;
        }  
  } 


      for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
      if(vet[i]>vet[j]){
        aux=vet[i];
        vet[i]=vet[j];
        vet[j]=aux;
      }
    }
}	
	if(vet[4] > vet[3]){
		switch(letra2){
   		case 0:
   		printf("A letra vencedora A\n");
   		return 0;
   		break;
   		case 1:
   		printf("A letra vencedora E\n");
   		return 0;
   		break;
   		case 2:
   		printf("A letra vencedora I\n");
   		return 0;
   		break;
   		case 3:
   		printf("A letra vencedora O\n");
   		return 0;
   		break;
   		case 4:
   		printf("A letra vencedora U\n");
   		return 0;
   		break;
   	}	
	}else{

   //ordenar o vet[i] para analisar se deu empate
  int i=0, j,maior=0,letra[5] = {0},vencedora, contador = 0; 
  aux = 0;
  //inicializo maior com o valor do vet na posição zero e assim posso apagar a comparação inicial dentro do for
  for (int i = 0; i < 5; ++i) {            
        if(vet[i] == maior){
            maior = vet[i];
            letra[contador]  = i;
            contador++;
        }else if(vet[i] > maior){
        	 Zera(letra, 5);
        	 letra[contador] = i;
        	 maior  = vet[i];
        	 contador++;
        } 
  }
  int noZero = 0, posicaoNoZero = 0, tudoZero;
  for (int i = 0; i < 5; ++i)
   {
   	if(letra[i] != 0){
   		noZero++;
   		posicaoNoZero = i;

   	}else if (letra[i] == 0){
   		tudoZero++;
   	}
   } 
   if(noZero == 1){
   	printf("Parabéns meu bom, você venceu meu caro");
   	switch(posicaoNoZero){
   		case 0:
   		printf("A letra vencedora A\n");
   		return 0;
   		break;
   		case 1:
   		printf("A letra vencedora E\n");
   		return 0;
   		break;
   		case 2:
   		printf("A letra vencedora I\n");
   		return 0;
   		break;
   		case 3:
   		printf("A letra vencedora O\n");
   		return 0;
   		break;
   		case 4:
   		printf("A letra vencedora U\n");
   		return 0;
   		break;
   	}

   }else if(tudoZero == 5){
   	printf("Mesmo com bleaching nao fomos capazes de cheagar a um resultado");
   	return 0;
   }
}
}
}
int main(){
	for (int i = 0; i < 30; ++i)
	{
		scanf("%d",&discu[i]);
	}
	geraTuplas(tuplaA, 30);

	posicaoNeuronios(tuplaA, discu, posicu, 30);
	CriaDiscriminante(classu, posicu);

	posicaoNeuronios(tuplaA, matrizA1, posicoesA, 30);
	CriaDiscriminante(ClasseA, posicoesA);
	//Zera


	
	posicaoNeuronios(tuplaA, matrizA2, posicoesA, 30);
	CriaDiscriminante(ClasseA, posicoesA);

	
	posicaoNeuronios(tuplaA, matrizA3, posicoesA, 30);
	CriaDiscriminante(ClasseA, posicoesA);

	
	posicaoNeuronios(tuplaA, matrizA4, posicoesA, 30);
	CriaDiscriminante(ClasseA, posicoesA);

	
	posicaoNeuronios(tuplaA, matrizA5, posicoesA, 30);
	CriaDiscriminante(ClasseA, posicoesA);

	//E

	posicaoNeuronios(tuplaA, matrizE1, posicoesE, 30);
	CriaDiscriminante(ClasseE, posicoesE);

	
	posicaoNeuronios(tuplaA, matrizE2, posicoesE, 30);
	CriaDiscriminante(ClasseE, posicoesE);

	
	posicaoNeuronios(tuplaA, matrizE3, posicoesE, 30);
	CriaDiscriminante(ClasseE, posicoesE);

	
	posicaoNeuronios(tuplaA, matrizE4, posicoesE, 30);
	CriaDiscriminante(ClasseE, posicoesE);

	
	posicaoNeuronios(tuplaA, matrizE5, posicoesE, 30);
	CriaDiscriminante(ClasseE, posicoesE);
	//I

	posicaoNeuronios(tuplaA, matrizI1, posicoesI, 30);
	CriaDiscriminante(ClasseI, posicoesI);

	
	posicaoNeuronios(tuplaA, matrizI2, posicoesI, 30);
	CriaDiscriminante(ClasseI, posicoesI);

	
	posicaoNeuronios(tuplaA, matrizI3, posicoesI, 30);
	CriaDiscriminante(ClasseI, posicoesI);

	
	posicaoNeuronios(tuplaA, matrizI4, posicoesI, 30);
	CriaDiscriminante(ClasseI, posicoesI);

	
	posicaoNeuronios(tuplaA, matrizI5, posicoesI, 30);
	CriaDiscriminante(ClasseI, posicoesI);
	//O

	posicaoNeuronios(tuplaA, matrizO1, posicoesO, 30);
	CriaDiscriminante(ClasseO, posicoesO);

	
	posicaoNeuronios(tuplaA, matrizO2, posicoesO, 30);
	CriaDiscriminante(ClasseO, posicoesO);

	
	posicaoNeuronios(tuplaA, matrizO3, posicoesO, 30);
	CriaDiscriminante(ClasseO, posicoesO);

	
	posicaoNeuronios(tuplaA, matrizO4, posicoesO, 30);
	CriaDiscriminante(ClasseO, posicoesO);

	
	posicaoNeuronios(tuplaA, matrizO5, posicoesO, 30);
	CriaDiscriminante(ClasseO, posicoesO);
	//U

	posicaoNeuronios(tuplaA, matrizU1, posicoesU, 30);
	CriaDiscriminante(ClasseU, posicoesU);

	
	posicaoNeuronios(tuplaA, matrizU2, posicoesU, 30);
	CriaDiscriminante(ClasseU, posicoesU);

	
	posicaoNeuronios(tuplaA, matrizU3, posicoesU, 30);
	CriaDiscriminante(ClasseU, posicoesU);

	
	posicaoNeuronios(tuplaA, matrizU4, posicoesU, 30);
	CriaDiscriminante(ClasseU, posicoesU);

	
	posicaoNeuronios(tuplaA, matrizU5, posicoesU, 30);
	CriaDiscriminante(ClasseU, posicoesU);

int contcont = 0;
printf("-----------A---------------");
    for(int i = 0; i < 80; i++){
        printf("%d", ClasseA[i]);
        contcont++; 
        if(contcont % 8 == 0){
            printf("\n");
            contcont = 0;
        }
    }printf("--------------E-------------\n");
    contcont = 0;
    for(int i = 0; i < 80; i++){
        printf("%d", ClasseE[i]);
        contcont++; 
        if(contcont % 8 == 0){
            printf("\n");
            contcont = 0;
        }
    } printf("--------------I-------------\n");
    contcont = 0;
    for(int i = 0; i < 80; i++){
        printf("%d", ClasseI[i]);
        contcont++; 
        if(contcont % 8 == 0){
            printf("\n");
            contcont = 0;
        }
    }printf("---------------O------------\n");
    contcont = 0;
    for(int i = 0; i < 80; i++){
        printf("%d", ClasseO[i]);
        contcont++; 
        if(contcont % 8 == 0){
            printf("\n");
            contcont = 0;
        }
    }printf("---------------U------------\n");
    contcont = 0;
    for(int i = 0; i < 80; i++){
        printf("%d", ClasseU[i]);
        contcont++; 
        if(contcont % 8 == 0){
            printf("\n");
            contcont = 0;
        }
    }printf("--------------User-------------\n");
    contcont = 0;
    for(int i = 0; i < 80; i++){
        printf("%d", classu[i]);
        contcont++; 
        if(contcont % 8 == 0){
            printf("\n");
            contcont = 0;
        }
    }
     

	compareBleaching(classu);


}