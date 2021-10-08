#include <stdio.h>
#include <stdlib.h>

void embaralhar(); //Embaralha vetores
void geraTuplas(int *vetorTuplas, int tamanho); //Recebe o vetor de tuplas vazio e o preenche

//Compara o vetor de tuplas, com o vetor desejado e retorna um vetor de posição para os neurônios
void posicaoNeuronios(int *vetorTuplas, int *vetorLetras, int *vetorPosicao, int tamanho); 

int main(){
    //TESTANDO AS FUNÇÕES
    int matrizA1[30]={0,1,1, 1,0,1, 0,0,0, 1,1,0, 0,0,1, 1,1,1, 1,1,1, 0,0,0, 1,1,0, 0,0,1};

    //Variaveis globais
    int i;

    //Criando o VETOR de tuplas
    int tuplas[30];
    geraTuplas(tuplas, 30);

    //Printando o vetor de tuplas
    printf("\n\nAs posicoes das tuplas sao:\n");
    for(i=0; i<30; i+=3)
        printf("(%i, %i, %i)  ", tuplas[i],tuplas[i+1], tuplas[i+2]);

    //Criando o vetor de posições
    int posicoes[30];
    posicaoNeuronios(tuplas, matrizA1, posicoes,30);
    printf("\n\nOs valores correspondentes as posicoes das tuplas sao:\n");
    for(i=0; i<30; i+=3)
        printf("(%i, %i, %i)  ",posicoes[i],posicoes[i+1], posicoes[i+2]);

}

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