#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std; 

//Quest�o 9;

main(){
	FILE *arq;
	arq = fopen("dados.dat","w");
	if(arq == NULL){
		cout<<"ERRO NO ARQUIVO";
		system("pause");
	}
	else{
		int i=0,soma=0,j=0,soma1=0;
		fprintf(arq,"\tN�meros Pares\n\n");
		while(i<=200){
			fprintf(arq,"%d",i);
			if(i<200)
				fprintf(arq,", ");
			else
				fprintf(arq,".");
			soma+=i;	
			i+=2;
		}
		fprintf(arq,"\n\n\tN�meros �mpares\n\n");
		while(j<=99){
			if(j % 2 != 0){
				fprintf(arq,"%d",j);
				soma1+=j;
			if(j<99)
				fprintf(arq,", ");
			else
				fprintf(arq,".");	
			}
			j++;
		}
		fprintf(arq,"\n\nA soma dos cem primeiros n�meros pares �: %d",soma);
		fprintf(arq,"\nA soma dos ciquenta primeiros n�meros �mpares �: %d",soma1);
	}	
} 
