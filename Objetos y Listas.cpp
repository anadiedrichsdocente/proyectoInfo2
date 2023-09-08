#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct nodo { 
	int CoordX;
	int CoordY;
	struct nodo *next;
}INICIO;

class Lista
{
private:	
	struct nodo  *primero; 
	struct nodo  *ultimo;

public:
	
	Lista(){
		primero = &INICIO;
		ultimo = &INICIO;
		primero->CoordX = 0;
		primero->CoordY = 0;		
	}
	
	Lista(int a, int b){
		primero = &INICIO;
		ultimo = &INICIO;
		primero->CoordX = a;
		primero->CoordY = b;		
	}
	
	void insertarDespuesDe () { 
		struct nodo *nuevo = new (struct nodo);//(struct nodo *) malloc (sizeof (struct nodo));
		ultimo->next=nuevo;
		nuevo->next=NULL;
		nuevo->CoordX = ultimo->CoordX + 1;
		nuevo->CoordY = ultimo->CoordY + 1;
		ultimo = nuevo;
	}

	void Mostrar(){
		struct nodo  *temp;
		temp = primero;
		while(temp!=NULL){
			printf("DD:\tX:%d Y:%d\n\n", temp->CoordX, temp->CoordY);
			temp=temp->next; /*notar como recorremos la lista aqui*/
		}
		
	}
	
	
};


int main(void) 
{
	Lista Objeto(20,30);
	
	for (int i = 0; i<= 10; i++) Objeto.insertarDespuesDe();

	Objeto.Mostrar();

	return 0;
}


