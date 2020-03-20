#include<iostream>
#include<string>
#include "Pieza.cpp"

#ifndef ALFIL_CPP
#define ALFIL_CPPAlfil

using namespace std;

class Alfil:public Pieza{
		
	protected:
		
	public:
		
		Alfil():Pieza("Alfil"){
		}//Fin del constructor simple

		bool Validar_Movimiento(int x, int y, int x1, int y2){
			return false;
		}
		
		~Alfil(){
			
		}//Destructor
};

#endif