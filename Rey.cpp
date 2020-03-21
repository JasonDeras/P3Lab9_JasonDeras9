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

		virtual bool Validar_Movimiento(int x, int y){
			bool valido = false;
    		if( ( x == (*this).getX()-1 && y == (*this).getY() ) || (x == (*this).getX()+1 && y == (*this).getY() ) ) valido = true;
    		if( ( y == (*this).getY()-1 && x == (*this).getX() ) || (y == (*this).getY()+1 && x == (*this).getX() ) ) valido = true;
    		if( ( x == (*this).getX()+1 && y == (*this).getY()+1)|| (x == (*this).getX()-1 && y == (*this).getY()+1)) valido = true;
    		if( ( x == (*this).getX()-1 && y == (*this).getY()-1)|| (x == (*this).getX()+1 && y == (*this).getY()-1)) valido = true;
    		return valido;
		}

		~Rey(){
			
		}//Destructor
};

#endif