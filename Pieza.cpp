#include<string>
#ifndef PIEZA_CPP
#define PIEZA_CPP

using namespace std;

class Pieza{
	
	private:
		
		string nombre;
		
	protected:
		
	public:
		
		Pieza(){
			
		}//Fin del constructor simple
		
		Pieza(string nombre){
			this->nombre=nombre;
		}//Constructor sobrecargado

		string getNombre(){
			return this->nombre;
		}//fin del get nombre

		string toString(){
			return nombre;
		}//fin del to string 

		virtual bool Validar_Movimiento(int x, int y, Pieza[][] tablero)=0;
};

#endif