#include<iostream>
#include<string>
#include "Pieza.cpp"

#ifndef PEON_CPP
#define PEON_CPP

using namespace std;

class Torre:public Pieza{
		
	protected:
		
	public:
		
		Torre():Pieza("Torre"){
		}//Fin del constructor simple

		~Torre(){
			
		}//Destructor
};

#endif