/*

Autor: Thales Costa
Disciplina: ED2
Professor: Irineu
Agosto/2017

*/

#include "biblioteca.h"

int main() {
	setlocale(LC_ALL, "");

	bool sair = false;
	int menu, element;
	
	while (!sair){
		
		printf("1 - push\n");
		printf("2 - pop\n");
		printf("3 - size\n");
		printf("4 - isEmpty\n");
		printf("5 - top\n");
		printf("6 - sair\n\n");
		
		scanf("%d", &menu);
		
		switch(menu){
			case 1:		//push
				printf("\n\nElemento a ser inserido: ");
				scanf("%d", &element);
				Push(element);
				
				system("cls");
				
			break;
			case 2:		//pop
				if(!isEmpty()){
					printf("\n\nO elemento \"%d\" foi retirado\n\n", Pop());
					
				}else{
					printf("\n\nERRO - A pilha está vazia.\n\n");
				}
				
				system("pause");
				system("cls");
				
			break;
			case 3:		//size
				printf("\n\nTamanho da pilha: %d\n\n", Size());
				
				system("pause");
				system("cls");
				
			break;
			case 4:		//isEmpty
				if(isEmpty()){		//retorna 'true' caso a pilha esteja vazia, 'false' caso contrário
					printf("\n\nA pilha está vazia.\n\n");
				}else{
					printf("\n\nA pilha não está vazia.\n\n");
				}
				
				system("pause");
				system("cls");
			
			break;
			case 5:		//top
				if(!isEmpty()){		//chama a função top caso a pilha não esteja vazia
					printf("\n\nElemento no topo da pilha: %d\n\n", Top());
				}else{
					printf("\n\nERRO - A pilha está vazia.\n\n");
				}
				
				system("pause");
				system("cls");
				
			break;
			case 6:		//sair
				sair = true;
				printf("\nObrigado!\n");
				
			break;
			
		}
		
	}
	
	return 0;
}
