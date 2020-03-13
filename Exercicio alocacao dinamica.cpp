#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <iostream>

using namespace std;

int total=0;
int *v;
bool inicio = true; 

void Alocar(){
	system("cls");
	cout<<"\t--- Programa Alocacao Dinamica ---\n";
	puts("Quantos numeros deseja alocar?"); cin>>total;
	if(inicio)
		v = (int*)malloc(total * sizeof(int));
	else 
		v = (int*)realloc(v,total * sizeof(int));
	inicio = false;
	system("pause");
}

void Exibir(){
	system("cls");
	cout<<"\t--- Programa Alocacao Dinamica ---\n";
	if(inicio)
		puts("NAO EXISTE NUMEROS");
	else{
		for(int i=0;i<total;i++){
			cout<<"V["<<i+1<<"]: "<<v[i]<<endl;
		}
	}	
	system("pause");
}

void Armazenar(){
	system("cls");
	cout<<"\t--- Programa Alocacao Dinamica ---\n";
	if(inicio)
		puts("INFORME NO MENU ALOCAR A QUANTIDADE DE NUMEROS");
	else{
		for(int i=0;i<total;i++){
		cout<<"Vetor["<<i+1<<"]: ";cin>>v[i];
		}
	}
	system("pause");
}

main(){
	int op;
	do{
		system("cls");
		cout<<"\t--- Programa Alocacao Dinamica ---\n\n";
		puts("[1] Alocar");
		puts("[2] Armazenar");
		puts("[3] Exibir");
		puts("[0] Sair");
		cout<<"\nOPCAO: ";cin>>op;
		switch(op){
		case 1: Alocar(); break;
		case 2: Armazenar(); break;
		case 3: Exibir(); break;
		}
	}while(op!=0);
	free(v);
}
