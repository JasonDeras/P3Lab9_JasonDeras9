#include<iostream>
#include<string>
#include "Pieza.cpp"

#ifndef CABALLO_CPP
#define CABALLO_CPP

using namespace std;

class Caballo:public Pieza{
		
	protected:
		
	public:
		
		Caballo():Pieza("Caballo"){
		}//Fin del constructor simple

		bool Validar_Movimiento(int x, int y, int x1, int y2){
			return false;
		}

		~Caballo(){
			
		}//Destructor
};

#endif