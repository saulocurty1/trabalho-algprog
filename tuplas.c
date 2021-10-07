#include <stdio.h>
#include <stdlib.h>

void embaralhar(); //Embaralha vetores
void geraTuplas(int *vetorTuplas, int tamanho); //Recebe o vetor de tuplas vazio e o preenche

int main(){
    //Variaveis globais
    int i;

    //Criando o VETOR de tuplas
    int tuplas[30];
    geraTuplas(tuplas, 30);

    //Printando o vetor de tuplas
    printf("\nAs posicoes das tuplas sao:\n");
    for(i=0; i<30; i+=3)
        printf("(%i, %i, %i)  ", tuplas[i],tuplas[i+1], tuplas[i+2]);
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