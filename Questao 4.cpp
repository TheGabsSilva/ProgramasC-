#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//Questão 4; 

main(){
	float nota[10][2], media;
	char nome[10][50];
	for (int i=0;i<10;i++){
		cout<<"Aluno " <<i+1<<endl;
		cout<<"Nome: "; cin>>nome[i];
		cout<<"Nota "<<nota[i][0]+1<<": "; cin>>nota[i][0];
		cout<<"Nota "<<nota[i][1]+2<<": "; cin>>nota[i][1];
		system("cls");
	}
	
	cout<< "\t----RESULTADOS----\n\n";
	for (int i=0;i<10;i++){
		media=(nota[i][0]+nota[i][1])/2;
		if(media >= 7)
			cout<<"Aluno "<<i+1<<": "<<nome[i]<<" - tem media: "<<media<<" e esta aprovado."<<endl;
		else if(media>=4)
			cout<<"Aluno "<<i+1<<": "<<nome[i]<<" - tem media: "<<media<<" e precisa tirar na terceira prova " <<14-media<<"."<<endl;
		 else
		 	cout<<"Aluno "<<i+1<<": "<<nome[i]<<" - tem media: "<<media<<" e esta reprovado."<<endl;
		
	}			
}

