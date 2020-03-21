#include<iostream>
#include<string>
#include "Pieza.cpp"

#ifndef TORRE_CPP
#define TORRE_CPP

using namespace std;

class Torre:public Pieza{
		
	protected:
		
	public:
		
		Torre():Pieza("Torre"){
		}//Fin del constructor simple

		bool Validar_Movimiento(int x, int y){
			bool valido = false;
    		if( (*this).getY() == y || (*this).getX() == x ) valido = true;
    		return valido;
		}

		~Torre(){
			
		}//Destructor
};

#endif