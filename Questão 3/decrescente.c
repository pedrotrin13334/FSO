#include <stdio.h>
#include <stdlib.h>
#include "decrescente.h" // HEader para a função decrescente
 

int* decrescente(int cont,int* s) // Os argumentos são um inteiro com a quantidade de números no vetor e um ponteiro  dopróprio vetor, a saída é um ponteiro com o vetor na ordem 						decrescente
{         
      	int *vet=s;
	int lim=cont;
	int i, j, aux;
 	int count;


            for( i=0; i<lim; i++ ){               //
                 for( j=i+1; j<lim; j++ ){        //
                      if( vet[i] < vet[j] ){	  //  Laço for para colocar o vetor em ordem decrescente
                          aux = vet[i];	          //
                          vet[i] = vet[j];        //
                          vet[j] = aux;           //
                      }
                 }
            }
	
return vet;
}
