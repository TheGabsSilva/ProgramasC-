#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

//Questão 8; 

typedef struct{
	char nome[50],end[50],tel[20];
	char sexo;
	int idade;
}Registro;
Registro dados; 
bool salvo = false; 

void Add(){
	system("cls");
	cout<<"\t--- Questao 8 ---"<<endl;
	cout<<"\nADICIONAR: \n"<<endl;
	cout<<"Digite o seu nome: ";
	fflush(stdin);
	gets(dados.nome);
	cout<<"Digite sua idade: "; cin>>dados.idade;
	cout<<"Digite seu sexo[M/F]: "; cin>>dados.sexo;
	cout<<"Digite seu telefone: "; 
	fflush(stdin); 
	gets(dados.tel);
	cout<<"Digite seu endereco: ";
	fflush(stdin);
	gets(dados.end);
	salvo=true;
	system("pause");
}
void Salvar(){
	char nome_arq[50];
	system("cls");
	cout<<"\t---Questao 8---\n"<<endl;
	cout<<"Salvar em arquivo externo:\n"<<endl;
	if(salvo){
		cout<<"Nome do arquivo: ";cin>>nome_arq;
		strcat(nome_arq,".txt");
		FILE*arq;
		if ((arq = fopen(nome_arq,"w"))==NULL){
			cout<<"ERRO NO ARQUIVO"<<endl;
		}
		else{
			fprintf(arq,"Nome = %s\n",dados.nome);
			fprintf(arq,"Idade = %d\n ",dados.idade);
			fprintf(arq,"Sexo = %c\n ",dados.sexo);
			fprintf(arq,"Telefone = %s\n ",dados.tel);
			fprintf(arq,"Endereco = %s\n ",dados.end);
			cout<<"\n\tARQUIVO SALVO COM SUCESSO."<<endl;
		}
		fclose(arq);
		salvo = false;
	}
	else
		cout<<"\tPOR FAVOR VOLTE AO MENU INICIAL E INSIRA OS DADOS."<<endl;		
	system("pause");
}
main(){
	int op;
	do{
		system("cls");
		cout<<"\t--- Questao 8 ---\n\n";
		cout<<"[1] Adicionar"<<endl;
		cout<<"[2] Salvar"<<endl;
		cout<<"[0] Sair"<<endl;
		cout<<"\nEscolha: "; cin>>op;
		switch(op){
			case 1: Add(); break;
			case 2: Salvar(); break;
		}
	}while(op!=0);
}
