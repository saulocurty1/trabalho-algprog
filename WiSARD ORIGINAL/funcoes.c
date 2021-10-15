#include <stdio.h>
#include <math.h>

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
    }
}

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
        //Convertendo de binario pra decimal para pegar a posição do vetor
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

void compare(int neuronioletra[], int classeA, int classeB, int classeC, int classeD, int classeE, int classeF, int classeG, int classeH, int classeI, int classeJ, int classeK, int classeL, int classeM, int classeN, int classeO, int classeP, int classeQ, int classeR, int classeS, int classeT, int classeU, int classeV, int classeW, int classeX, int classeY, int classeZ){
    //Compara uma letra com todas da base de dados
    int vet[26];
    vet[0]=comparadisc(neuronioletra,classeA);
    vet[1]=comparadisc(neuronioletra,classeB);
    vet[2]=comparadisc(neuronioletra,classeC);
    vet[3]=comparadisc(neuronioletra,classeD);
    vet[4]=comparadisc(neuronioletra,classeE);
    vet[5]=comparadisc(neuronioletra,classeF);
    vet[6]=comparadisc(neuronioletra,classeG);
    vet[7]=comparadisc(neuronioletra,classeH);
    vet[8]=comparadisc(neuronioletra,classeI);
    vet[9]=comparadisc(neuronioletra,classeJ);
    vet[10]=comparadisc(neuronioletra,classeK);
    vet[11]=comparadisc(neuronioletra,classeL);
    vet[12]=comparadisc(neuronioletra,classeM);
    vet[13]=comparadisc(neuronioletra,classeN);
    vet[14]=comparadisc(neuronioletra,classeO);
    vet[15]=comparadisc(neuronioletra,classeP);
    vet[16]=comparadisc(neuronioletra,classeQ);
    vet[17]=comparadisc(neuronioletra,classeR);
    vet[18]=comparadisc(neuronioletra,classeS);
    vet[19]=comparadisc(neuronioletra,classeT);
    vet[20]=comparadisc(neuronioletra,classeU);
    vet[21]=comparadisc(neuronioletra,classeV);
    vet[22]=comparadisc(neuronioletra,classeW);
    vet[23]=comparadisc(neuronioletra,classeX);
    vet[24]=comparadisc(neuronioletra,classeY);
    vet[25]=comparadisc(neuronioletra,classeZ);
  
    int i=0, j,maior=0,aux,letra=25,vencedora; 
    //Inicializo maior com o valor do vet na posição zero e assim posso apagar a comparação inicial dentro do for
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
    }//Se tiver um numero maior ele vai ser printado

    if(vet[25]>vet[24]){
        vencedora=65+letra;
        printf("\nA letra pertence a classe %c\n",vencedora);
    }//Em caso de empate avisa que nao foi possivel determinar
    if(vet[25]==vet[24]){
        printf("\nNao foi possivel determinar a classe\n");
    }
}

void exibirImagemMental(int *letra){
    int i;
    //Exibi a imagem mental da matriz desejada
    for(i = 0; i<30; i+=5){
        printf("%i %i %i %i %i\n",letra[i], letra[i+1], letra[i+2], letra[i+3],letra[i+4]);
    }
}

void exibeDiscriminante(int *discriminante){
    int i;
    //Exibi o discrimante da matriz desejada
    for(i=0; i<80; i+=8){
        printf("%i %i %i %i %i %i %i %i\n", discriminante[i],discriminante[i+1],discriminante[i+2],discriminante[i+3],discriminante[i+4],discriminante[i+5],discriminante[i+6],discriminante[i+7]);
    }
}

void somaMatrizes(int *matrizA, int *matrizB, int tamanho){
    int i;
    //Soma entre duas matrizes
    for(i=0; i<tamanho; i++){
        matrizA[i] += matrizB[i];
    }
}
