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
		
		bool Validar_Movimiento(int x, int y, int x1, int y2){
			return false;
		}

		~Peon(){
			
		}//Destructor
};

#endif