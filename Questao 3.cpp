#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int numero, quantidade=0, menor, maior;

//Questão 3;

void Maior(){//Função Maior, verifica o maior valor;
		if (quantidade ==0 )
		maior=numero;
		else if(numero > maior)
		maior=numero;
}

void Menor(){//Função Menor, verifica o menor valor;
	if (quantidade==0)  
		menor=numero;
	else if(numero <= menor && numero>=0)
		menor=numero;
}
float Media(float x, float y){//Função Media, calcula e retorna a media dos valores inseridos pelo o usuário; 
	return x/y;
}
int Soma(int x, int y){//Função Soma, calcula e retorna a soma dos valores inseridos pelo o usuário; 
	return x+y;
}
main(){//Programa Principal;
	int soma=0;
	float media=1;	
	cout<<"\t---DIGITE QUANTOS NUMEROS QUISER, OU DIGITE UM NUMERO NEGATIVO PARA SAIR---\n\n";
	while(numero>=0){
		cout<<"Informe o "<<quantidade+1<<" numero inteiro: ";cin>>numero;
		if(numero>=0){
			Menor();
			Maior();
			soma=Soma(numero,soma);	
			cout<<endl;
	}
			quantidade++;
}
	media=Media(soma,quantidade-1);
	system("pause");
	system("cls");	
	cout<<"\t----- RESULTADOS -----\n\n";
	cout<<"Maior: "<<maior<<endl;
	cout<<"Menor: "<<menor<<endl;
	cout<<"Soma: "<<soma<<endl;
	cout<<"Media: "<<media<<endl;
}
