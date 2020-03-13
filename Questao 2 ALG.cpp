#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

float numero, menor=0, maior=0;
int pos_menor=1, pos_maior=1, n_trocas_mai=0, n_trocas_men=0, i=1;

void Varredura(){
	if(numero > 0 && numero < 9999){
		if(numero > maior){
			maior = numero;
			pos_maior=i;
			n_trocas_mai++;
		}
		if(menor == 0){
			menor = numero;
		}
		else 
			if(numero < menor){
				menor = numero;
				pos_menor=i;
				n_trocas_men++;
			}
	}
}
main(){
	cout<<"\t--- Digite quantos numeros quiser, ou digite 9999 para encerrar ---\n\n"; 
	
	while(numero!=9999){
	cout<<"Digite o numero: ";cin>>numero;
	Varredura();
	i++;
	system("cls"); 
	}
	cout<<"\t#### DADOS ####\n\n";
	cout<<"Maior: "<<maior<<endl;
	cout<<"Menor: "<<menor<<endl;
	cout<<"Posicao Maior: "<<pos_maior<<endl;
	cout<<"Posicao Menor: "<<pos_menor<<endl;
	cout<<"Numero de trocas Maior: "<<n_trocas_mai<<endl;
	cout<<"Numero de trocas Menor: "<<n_trocas_men;
}
