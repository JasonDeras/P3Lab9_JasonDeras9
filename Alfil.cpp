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

		bool Validar_Movimiento(int x, int y){
			bool valido = false;
			
    		if( x - y == (*this).getX()-(*this).getY()){ 
    			valido = true;
    		}
    		return valido;
		}

		~Alfil(){
			
		}//Destructor
};

#endif