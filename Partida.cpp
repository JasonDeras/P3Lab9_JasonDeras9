#include<iostream> 
#include<string> 
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <bits/stdc++.h>


#ifndef PARTIDA_CPP
#define PARTIDA_CPP
using namespace std;

class Partida{

  private:
    
    string nombre;
    vector<string>movimientos;                        
    string pieza;

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
    
    string getPieza(){
      return pieza;
    }

    void setPieza(string pieza){
      this->pieza=pieza;
    }

    void GuardarPartida(){

      ofstream Escribir;
      Escribir.open("./bitacoraPartidas.txt",std::ios::app);
      Escribir<<nombre<<";"
      <<pieza<<";";
      for (int i = 0; i < movimientos.size(); ++i){
          Escribir<<movimientos[i]<<"/";
      }
      Escribir<<";"<<endl;
      Escribir.close();

    }

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

    void leer(){
      string aux="";
      fstream Leer;
      string linea;
      movimientos.clear();                 
      Leer.open("./bitacoraPartidas.txt"); 
      
      if (Leer.is_open()){                 
        
        while(! Leer.eof()){
          getline(Leer,linea);             
          if(linea.size()>0){//Atoi es de string a id o de cualquier otro numero  
            nombre=token(linea,";", 1);
            pieza=token(linea,";", 2);
            movimientos.push_back(token(linea,";", 3));
          }
        }
      }     
      Leer.close();
    }

    void print(){

      cout<< "Nombre: "<<nombre<<endl
      <<" Pieza: "<<pieza<<endl;
      cout<<"Movimientos"<<endl;

      for(int i=0;i<movimientos.size();i++){
        cout<<movimientos.at(i);
      }
    }
       
    ~Partida(){

    }             
};
#endif