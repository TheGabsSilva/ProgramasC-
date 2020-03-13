/*Programa para manipulação e compreensão de estrutura de dados Lista, Fila FIFO - First in First Out e Pilha LIFO - Last in First Out. 
Feito por: Gabriel da Silva Pinheiro.*/
#include <conio.h>
#include <iostream>
using namespace std;
#define MAXTAM 10

int tamanho=0, lista[MAXTAM], fila[MAXTAM],topofila,pilha[MAXTAM],topopilha=0;

void InserirPilha(){
	if(topopilha==MAXTAM){
		cout<<"\n\tERROR: A pilha esta cheia!\n";
	}else{
		cout<<"\nDigite o valor a ser inserido: ";
		cin>>pilha[topopilha];
		topopilha++;
		cout<<"\nO elemento foi inserido com sucesso!!!\n\n";
	}
}

void RemoverPilha(){
	if(topopilha==0){
		cout<<"\n\nERROR: A pilha esta vazia ou todos os elementos foram removidos!\n";
	}else{
		cout<<"\nElemento ["<<pilha[topopilha-1]<<"] removido.";
		topopilha--;
	}
} 

void ExibirPilha(){
	int i;
	
	if(topopilha==0){
		cout<<"\n\nERROR: A pilha esta vazia!\n\n";
		return;
	}
	for(i = topopilha-1; i >= 0 ;i--){
		cout<<"\nElemento["<<pilha[i]<<"] - posicao na pilha: "<<i+1;
	}
}

void MenuPilha(){
	cout<<"\n\t------ PROGRAMA ESTRUTURA DE DADOS ------\n\n";
	cout<<"\n----      MENU : PILHA       ----\n";
	cout<<"\n--- DIGITE A OPCAO DESEJADA  ---";
	cout<<"\n--- [1]: Inserir elemento    ---";
	cout<<"\n--- [2]: Remover elemento    ---";
	cout<<"\n--- [3]: Exibir Pilha        ---";
	cout<<"\n--- [4]: Sair                ---";	
}

void PilhaPrincipal(){
	int op;
	bool i=true;
	MenuPilha();	
	do {
		op = getche()-'0';
		switch(op){
				case 1:
						system("cls");
						MenuPilha();
						InserirPilha();
						cout<<"\n\n Escolha outra opcao para continuar...\n\n";	
						break;	
				case 2: 
						system("cls");
						MenuPilha();
						RemoverPilha();
						ExibirPilha();
						cout<<"\n\n Escolha outra opcao para continuar...\n\n";	
						break;	
				case 3:
						system("cls");
						MenuPilha();
						ExibirPilha();
						cout<<"\n\n Escolha outra opcao para continuar...\n\n";	
						break;
				case 4:
						system("cls");
						cout<<"\n\n\n\t Voltando para a tela inicial do programa...\n\n\n\n";
						i=false;	
						break;							
		}
	}while(i==true);
	system("pause");
	
}

void InserirFila(){
	if(topofila==MAXTAM){
		cout<<"\n\tERROR: A fila esta cheia!\n";
	}else{
		cout<<"\nDigite o valor a ser inserido: ";
		cin>>fila[topofila];
		topofila++;
		cout<<"\nO elemento foi inserido com sucesso!!!\n\n";
	}
}

void RemoverFila(int x[]){
	int i;
	
	if(topofila==0){
		cout<<"\n\nERROR: A fila esta vazia ou todos os elementos foram removidos!\n";
		return;
	}else{
		cout<<"\nElemento ["<<fila[0]<<"] removido.";
		for(i=0;i<=topofila-1;i++){
			fila[i] = x[i+1];
		}
	}			
	topofila--;
	}

void ExibirFila(){
	int i;
	
	if(topofila==0){
		cout<<"\n\nERROR: A fila esta vazia!\n\n";
		return;
	}
	for(i=0;i<=topofila-1;i++){
		cout<<"\nElemento["<<fila[i]<<"] - posicao na fila: "<<i+1;
	}
}

void MenuFila(){
	cout<<"\n\t------ PROGRAMA ESTRUTURA DE DADOS ------\n\n";
	cout<<"\n----      MENU : FILA       ----\n";
	cout<<"\n--- DIGITE A OPCAO DESEJADA  ---";
	cout<<"\n--- [1]: Inserir elemento    ---";
	cout<<"\n--- [2]: Remover elemento    ---";
	cout<<"\n--- [3]: Exibir Fila         ---";
	cout<<"\n--- [4]: Sair                ---";	
}

void FilaPrincipal(){
	int op;
	bool i=true;
	MenuFila();	
	do {
		op = getche()-'0';
		switch(op){
				case 1:
						system("cls");
						MenuFila();
						InserirFila();
						cout<<"\n\n Escolha outra opcao para continuar...\n\n";	
						break;	
				case 2: 
						system("cls");
						MenuFila();
						RemoverFila(fila);
						ExibirFila();
						cout<<"\n\n Escolha outra opcao para continuar...\n\n";	
						break;	
				case 3:
						system("cls");
						MenuFila();
						ExibirFila();
						cout<<"\n\n Escolha outra opcao para continuar...\n\n";	
						break;
				case 4:
						system("cls");
						cout<<"\n\n\n\t Voltando para a tela inicial do programa...\n\n\n\n";
						i=false;	
						break;							
		}
	}while(i==true);
	system("pause");
	
}

void InserirLista(int valor){
	int i; 
	
	if(tamanho == MAXTAM){ 
		cout<<"\n\tERROR: A lista esta cheia!\n";
		return;
	}
	for(i = tamanho; i > 0 && valor < lista[i-1]; i--){  
		lista[i]=lista[i-1];
	}
	lista[i]=valor;
	tamanho++;
	cout<<"\nO elemento foi inserido com sucesso!!!\n\n";
}

void RemoverLista(int valor){
	int i,j,cont=0;
	
	if(tamanho==0){
		cout<<"\n\tERROR: A lista esta vazia!";
		return;
	}
	for(i=0;i<tamanho && valor >= lista[i]; i++){
		if(valor==lista[i]){
			for(j=i;j<tamanho-1;j++){
				lista[j]=lista[j+1];
			}
			tamanho--;
			i--;
			cont++;
		}
	}			
	if(cont!=0){
		cout<<"\nElemento Removido com Sucesso!!!";
	}else{
		cout<<"\nERROR: O valor nao esta na lista!";
	}
}

void ExibirLista(){
	int i;
	
	if(tamanho==0){
		cout<<"\nERROR: A lista esta vazia!";
		return;		
	}
	for(i=0;i<=tamanho-1;i++){
		cout<<"\nElemento["<<lista[i]<<"] - posicao na lista:" <<i+1;	
	}
}

void BuscarLista(int valor){
	int i,aux=0;
	
	if(tamanho==0){
		cout<<"\nERROR: A lista esta vazia!";
		return;
	}
	for(i=0;i<tamanho && valor >= lista[i];i++){
		if(valor == lista[i]){
			cout<<"\nValor ["<<valor<<"] esta na posicao: "<<i+1;
			aux++;
		}
	}
	if(aux == 0){
		cout<<"\n\tERROR: Valor nao se encontra na lista!";
	}	
}

void MenuLista(){
	cout<<"\n\t------ PROGRAMA ESTRUTURA DE DADOS ------\n\n";
	cout<<"\n----      MENU : LISTA       ----\n";
	cout<<"\n--- DIGITE A OPCAO DESEJADA  ---";
	cout<<"\n--- [1]: Inserir elemento    ---";
	cout<<"\n--- [2]: Remover elemento    ---";
	cout<<"\n--- [3]: Buscar elemento     ---";
	cout<<"\n--- [4]: Exibir Lista        ---";
	cout<<"\n--- [5]: Sair                ---";	
}

void ListaPrincipal(){
	int op, valor;
	bool i = true;
	
	MenuLista();
	do {
		op = getche()-'0';
		switch(op){
				case 1:
						system("cls");
						MenuLista();
						cout<<"\nDigite o valor a ser inserido: ";cin>>valor;
						InserirLista(valor);
						cout<<"\n\n Escolha outra opcao para continuar...\n\n";	
						break;	
				case 2: 
						system("cls");
						MenuLista();
						cout<<"\nDigite o valor a ser removido: ";cin>>valor;
						RemoverLista(valor);
						cout<<"\n\n Escolha outra opcao para continuar...\n\n";	
						break;	
				case 3:
						system("cls");
						MenuLista();
						cout<<"\nDigite o valor a ser buscado: ";cin>>valor;
						BuscarLista(valor);
						cout<<"\n\n Escolha outra opcao para continuar...\n\n";	
						break;
				case 4:
						system("cls");
						MenuLista();
						ExibirLista();
						cout<<"\n\n Escolha outra opcao para continuar...\n\n";	
						break;
				case 5:
						system("cls");
						cout<<"\n\n\n\t Voltando para a tela inicial do programa...\n\n\n\n";
						i=false;	
						break;							
		}
	}while(i==true);
	system("pause");
	
}

main(){
	int op;
	
	do{
		system("cls");
		cout<<"\n\t------ PROGRAMA ESTRUTURA DE DADOS ------\n\n";
		cout<<"\n[1]Lista";
		cout<<"\n[2]Fila";
		cout<<"\n[3]Pilha";
		cout<<"\n[0]Sair";
		cout<<"\nOpcao: ";cin>>op;
		switch(op){
			case 1: 
					system("cls");
					ListaPrincipal();
					break;
			case 2: 
					system("cls");
					FilaPrincipal();
					break;
			case 3: 
					system("cls");
					PilhaPrincipal();
					break;
			case 0: 
					system("cls");
					cout<<"\n\tObrigado por usar o programa...\n\n";
		}
	}while(op != 0); 
}
