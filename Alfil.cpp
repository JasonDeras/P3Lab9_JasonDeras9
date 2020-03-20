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

		~Alfil(){
			
		}//Destructor
};

#endif