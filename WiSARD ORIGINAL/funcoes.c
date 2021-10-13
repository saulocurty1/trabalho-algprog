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
int neuK[80];
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
int neuW[80];
int neuX[80];
int neuY[80];
int neuZ[80];

void geraTuplas(int *vetorTuplas, int tamanho){
    //Variaveis locais
    int i;
    
    //Gerando o vetor de coordenadas com base na quantidade de posições
    int coordenadas[tamanho];
    for(i=0; i<tamanho; i++){
        coordenadas[i] = i;
    }

    //Embaralhando o vetor de coordenadas
    embaralhar(coordenadas, tamanho);

    //Atribuindo os valores das coordenadas ao vetor de tuplas
    for(i=0; i<tamanho; i++)
        vetorTuplas[i] = coordenadas[i];
}

void embaralhar(int *vet, int vetSize){
    int i;
	for (i = 0; i < vetSize; i++)
	{
		int r = rand() % vetSize;
		int temp = vet[i];
		vet[i] = vet[r];
		vet[r] = temp;
}}

void posicaoNeuronios(int *vetorTuplas, int *vetorLetras, int *vetorPosicao, int tamanho){
    int i;

    //Compara se a letra possui 0 ou 1 na posição da tupla e atribui o mesmo valor ao vetor de posições
    for(i=0; i<tamanho; i++){
        if(vetorLetras[vetorTuplas[i]] == 0){
            vetorPosicao[i] = 0;
        }
        else{
            vetorPosicao[i] = 1;
        } 
    }
}


void Zera(int *ma){
    //Transforma um vetor em um vetor de zeros
    for(int i=0; i< 80; i++){
        ma[i] = 0;
    }
}

void CriaDiscriminante(int *neuronio, int *posicoes){
    int contador = 0;
    int a, b, c = 0;
    int valor = 0;
    for(int i = 0; i < 30; i = i + 3){
        a = posicoes[i];
        b = posicoes[i + 1];
        c = posicoes[i + 2];
        //COnvertendo de binario pra decimal para pegar a posição do vetor
        valor  = (pow(2, 0) * c) + (pow(2, 1) * b) + (pow(2, 2) * a) + contador;  
        contador += 8;
        neuronio[valor]++;
    }   
}

int comparadisc(int neuroletra[], int neuroalfabeto[]){
    //Compara duas discriminantes
    int i;
    int contadorigualdade=0;
    for(i=0;i<80;i++){
        if(neuroletra[i]>0 && neuroalfabeto[i]>0){
            contadorigualdade++; 
        }
    }
    return contadorigualdade;
}

void compare (int neuronioletra[]){
    //Comapra uma letra com todas da base de dados
  int vet[26];
  vet[0]=comparadisc(neuronioletra,neuA);
  vet[1]=comparadisc(neuronioletra,neuB);
  vet[2]=comparadisc(neuronioletra,neuC);
  vet[3]=comparadisc(neuronioletra,neuD);
  vet[4]=comparadisc(neuronioletra,neuE);
  vet[5]=comparadisc(neuronioletra,neuF);
  vet[6]=comparadisc(neuronioletra,neuG);
  vet[7]=comparadisc(neuronioletra,neuH);
  vet[8]=comparadisc(neuronioletra,neuI);
  vet[9]=comparadisc(neuronioletra,neuJ);
  vet[10]=comparadisc(neuronioletra,neuK);
  vet[11]=comparadisc(neuronioletra,neuL);
  vet[12]=comparadisc(neuronioletra,neuM);
  vet[13]=comparadisc(neuronioletra,neuN);
  vet[14]=comparadisc(neuronioletra,neuO);
  vet[15]=comparadisc(neuronioletra,neuP);
  vet[16]=comparadisc(neuronioletra,neuQ);
  vet[17]=comparadisc(neuronioletra,neuR);
  vet[18]=comparadisc(neuronioletra,neuS);
  vet[19]=comparadisc(neuronioletra,neuT);
  vet[20]=comparadisc(neuronioletra,neuU);
  vet[21]=comparadisc(neuronioletra,neuV);
  vet[22]=comparadisc(neuronioletra,neuW);
  vet[23]=comparadisc(neuronioletra,neuX);
  vet[24]=comparadisc(neuronioletra,neuY);
  vet[25]=comparadisc(neuronioletra,neuZ);
  
  int i=0, j,maior=vet[0],aux,letra=25,vencedora; 
  //inicializo maior com o valor do vet na posição zero e assim posso apagar a comparação inicial dentro do for
  for (int i = 0; i <  26; ++i) {            
        if(vet[i] > maior){
            maior = vet[i];
            letra  = i;
        }  
  } 

  for(i=0;i<26;i++){
    for(j=i+1;j<26;j++){
      if(vet[i]>vet[j]){
        aux=vet[i];
        vet[i]=vet[j];
        vet[j]=aux;
      }
    }
  }//se tiver um numero maior ele vai ser printado

  if(vet[25]>vet[24]){
    vencedora=65+letra;
    printf("\nA letra pertence a classe %c\n",vencedora);
  }//em caso de empate avisa que nao foi possivel determinar
  if(vet[25]==vet[24]){
    printf("\nNao foi possivel determinar a classe\n");
  }
}