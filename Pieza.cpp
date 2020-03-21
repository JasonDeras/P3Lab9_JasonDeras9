#include<string>
#include<iostream>

using namespace std;

#ifndef PIEZA_CPP
#define PIEZA_CPP

using namespace std;

class Pieza{
	
	private:
		
		string nombre;
		int x;
		int y;

	protected:
		
	public:
		
		Pieza(){
			
		}//Fin del constructor simple
		
		Pieza(string nombre){
			this->nombre=nombre;
		}//Constructor sobrecargado

		string getNombre(){
			return this->nombre;
		}//fin del get nombre

		string toString(){
			return nombre;
		}//fin del to string 

		void setX( int x ){ 
			this-> x = x; 
		}
        
        void setY( int y ){ 
        	this-> y = y; 
        }

        int getX(){ 
        	return x; 
        }
        
        int getY(){ 
        	return y; 
        }

 		virtual bool validarMovimiento( int x, int y ){
 			cout << "Entro al que no debia" << endl;
 		}
};

#endif