#include <stdio.h>
#include <stdlib.h>
#include "crescente.h" // Header para a função crecente
 

int* crescente(int cont,int* s) //// Os argumentos são um inteiro com a quantidade de números no vetor e um ponteiro  do próprio vetor, a saída é um ponteiro com o vetor na ordem 						decrescente
{         
      	int *vet=s;
	int lim=cont;
	int i, j, aux;
 	int count;

 						//
            for( i=0; i<lim; i++ ){
                 for( j=i+1; j<lim; j++ ){	//
                      if( vet[i] > vet[j] ){	//
                          aux = vet[i];		// Laço for que coloca o vetor em ordem crescente	
                          vet[i] = vet[j];	//
                          vet[j] = aux;		//
                      }
                 }
            }
	
return vet;
}
