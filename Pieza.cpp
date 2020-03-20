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
		}

		virtual bool validar_Movimiento(string, string)=0;
};

#endif