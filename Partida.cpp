#include<iostream> 
#include<string> 
#include<vector>
#include<bits/stdc++.h>

#ifndef PARTIDA_CPP
#define PARTIDA_CPP
using namespace std;

class Partida{

  private:
    
    string nombre;
    vector<string>movimientos;                        
  
  public:

    Partida(){

    }
             
    Partida(string nombre){
      this->nombre=nombre;                  
    }
    
    void setNombre(string nombre){
      this->nombre=nombre;  
    }

    string getNombre(){
      return nombre;
    }

    void setMovimientos(vector<string>movimientos){
      this->movimientos=movimientos;
    }
             
    void setMovimiento(string movimiento){
      this->movimientos.push_back(movimiento);
    }
             
    vector<string> getMovimientos(){
      return this->movimientos;
    }
       
    void print(){

      cout<<"La partida" 
      << "Nombre:"<<nombre<<endl;
      cout<<"Movimientos"<<endl;
      for(int i=0;i<movimientos.size();i++){
        cout<<movimientos.at(i);
      }
    }
       
    ~Partida(){

    }             
};
#endif