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

		bool Validar_Movimiento(int x, int y, int x1, int y2){
			return false;
		}

		~Torre(){
			
		}//Destructor
};

#endif