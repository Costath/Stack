/*

Autor: Thales Costa
Disciplina: ED2
Professor: Irineu
Agosto/2017

*/

#include "biblioteca.h"

using namespace std;

stack<int> Stack;

void Push(int element){
	
	Stack.push(element);
	
}

int Pop(){
	int retirado;
	
	retirado = Stack.top();
	
	Stack.pop();
	
	return retirado;
}

int Size(){
	
	return Stack.size();
}

bool isEmpty(){

	return Stack.empty();
}

int Top(){
		
	return Stack.top();
}







