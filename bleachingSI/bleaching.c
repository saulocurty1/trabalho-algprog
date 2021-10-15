#include <stdio.h>
#include <stdbool.h>
#include "funcoes.c"
#define MAX 30
	int vet[5];
	int matrizSA[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int matrizSE[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int matrizSI[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int matrizSO[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int matrizSU[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


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
            maior = vet[i]; //pode apagar?
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
void criaTudo(){
	



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

}
int main(){
	//soma as matrizes para fazer uma matriz superior que vai ajudar na imagem mental
	geraTuplas(tuplaA, 30);
	somaMatrizes(matrizSA, matrizA1,30);
	somaMatrizes(matrizSA,matrizA2,30);
	somaMatrizes(matrizSA,matrizA3,30);
	somaMatrizes(matrizSA,matrizA4,30);
	somaMatrizes(matrizSA,matrizA5,30);

	somaMatrizes(matrizSE,matrizE1,30);
	somaMatrizes(matrizSE,matrizE2,30);
	somaMatrizes(matrizSE,matrizE3,30);
	somaMatrizes(matrizSE,matrizE4,30);
	somaMatrizes(matrizSE,matrizE5,30);
	
	somaMatrizes(matrizSI,matrizI1,30);
	somaMatrizes(matrizSI,matrizI2,30);
	somaMatrizes(matrizSI,matrizI3,30);
	somaMatrizes(matrizSI,matrizI4,30);
	somaMatrizes(matrizSI,matrizI5,30);

	somaMatrizes(matrizSO,matrizO1,30);
	somaMatrizes(matrizSO,matrizO2,30);
	somaMatrizes(matrizSO,matrizO3,30);
	somaMatrizes(matrizSO,matrizO4,30);
	somaMatrizes(matrizSO,matrizO5,30);

	somaMatrizes(matrizSU,matrizU1,30);
	somaMatrizes(matrizSU,matrizU2,30);
	somaMatrizes(matrizSU,matrizU3,30);
	somaMatrizes(matrizSU,matrizU4,30);
	somaMatrizes(matrizSU,matrizU5,30);
	int testar, menu, i, j;

	//Criando o discriminante das letras da base de dados
	criaTudo(); 

	printf("***Bem-vindo(a) a WiSARD!***\n");
	
	printf("Caso queira visualizar a ordem das coordenadas selecionadas para a formacao das tuplas digite '1'. ");
    scanf("%i", &testar);
    if(testar == 1){
        for(i=0; i<30; i+=3){
            printf("(%i, %i, %i) ", tuplaA[i], tuplaA[i+1], tuplaA[i+2]);}}
		
	printf("\nCaso queira visualizar o discriminante de todas as letras da base de dados digite '1'\n[AVISO] A exibicao dos discriminantes ocupa 500 linhas. ");
    scanf("%i", &testar);
    if(testar == 1){//avalia resposta do usuario
        printf("Discriminante da classe A:\n");
        exibeDiscriminante(ClasseA);
        printf("Discriminante da classe E:\n");
        exibeDiscriminante(ClasseE);
        printf("Discriminante da classe I:\n");
        exibeDiscriminante(ClasseI);
        printf("Discriminante da classe O:\n");
        exibeDiscriminante(ClasseO);
        printf("Discriminante da classe U:\n");
        exibeDiscriminante(ClasseU);
	}
int contcont = 0;
	
printf("\n--------------------------------------------\n");
while (menu!=9){
	printf("Digite o numero correspondente a funcao desejada\nPara classificar uma letra[1]\nVisualizar as imagens mentais da base de dados[2]\n");
    printf("Para sair da WiSARD[9] - [AVISO] Todo o progresso sera perdido\n");
	scanf("%d",&menu);

	if (menu == 1){ //CLASSIFICAR UMA LETRA

		//Recebendo a matriz do usuário para a prosseguimento da classificação
		printf("Digite a retina\n");
		for (int i = 0; i < 30; ++i)
		{
		scanf("%d",&discu[i]);
		}
		posicaoNeuronios(tuplaA, discu, posicu, 30);
		Zera(classu, 80);
		CriaDiscriminante(classu, posicu);

		//Posicionando os neurônios, para isso cria-se um vetor de posições vazio
		int posicoes[30];

		//Atribuindo valores binários as posições das tuplas da letra do usuário
		posicaoNeuronios(tuplaA, discu, posicoes, 30);
		printf("Caso queira visualizar os valores binarios atribuidos as tuplas digite '1'. ");
        scanf("%i", &testar);
        if(testar == 1){
            for(i=0; i<30; i+=3){
                printf("(%i, %i, %i) ", posicoes[i], posicoes[i+1], posicoes[i+2]);}}

		//Propriamente criando a discriminante do usuario
		printf("\nCaso queira visualizar o discrminante correspondente a letra digitada pelo usuario digite 1. ");
        scanf("%i", &testar);
        if(testar == 1){
            printf("Discriminante do usuario:\n");
            exibeDiscriminante(classu);} 

		//Comparando a letra do usuário com as letras treinados e exibindo o resultado
		compareBleaching(classu);
		printf("Caso queira visualizar o valor de igualdade entre a letra digitada e cada uma das letras possiveis digite 1. ");
        scanf("%i", &testar);
            if(testar == 1){
                printf("Igualdade com a letra A: %i\n", comparadisc(classu, ClasseA));
                printf("Igualdade com a letra E: %i\n", comparadisc(classu, ClasseE));
                printf("Igualdade com a letra I: %i\n", comparadisc(classu, ClasseI));
                printf("Igualdade com a letra O: %i\n", comparadisc(classu, ClasseO));
                printf("Igualdade com a letra U: %i\n", comparadisc(classu, ClasseU));

				int decisao;
                printf("Caso queira visualizar a imagem mental da sua letra digite '1' ");
                scanf("%i", &decisao);
                if(decisao == 1)
                    exibirImagemMental(discu);
			}
		//Treinando a WiSARD
		int decisao;
		printf("Se você quer treinar a Wizard digite 1: \n");
		scanf("%d", &decisao);
		if(decisao == 1){
			char letra;
			printf("Qual letra você quer adicionar\n");
			getchar();
			scanf("%c", &letra);
			if(letra == 'a' || letra == 'A'){
                CriaDiscriminante(ClasseA, posicoes);
                somaMatrizes(matrizSA,discu,30);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(ClasseA);
            }
            if(letra == 'e' || letra == 'E'){
                CriaDiscriminante(ClasseE, posicoes);
                somaMatrizes(matrizSE,discu,30);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(ClasseE);
            }
            if(letra == 'i' || letra == 'I'){
                CriaDiscriminante(ClasseI, posicoes);
                somaMatrizes(matrizSI,discu,30);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(ClasseI);
            }
            if(letra == 'o' || letra == 'O'){
                CriaDiscriminante(ClasseO, posicoes);
                somaMatrizes(matrizSO,discu,30);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(ClasseO);
            }
            if(letra == 'u' || letra == 'U'){
                CriaDiscriminante(ClasseE, posicoes);
                somaMatrizes(matrizSU,discu,30);
                printf("\nLetra %c atualizada!\nNovo Discriminante:\n", letra);
                exibeDiscriminante(ClasseU);
            }
		}
	}if(menu == 2){//Imagens mentais da base de dados
		printf("Imagem mental da Letra A:\n");
        exibirImagemMental(matrizSA);
        printf("Imagem mental da Letra E:\n");
        exibirImagemMental(matrizSE);
        printf("Imagem mental da Letra I:\n");
        exibirImagemMental(matrizSI);
        printf("Imagem mental da Letra O:\n");
        exibirImagemMental(matrizSO);
        printf("Imagem mental da Letra U:\n");
        exibirImagemMental(matrizSU);
	}}

	return 0;
	
	
}