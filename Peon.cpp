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
			return false;
		}

		~Peon(){
			
		}//Destructor
};

#endif