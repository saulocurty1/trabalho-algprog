#include <stdio.h>
#include <stdlib.h>

void embaralhar(); //Embaralha vetores
void gera_tuplas(int *vetor_tuplas); //Recebe o vetor de tuplas vazio e o preenche

int main(){
    //Variaveis globais
    int i, j, k, aux;
    //Criando o VETOR de tuplas
    int tuplas[60];
    gera_tuplas(tuplas);

    //somente *SE NECESSARIO* a matriz de tuplas
    int matriz_tuplas[10][3][2];
    aux = 0;
    for(i=0; i<10; i++){
        for(j=0; j<3; j++){
            for(k=0; k<2; k++){
                matriz_tuplas[i][j][k] = tuplas[aux];
                aux++;
    }}}
    return 0;
}

void gera_tuplas(int *vetor_tuplas){
    //Variaveis dummy
    int i,j,k,x,y,aux;

    //Uma coordenada é formada por um valor de x e um valor de y
    int coord_x_possiveis[30] = {0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5};
    int coord_y_possiveis[30] = {0,0,0,0,0,0,1,1,1,1,1,1,2,2,2,2,2,2,3,3,3,3,3,3,4,4,4,4,4,4};

    //Embaralhando os vetores de coordenadas possíveis para selecionar aleatoriamente a posição dos vetores
    embaralhar(coord_x_possiveis, 30);
    embaralhar(coord_y_possiveis, 30);

    //Unindo as coordenadas x e y em um vetor unidimensional
    x = 0;
    y = 0;
    int coordenadas[60];
    for(i=0; i<60; i++){
        if(i%2 == 0){
            coordenadas[i] = coord_x_possiveis[x];
            x++;
        }
        else{
            coordenadas[i] = coord_y_possiveis[y];
            y++;
    }}

    //Verificando e removendo duplicadas no array de coordenadas (OTIMIZAR)
    for(k=0; k<10; k++){
        for(i=0; i<60; i+=2){
                for(j=0; j<60; j+=2){
                    if((coordenadas[i] == coordenadas[j] && coordenadas[i+1] == coordenadas[j+1])&& i!=j){
                            if(coordenadas[i] != coordenadas [58] && i != 58){
                                aux = coordenadas[i];
                                coordenadas[i] = coordenadas[58];
                                coordenadas[58] = aux;
    }}}}}

    //Criando o vetor de tuplas
    for(i=0; i<10; i++)
        vetor_tuplas[i] = coordenadas[i];
}


void embaralhar(int *vet, int vetSize){
	for (int i = 0; i < vetSize; i++)
	{
		int r = rand() % vetSize;
		int temp = vet[i];
		vet[i] = vet[r];
		vet[r] = temp;
}}
