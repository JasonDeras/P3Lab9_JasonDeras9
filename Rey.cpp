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

		~Rey(){
			
		}//Destructor
};

#endif