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

		~Caballo(){
			
		}//Destructor
};

#endif