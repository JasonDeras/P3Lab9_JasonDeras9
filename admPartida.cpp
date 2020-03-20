#include<iostream> 
#include<string> 
#include <fstream>
#include <stdlib.h>
#include "Partida.cpp"
#include <vector>
#include <bits/stdc++.h>

#ifndef ADMPARTIDA_CPP
#define ADMPARTIDA_CPP
using namespace std;

class admPartida{
	
  private:
              
    string ruta;//Memoria rom
    vector<Partida*> partidas;//Memoria ram                           
  
  public:
             
    admPartida(string ruta){
      this->ruta=ruta;
		} 
			           
    string getRuta(){
      return ruta;
		} 
            
    void addPartida(Partida* partida){
      partidas.push_back(partida);
		}
            
    vector<Partida*> getPersonas(){
      return this->partidas;
    }            
            
    ~admPartida(){}
            
    string token(string cadena, string divisor,int pos){
               
      if(cadena.size()>0){
        
        char oracion[cadena.size()]; 
        
        for (int i=0;i<=cadena.size();i++){
          oracion[i]=cadena[i];
        }                    
                 
        char *ptrtoken; 
        int num=1;
        const char* d=divisor.c_str();
        ptrtoken = strtok(oracion , d);             
                 
        while(ptrtoken){

          if(num==pos){
            return ptrtoken;
          } 

          ptrtoken = strtok(NULL, d);
          num++;
        }
        
        return "";
        }else{
          return "";
        }
    }
            
   void escribir(){
            Partida *p=new Partida();
              ofstream Escribir;
              Escribir.open(ruta.c_str());  
              for(int i=0; i<partidas.size();i++){
                     Escribir<<partidas.at(i)->getNombre()<<";"
                             <<partidas.at(i)->getPieza()<<";";
                             for(int i=0;i<p->getMovimientos().size();i++){
                              Escribir<<*p->getMovimientos().at(i)<<","
               }//For de impresion de los hobbies
               Escribir<<";"<<endl;
        }             
              Escribir.close(); 
          }
    void leer(){
      
      fstream Leer;
      string linea;
      partidas.clear();                 
      
      Leer.open(ruta.c_str()); 
           		
      if (Leer.is_open()){                 
                    
        while(! Leer.eof()){
                             
          getline(Leer,linea); 
                             
          if(linea.size()>0){//Atoi es de string a id o de cualquier otro numero  
            cout<<linea;                        
          }
        }
      }     
      Leer.close();
    }

    void print(){

      cout<<"Partidas:"<<endl;
                
      for(int i=0; i<partidas.size();i++){
				cout<<"\t"<<"-";				    	
				partidas.at(i)->print();
      }
    
    }

};
#endif