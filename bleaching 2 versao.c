#include <stdio.h>
#include <stdlib.h>

int main(){



int TESTE1[5]={1,2,2,3,1};
int TESTE2[5]={1,3,3,2,1};

soma2 = 0;

if(TESTE1[4] == TESTE2[4]){

            do{
int *p1, *p2, desempate = 0, soma1 = 0, soma2 = 0;

                        for(p1 = TESTE1; *p1 >= desempate; p1++){
                            if(*p1>desempate){
                                soma1 ++;
                            }
                         }


                        for(p2 = TESTE2; *p2 >= desempate; p2++){
                            if(*p2>desempate){
                                soma2++;

                                    }
                                }

                        if(soma1 == soma2){
                            desempate++;
                            soma1 = 0;
                            soma2 = 0;
                        }



                }while(soma1 == soma2);

            if(soma1 > soma2){
                printf("soma1: %d", soma1);
            }else{
                printf("soma2: %d", soma2);
            }

            }


    return 0;
}
