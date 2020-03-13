#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//Questão 5; 

main(){
	float v[40], f[4]={0}; 
	
	for(int i=0;i<40;i++){
		cout<<"Vetor["<<i+1<<"]: ";cin>>v[i]; 	
		system("cls");
	}
	for (int i=0;i<40;i++){
			if(( v[i]>=1 ) && ( v[i]<=100 )) 
				f[0]++;
		else
			if(( v[i]>=200 ) && ( v[i]<=450 ))
				f[1]++;
		else
			if(( v[i]>=501 ) && ( v[i]<=745.5 ))
				f[2]++;
		else
			if(( v[i]>=800.5 ) && ( v[i]<921 ))
				f[3]++; 
	}
	cout<<"Faixa 1 (1 - 100): " <<f[0]<<endl;
	cout<<"Faixa 2 (200 - 450): " <<f[1]<<endl;
	cout<<"Faixa 3 (501 - 745.5): " <<f[2]<<endl;
	cout<<"Faixa 4 (800.5 - 920.9): " <<f[3]<<endl;
	cout<<"Para visualizar os vetores digitados pressione qualquer tecla..."<<endl;
	system("pause");
	for (int i=0;i<40;i++){
		cout<<"Vetor["<<i+1<<"]: "<<v[i]<<endl;
	}
}
