#include<iostream>
#include<string>
#include "Pieza.cpp"

#ifndef PEON_CPP
#define PEON_CPP

using namespace std;

class Peon:public Pieza{
		
	protected:
		
	public:
		
		Peon():Pieza("Peon"){
		}//Fin del constructor simple
		
		bool Validar_Movimiento(int x, int y){
			bool valido = false;
    		if( (*this).getX()-1 == x && (*this).getY() == y ) valido = true;
    		if( (*this).getX()+1 == x && (*this).getY() == y ) valido = true;
		}

		~Peon(){
			
		}//Destructor
};

#endif