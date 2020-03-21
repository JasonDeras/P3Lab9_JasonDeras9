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

		bool Validar_Movimiento(int x, int y){
			bool valido = false;
    		if( (x == (*this).getX()+2 && ( y == (*this).getY() + 1 || y == (*this).getY() - 1 ) ) ) valido = true;
    		if( (x == (*this).getX()-2 && ( y == (*this).getY() + 1 || y == (*this).getY() - 1 ) ) ) valido = true;
    		if( (y == (*this).getY()+2 && ( x == (*this).getX() + 1 || x == (*this).getX() - 1 ) ) ) valido = true;
    		if( (y == (*this).getY()-2 && ( x == (*this).getX() + 1 || x == (*this).getX() - 1 ) ) ) valido = true;
    		return valido;
		}

		~Caballo(){
			
		}//Destructor
};

#endif