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

		~Torre(){
			
		}//Destructor
};

#endif