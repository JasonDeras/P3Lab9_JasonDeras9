#include<typeinfo>
#include "Torre.cpp"
#include "Peon.cpp"
#include "Caballo.cpp"
#include "Rey.cpp"
#include "Reina.cpp"
#include "Alfil.cpp"
#include "Partida.cpp"

Partida *par=new Partida();

//Tablero de ajedrez
char tablero[8][8]={' '};
using namespace std;

int main(){
		
	int usuario=1;
	int opcion;

	while(usuario==1){
		
		cout<<"Menu"<<endl<<endl;
		cout<<"1. Jugar partida"<<endl;
		cout<<"2. Recrear partida"<<endl;
		cout<<"3. Salir"<<endl;

		cout<<"Ingrese una opcion: ";
		cin>>opcion;

		switch(opcion){

			case 1:{
				
				string nombre;
				int opcion;

				cout<<"Ingrese el nombre de la partida: ";
				cin>>nombre;

				cout<<"Menu de piezas adicionales"<<endl;
				cout<<"1. Torre"<<endl;
				cout<<"2. Peon"<<endl;
				cout<<"3. Caballo"<<endl;
				cout<<"4. Reina"<<endl;
				cout<<"5. Alfil"<<endl;
				cout<<"Ingrese una opcion: ";
				cin>>opcion;

				switch(opcion){

					case 1:{
						Pieza *p=new Torre();
						par->setPieza(p->getNombre());
					break;}

					case 2:{
						Pieza *p=new Peon();
						par->setPieza(p->getNombre());
					break;}

					case 3:{
						Pieza *p=new Caballo();
						par->setPieza(p->getNombre());
					break;}

					case 4:{
						Pieza *p=new Reina();
						par->setPieza(p->getNombre());
					break;}

					case 5:{
						Pieza *p=new Alfil();
						par->setPieza(p->getNombre());
					break;}

					default:{
						cout<<"Opcion no valida"<<endl<<endl;
					break;}

				}//fin de las opciones de las piezas

				string cordenada;
				int cont=0;
				while(cont<3){
					
					cout<<"Ingrese una cordenada: ";
					cin>>cordenada;

					while(cordenada.size()>7 || cordenada.size()<7){
						cout<<"Error esas cordenadas no existen"<<endl;
						cout<<"Ingrese la cordenada: ";
						cin>>cordenada;
					}
					par->setMovimiento(cordenada);
					par->setNombre(nombre);
					cont++;
				}//fin del while de las jugadas
				par->GuardarPartida();
			break;}

			case 2:{
				par->leer();
				par->print();
			break;}

			case 3:{
				exit(1);
			break;}

			default:
				cout<<"Opcion no valida"<<endl<<endl;
			break;
				
		}//fin de las opciones del menu

		cout<<"Volver al menu?[1.-Si/2.-No]: ";
		cin>>usuario;
		cout<<endl<<endl;

	}//Fin del while del usuario

	delete par;
	return 0;

}//Fin del main