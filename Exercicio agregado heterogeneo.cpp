#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
typedef struct{
	char nome[50];
	int idade;
	float nota1,nota2,media; 
}Registro;

Registro aluno[5];
main(){
	for(int i=0;i<5;i++){
		cout<<"Nome do aluno "<<i+1<<": ";cin>>aluno[i].nome;
		cout<<"Idade do aluno "<<i+1<<": ";cin>>aluno[i].idade;
		cout<<"Nota 1 do aluno "<<i+1<<": ";cin>>aluno[i].nota1;
		cout<<"Nota 2 do aluno "<<i+1<<": ";cin>>aluno[i].nota2;
		aluno[i].media = (aluno[i].nota1+aluno[i].nota2)/2;
		system("cls");
	}
	for(int i=0;i<5;i++){
		cout<<"-------------------------"<<endl;
		cout<<"Nome do aluno "<<i+1<<": "<<aluno[i].nome<<endl;
		cout<<"Idade do aluno "<<i+1<<": "<<aluno[i].idade<<endl;
		cout<<"Nota 1 do aluno "<<i+1<<": "<<aluno[i].nota1<<endl;
		cout<<"Nota 2 do aluno "<<i+1<<": "<<aluno[i].nota2<<endl;
		cout<<"Media do aluno "<<i+1<<": "<<aluno[i].media<<endl;	 
		cout<<"--------------------------"<<endl;
	}		
}


