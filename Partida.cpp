#include<iostream> 
#include<string> 
#include "Pieza.cpp"
#include<vector>
#include<bits/stdc++.h>

#ifndef PARTIDA_CPP
#define PARTIDA_CPP
using namespace std;

class Partida{

  private:
    
    string nombre;
    vector<string>movimientos;                        
    Pieza * pieza;

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
    
    Pieza * getPieza(){
      return pieza;
    }

    void setPieza(Pieza *pieza){
      this->pieza=pieza;
    }

    void GuardarPartida(){

      ofstream Escribir;
      Escribir.open("./bitacoraPartidas.txt",std::ios::app);
      Escribir<<nombre<<";"
      <<pieza<<";";
      for (int i = 0; i < movimientos.size(); ++i){
          Escribir<<movimientos[i];
          if(i<movimientos.size()-1){
            Escribir<<";";
          }
      }
      Escribir.close();

    }

    void print(){

      cout<<"La partida"<<endl 
      << "Nombre:"<<nombre
      <<" Pieza: "<<pieza->getNombre()<<endl;
      cout<<"Movimientos"<<endl;
      for(int i=0;i<movimientos.size();i++){
        cout<<movimientos.at(i);
      }
    }
       
    ~Partida(){

    }             
};
#endif