#include<typeinfo>
#include "Torre.cpp"
#include "Peon.cpp"
#include "Caballo.cpp"
#include "Rey.cpp"
#include "Reina.cpp"
#include "Alfil.cpp"
#include "Partida.cpp"
#include <vector>

//Variale de las partidas
Partida *par=new Partida();

vector<string>moves;

//Tablero de ajedrez
char tablero[8][8];
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
				string cordenada2;
				string jugar;
				int cont=0;
				int resp=1;
				int corx;
				int cory;

				cout<<"Ingrese la cordenada del rey en el formato[e1,e2]: ";
				cin>>cordenada;

				for (int i = 0; i < cordenada.size(); i++){
					if(cordenada[i]!='1' && cordenada[i] !='2' 
						&& cordenada[i]!='3' && cordenada[i]!='4' 
						&& cordenada[i] !='5'&& cordenada[i]!='6' 
						&& cordenada[i]!='7' && cordenada[i] !='8' 
						&& cordenada[i]!='a' && cordenada[i] !='b' 
						&& cordenada[i]!='c' && cordenada[i]!='d' 
						&& cordenada[i] !='e' && cordenada[i]!='h'){
						resp=2;
					}//Fin del if
				}//fin del for 

				if(resp==1){
					moves.push_back(cordenada);
					corx=(jugar[2], nullptr, 10);
					cory=(jugar[5], nullptr, 10);
				}else{
					cout<<"La cordenada no es valida"<<endl<<endl;
				}

				resp=1;

				cout<<"Ingrese la cordenada de la otra pieza en el formato[e1,e2]: ";
				cin>>cordenada2;
				for (int i = 0; i < cordenada2.size(); i++){
					if(cordenada2[i]!='1' && cordenada2[i] !='2' 
						&& cordenada2[i]!='3' && cordenada2[i]!='4' 
						&& cordenada2[i] !='5'&& cordenada2[i]!='6' 
						&& cordenada2[i]!='7' && cordenada2[i] !='8' 
						&& cordenada2[i]!='a' && cordenada2[i] !='b' 
						&& cordenada2[i]!='c' && cordenada2[i]!='d' 
						&& cordenada2[i] !='e' && cordenada2[i]!='h'){
						resp=2;
					}//Fin del if
				}//fin del for 

				if(resp==1){
					moves.push_back(cordenada2);
					corx=(jugar[2], nullptr, 10);
					cory=(jugar[5], nullptr, 10);
				}else {
					cout<<"Las cordenadas no son validas"<<endl<<endl;
				}
				while(true){
					
					resp=1;
					cout<<"Jugador 1 las cordenadas a jugar en el formato[e1,e2]: ";
					cin>>jugar;
					for (int i = 0; i < jugar.size(); i++){
						if(jugar[i]!='1' && jugar[i] !='2' 
							&& jugar[i]!='3' && jugar[i]!='4' 
							&& jugar[i] !='5'&& jugar[i]!='6' 
							&& jugar[i]!='7' && jugar[i] !='8' 
							&& jugar[i]!='a' && jugar[i] !='b' 
							&& jugar[i]!='c' && jugar[i]!='d' 
							&& jugar[i] !='e' && jugar[i]!='h'){
							resp=2;
						}//Fin del if
					}//fin del for 

					if(resp==1){
						moves.push_back(jugar);
					}else {
						cout<<"Las cordenadas no son validas"<<endl<<endl;
					}

					cont++;

					resp=1;
					cout<<"Jugador 2 las cordenadas a jugar en el formato[e1,e2]: ";
					cin>>jugar;
					for (int i = 0; i < jugar.size(); i++){
						if(jugar[i]!='1' && jugar[i] !='2' 
							&& jugar[i]!='3' && jugar[i]!='4' 
							&& jugar[i] !='5'&& jugar[i]!='6' 
							&& jugar[i]!='7' && jugar[i] !='8' 
							&& jugar[i]!='a' && jugar[i] !='b' 
							&& jugar[i]!='c' && jugar[i]!='d' 
							&& jugar[i] !='e' && jugar[i]!='h'){
							resp=2;
						}//Fin del if
					}//fin del for 

					if(resp==1){
						moves.push_back(jugar);
					}else {
						cout<<"Las cordenadas no son validas"<<endl<<endl;
					}
					int sigue;
					if(cont%2==0){
						cout<<"Desea Seguir jugando[1.-Si,2.-No]: ";
						cin>>sigue;
						
						if(sigue==1){

						}else if(sigue==2){
							par->setMovimientos(moves);
							par->setNombre(nombre);
							par->GuardarPartida();
							break;
						}//fin del if de seguir jugando

					}//fin del if del segundo jugador

				}//fin del while de las jugadas
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