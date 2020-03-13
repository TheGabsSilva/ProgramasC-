#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

//Questão 10;

typedef struct{
	char nome[100], email[100];
	int idade, telefone;
}Estrutura;
	Estrutura pessoa[101];
	int salvo=0,k=0;
	char dados[20]={"dados.txt"};

void add(){
	system("cls");
	cout<<"APS PROGRAMACAO ESTRUTURADA"<<endl;
	cout<<"MENU ADICIONAR"<<endl<<endl<<endl;
	cout<<"Nome: "; cin>>pessoa[k].nome;
	cout<<"Idade: "; cin>>pessoa[k].idade;
	cout<<"Email: "; cin>>pessoa[k].email;
	cout<<"Telefone: "; cin>>pessoa[k].telefone;
	salvo=1;
	if (salvo==1 || k<102){
		FILE *arq;
		if((arq = fopen(dados,"a+"))== NULL){
		    system("cls");
			cout<<"ERRO AO SALVAR ARQUIVO"<<endl;
		}
		else{
			fprintf(arq,"Valor k: %d\n",k);
			fprintf(arq,"Nome: %s\n",pessoa[k].nome);
			fprintf(arq,"Idade: %d\n",pessoa[k].idade);
			fprintf(arq,"Email: %s\n",pessoa[k].email);
			fprintf(arq,"Telefone: %d\n\n",pessoa[k].telefone);
			k+=1;
		}
		fclose(arq);
	}
		else{
    		cout<<"DADOS INSUFICIENTES";
		}
	system("pause");
}
void exb(){
	system("cls");
	cout<<"APS PROGRAMAÇAO ESTRUTURADA"<<endl;
	cout<<"MENU EXIBIR"<<endl<<endl<<endl;
	for (int i=0;i<101;i++){
		if (pessoa[i].idade>0 || pessoa[i].telefone>0){
		cout<<"Nome: "<<pessoa[i].nome<<endl;
		cout<<"Idade: "<<pessoa[i].idade<<endl;
		cout<<"Email: "<<pessoa[i].email<<endl;
		cout<<"Telefone: "<<pessoa[i].telefone<<endl<<endl;
		}
	}
	system("pause");	
}
void pesq(){
	char tnome[100];
	system("cls");
	cout<<"APS PROGRAMAÇAO ESTRUTURADA"<<endl;
	cout<<"MENU PESQUISAR"<<endl<<endl<<endl;
	cout<<"Nome a ser pesquisado: "; cin>>tnome;
	FILE *arq;
	if ((arq = fopen(dados,"r"))== NULL){
		cout<<"ERRO AO CARREGAR ARQUIVO"<<endl;
	} 
	else{
		for (int i=0;i<101;i++){
			if (strcmp(tnome,pessoa[i].nome)==0){
				cout<<"Nome: "<<pessoa[i].nome<<endl;
				cout<<"Idade: "<<pessoa[i].idade<<endl;
				cout<<"Email: "<<pessoa[i].email<<endl;
				cout<<"Telefone: "<<pessoa[i].telefone<<endl<<endl;
			}
		}
	fclose(arq);
	system("pause");
	}
}
main(){
	int op;	
	do{
		system("cls");	
		cout<<"APS PROGRAMACAO ESTRUTURADA"<<endl;
		cout<<"MENU INICIAL"<<endl;	
		cout<<endl<<endl<<"[1] Adicionar"<<endl;
		cout<<"[2] Pesquisar"<<endl;
		cout<<"[3] Exibir"<<endl;
		cout<<"[0] Sair"<<endl;
		cout<<"Opcao: "; cin>>op;
		salvo=0;
		switch(op){
			case 1: add(); break;
			case 2: pesq(); break;
			case 3: exb(); break;
		}
	}while(op!=0);
}
