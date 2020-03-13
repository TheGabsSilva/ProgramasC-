#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

typedef struct{
	char nome[50],end[50],tel[15];
	int idade;
}Pessoa;
Pessoa func[10]; 
int total=0;

void Cadastrar(){
	system("cls");	
	puts("PROGRAMA UNICARIOCA");
	puts("CADASTRAR FUNCIONARIO");
	if(total<10){
		cout<<"Nome: "; cin>>func[total].nome;
		cout<<"Endereco: "; cin>>func[total].end;
		cout<<"Telefone: "; cin>>func[total].tel;
		cout<<"Idade: "; cin>>func[total].idade;
		total++;
	}
	else
		puts("LOTADO");
	system("pause");
}

void Buscar(){
	system("cls");	
	puts("PROGRAMA UNICARIOCA");
	puts("BUSCAR FUNCIONARIO");	
	if(total>0){
		char nome[50];
		cout<<"Nome para pesquisa: "; cin>>nome;
		for(int i=0;i<total;i++){
			if(strcmp(nome, func[i].nome)==0){
				cout<<"End: "<<func[i].end<<endl<<endl;
				cout<<"Tel: "<<func[i].tel<<endl<<endl;
				cout<<"Idade: "<<func[i].idade<<endl<<endl;
			}
		}
	}
	else
		puts("NAO TEM NINGUEM CADASTRADO");
	system("pause");
}
main(){
	int op; 
	do{
		system("cls");
		puts("PROGRAMA UNICARIOCA");
		puts("[1] CADASTRAR FUNCIONARIO");
		puts("[2] BUSCAR FUNCIONARIO");
		puts("[0] SAIR");
		puts("OPCAO: "); cin>>op;
		switch(op){
			case 1: Cadastrar(); break;
			case 2: Buscar(); break;
		}
	}while(op!=0);
} 
