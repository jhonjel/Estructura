#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#include<string.h>

using namespace std;
int i;

struct nodo
{	
	char nombre[10];
	int codigo;
	nodo *sig;
};

nodo *cab;
nodo *aux;
nodo *aux2;

struct tiempo
{	
int tim;
int tim2;
 int value;
	tiempo	 *sig2;
};

tiempo *cab1;
tiempo *aux3;
tiempo *aux4;

/*struct color{
    int value;
} colores [10];
*/

/*int registrar3(){
    for(int i=0; i<10; i++){
        aux = (nodo*) malloc (sizeof(nodo));    
        aux->value = colores[i].value;          
        if(cab==NULL){
            cab = aux;
            cab->sig = NULL;        
        } else {            
            aux->sig = cab;
            cab = aux;
        }    
    }
}*/
int registro(){
	if(cab==NULL){
	cab = (struct nodo *) malloc (sizeof(struct nodo));
	cout<<"digite codigo: ";
	cin>>cab->codigo;
	cout<<"digite nombre: ";
	cin>>cab->nombre;	
	cab->sig = NULL;		
	}else{

	aux = (struct nodo *) malloc (sizeof(struct nodo));
	cout<<"digite codigo: ";
	cin>>aux->codigo;
	cout<<"digite nombre: ";
	cin>>aux->nombre;
	aux->sig = NULL;
	aux2=cab; 
	while (aux2->sig!=NULL)
	 aux2=aux2->sig;
	aux2->sig = aux;
	aux2 = aux = NULL;
	free(aux);
	free(aux2);
	}
	return 0;
}

int registro2(){
	//i=0;
	if(cab1==NULL){
	cab1 = (struct tiempo *) malloc (sizeof(struct tiempo));

	cout<<"digite tiempo 1: ";
//	cin>>colores[i].value;
	cin>>cab1->tim;
	cout<<"digite tiempo 2: ";
	cin>>cab1->tim2;	
	cab1->sig2 = NULL;	
//	i++;	
	
	}else{
	

	aux3 = (struct tiempo *) malloc (sizeof(struct tiempo));
	cout<<"digite tiempo 1: ";
//	cin>>colores[i].value;
	cin>>aux3->tim;
	cout<<"digite tiempo 2: ";
	cin>>aux3->tim2;
	aux3->sig2 = NULL;
	aux4=cab1; 
	while (aux4->sig2!=NULL)
	 aux4=aux4->sig2;
	aux4->sig2 = aux3;
	aux4 = aux3 = NULL;
	free(aux3);
	free(aux4);
	i++;
	}
		return 0;
}
int ver(){
	i=0;
	int c=0;
	for(aux=cab; aux!=NULL; aux=aux->sig){ 
	     i++;
		cout<<i<<"-"<<"Codigo: "<<aux->codigo<<endl;
			cout<<i<<"-"<<"nombre: "<<aux->nombre<<endl;
			
			}
          for(aux3=cab1; aux3!=NULL; aux3=aux3->sig2){
          	c++;
			cout<<c<<"-"<<"primer Tiempo de vuelta: "<<aux3->tim<<endl;

			cout<<c<<"-"<<"Ultimo Tiempo de vuelta: "<<aux3->tim2<<endl;
	

	}


	return 0;
}

/*int mostrar(){
    system("cls");
    cout<<"Mostrar Torre --- "<<endl;    
    for(aux3 = cab1; aux3!=NULL; aux3 = aux3->sig2){
        cout<<aux3->value<<"i"<<endl;
         }
}
*/
int menu(){

	int opc;
	do
	{
		
        cout<<""<<endl;
		cout<<"------Registro de atletas------  \n ";
		cout<<"Menu Principal \n";
		cout<<"1. Registro  \n";
		cout<<"2. Mostrar \n";
		cout<<"3. Salir \n";
		cout<<"Escoja la opcion deseada:";
		cin>>opc;
		switch(opc)
		{
			case 1: system("cls");//clrscr();
			        registro();
			        registro2();
					break;

			case 2: 
			        ver();
			     //   mostrar();
					break;
				case 3:exit(0);;
					break;


		}


	}while(opc!=3);
	exit(0);
	return 0;
}

int main(){

   menu();	


}
