#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef struct{//Cria uma estrutura; 
	char nome[50];// define o campo do nome;
	int idade;// define o campo da idade;
	float nota;//define o campo da nota;	
}Unicarioca;//<<Tipo de dado chamado 'Unicarioca' ; 

Unicarioca aluno[5];
main(){
	for(int i=0;i<5;i++){
		cout<<"Nome do aluno "<<i+1<<": ";cin>>aluno[i].nome;
		cout<<"Idade do aluno "<<i+1<<": ";cin>>aluno[i].idade;
		cout<<"Nota do aluno "<<i+1<<": ";cin>>aluno[i].nota;
		system("cls");
	}
	for(int i=0;i<5;i++){		
		cout<<"Seu nome e "<<aluno[i].nome<<" tem "<<aluno[i].idade<<" anos e nota "<<aluno[i].nota<<endl; 
	}
}
