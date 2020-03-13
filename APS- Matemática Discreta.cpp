/*nome: Gabriel da Silva Pinheiro, 
Matrícula: 2018101703
Turma:136*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Fatorial(int n){
    if(n==0 || n==1)
    return 1;
    return n*Fatorial(n-1); 
}

int arranjo(int n, int p){
  if (p>1)
      return n*arranjo(n-1,p-1);
   else
      return n;
}

int combinacao(int n, int p){
   return arranjo(n,p)/Fatorial(p);
}

int main(){
    int n,p;
    int A,C,P;
    char op;
    
	system("color 1F"); system("title Desenvolvido por: Gabriel Silva");
    do{
    	printf("Calculadora de Arranjo,Combinacao e Permutacao\n\n");
    do{
    	printf("Entre com o valor de n: ");scanf("%li",&n);
      	printf("\nEntre com o valor de p: ");scanf("%li",&p);
      	if(n<p || p<0)
      		printf("!!ERROR!! Dados Inseridos incorretos\n\nDigite novamente!\n\n ");
      }while(n<p || p<0);
    A = arranjo(n,p);
    C = combinacao(n,p);
    P = Fatorial(n);
    printf("\nArranjo: A(%li,%li)= %li\n\n",n,p,A);
    printf("\nCombinacao: C(%li,%li) = %li\n\n",n,p,C);
    printf("\nPermutacao: P(%li) = %li\n\n",n,P);
    printf("\n\nNovo calculo (S)/(N): ");scanf("%s",&op);
	system("cls");
	  }while(op == 'S' || op == 's');    
    printf("Copyright © - Gabriel Silva - 2020\n\n");
    system("Pause");
}

