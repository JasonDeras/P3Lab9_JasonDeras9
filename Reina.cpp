#include<iostream>
#include<string>
#include "Pieza.cpp"

#ifndef REINA_CPP
#define REINA_CPP

using namespace std;

class Reina:public Pieza{
		
	protected:
		
	public:
		
		Reina():Pieza("Reina"){
		}//Fin del constructor simple

		virtual bool Validar_Movimiento(int x, int y){
			bool valido = false;
    		if( (*this).getY() == y || (*this).getX() == x ) valido = true;
    		if( x - y == (*this).getX()-(*this).getY()) valido = true;
    		return valido;		
    	}

		~Reina(){
			
		}//Destructor
};

#endif