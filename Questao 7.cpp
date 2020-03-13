#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//Questão 7; 

main(){
	int m[3][3];
	
	cout<<"\n\t---Informe os elementos da matriz---\n\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Elemento""["<<i+1<<"]["<<j+1<<"]: ";cin>>m[i][j];		
		}	
	}
	system("cls");
	cout<<"\n\t---Matriz Original---\n\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			cout<<m[i][j]<<" ";
			cout<<endl;
	}
	for(int i=0;i<3;i++){//Multiplica por 5
		for(int j=0;j<3;j++)
			m[i][j]*=5;		
	}
	cout<<"\n\t---Matriz Multiplicada por 5---\n\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
		cout<<m[i][j]<<" ";
		cout<<endl;
	}
}

