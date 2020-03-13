#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//Questão 6; 

main(){
	int m[4][4];
	
	cout<<"\n\t---Informe os elementos da matriz---\n\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){		
		cout<<"Elemento["<<i+1<<"]["<<j+1<<"]: "; cin>>m[i][j];
		}
	}
	system("cls");
	cout<<"\n\t---Matriz---\n\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			cout<<m[i][j]<<" ";
			cout<<endl;
	}
	cout<<"\n\t---Diagonal Principal---\n\n";
	for(int i=0;i<4;i++){
		cout<<m[i][i]<<" ";
		cout<<endl;
	}
	cout<<endl<<"\n\t---Diagonal Secundaria---\n\n";
	for(int i=0;i<4;i++){
		cout<<m[i][3-i]<<" ";
		cout<<endl;
	}
}
