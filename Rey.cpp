#include<iostream>
#include<string>
#include "Pieza.cpp"

#ifndef REY_CPP
#define REY_CPP

using namespace std;

class Rey:public Pieza{
		
	protected:
		
	public:
		
		Rey():Pieza("Rey"){
		}//Fin del constructor simple

		bool Validar_Movimiento(int x, int y, int x1, int y2){
			return false;
		}

		~Rey(){
			
		}//Destructor
};

#endif