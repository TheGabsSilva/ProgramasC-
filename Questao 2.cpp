#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std; 

//Questão 2;

int Fatorial(int n){ //Função 1;
  if(n<=0)
    return 1;
  else
    return n*Fatorial(n-1);
}
int FatorialInterativa(int n){ //Função 2;
  int x=1;
	for(int i=2;i<=n;i++)
		x*=i;
	return x;
}
main(){
  	int num, num1, escolha;
	cout<<"Escolha qual funcao devera retornar o resultado, 1 para Fat e 2 para Fat Int: ";cin>>escolha;
	system("cls");
	switch(escolha){//Estrutura de escolha da função;
		case 1:
			cout<<"Fatorial"<<endl;
			cout<<"Numero: "; cin>>num;cout<<endl;
			cout<<"Fatorial de "<<num<<": "<<Fatorial(num);cout<<endl;
		break;
		case 2:
			cout<<"Fatorial Interativa"<<endl;
			cout<<"Fatorial do numero: ";cin>>num1;cout<<endl;
			cout<<"Fatorial de "<<num1<<": "<<FatorialInterativa(num1);
		break;
		default:
			cout<<"Valor invalido"; 
	}
}

