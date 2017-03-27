// Programa que coloca um vetor de inteiros em ordem crescente ou decrescente

#include <stdio.h> //
#include <stdlib.h> //
#include <string.h> //   
#include "crescente.h" //      Declaração das headers das funções crescente() e decrescente()
#include "decrescente.h" //

int main(int argc, char*argv[])
{
	unsigned int *i;	//
	unsigned int count=0;	//  Declaração de inteiros não negativos
	unsigned int count2=0;	//
	
	if (argv[1] == NULL || strcmp(argv[1],"-d") == 0 ) // Verifica se o parãmetro é vazio ou se foi digitado "-d"para executar a ordem crescente
	{				
		i=(unsigned int *)malloc(sizeof(unsigned int)); // 
		if(i == NULL)					// Alocação de memória	
  			printf("Sem espaço suficiente\n");	//	
		
		scanf("%d",&i[count]);			
		while (i[count]!=-1) // Condição até o número -1 ser enviado
		{	
			count++;
			i=(unsigned int *)realloc(i,(count+1)*sizeof(unsigned int));   // 
			if(i == NULL)					 	       // Realocação de memória	
  				printf("Sem espaço suficiente\n");	               //	
			
			scanf("%d",&i[count]);
		}
		
			crescente(count,i);	// Executa a função crescente() para colocar o vetor em ordem crescente	
			
			printf("Saída crescente: \n");		
			for(count2=0;count2<count;count2++)
			printf("%d ",i[count2]);
		free(i); // Libera a memória				
	}
	else if(strcmp(argv[1],"-r") == 0 ) // Compara se as strigs são iguais para executar o parâmetro "-r" para a ordem decrescente
	{				
		i=(unsigned int *)malloc(sizeof(unsigned int)); // 
		if(i == NULL)					// Alocação de memória	
  			printf("Sem espaço suficiente\n");	//	
		
		scanf("%d",&i[count]);			
		while (i[count]!=-1) // Condição até o número -1 ser enviado
		{	
			count++;
			i=(unsigned int *)realloc(i,(count+1)*sizeof(unsigned int));   // 
			if(i == NULL)					 	       // Realocação de memória	
  				printf("Sem espaço suficiente\n");	               //	
			
			scanf("%d",&i[count]);
		}
		
			decrescente(count,i);	// Executa a função decrescente() para colocar o vetor em ordem decrescente	
			
			printf("Saída decrescente: \n");
			for(count2=0;count2<count;count2++)
			printf("%d ",i[count2]);
		free(i); // Libera a memória	
	}
	else
	{
		printf("Parâmetro inexistente\n");
		exit(1);
	}
	return 0;
}
