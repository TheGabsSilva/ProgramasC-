//Gabriel da Silva Pinheiro e Pedro Augusto Ferreira de Almeida;
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std; 

//Quest�o 1;

//Fun��o Recursiva da Potencia;

int potencia(int base, int expoente){
	if(expoente == 0) //Condi��o de parada;
		return 1;//Caso expoente: de potencia de n<=1, retorne 1;  
	else
		expoente= base * potencia(base,expoente-1); //Chamada Recursiva; 
		return expoente;
}

//Pograma Principal;

main(){
	int x, base, expoente; 
	cout<<"Informe a Base: ";cin>>base;cout<<endl;
	cout<<"Informe o Expoente: ";cin>>expoente;cout<<endl;
	x= potencia (base,expoente);
	cout<<"Potencia de "<<base<<" elevado a "<<expoente<<": "<<x; 
}
