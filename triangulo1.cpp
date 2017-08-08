/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   triangulo1.cpp
 * Author: Dell
 * 
 * Created on 7 de agosto de 2017, 21:58
 */

#include "triangulo1.h"
#include<iostream>
using namespace std;
int main()
{
    class figura{ //    Clase figura
    private:
	
	std::string color = "";
public:
    figura( string colord){
        
    }
    virtual void setAltura()=0;
    virtual void setBase()=0;
    virtual void setColor()=0;
    virtual double getAltura()=0;
       virtual double getBase()=0; //Métodos abstractos se utiliza el virtual y se iguala a cero solo en la clase padre
          
          virtual double CalcularArea()=0;
          virtual double CalcularPerimetro()=0;
          
	};
        
    class triangulo: public figura{ //Herencia de figura
    private:
        double hipotenusa;
        double sen;
        double csen;
        double tan;
        double perimetro;
        double area;   ///Atributos
        double base;
        double altura;
        
        
        triangulo(string color,double hipotenusaf,double perimetrof,double areaf,double basef,double alturaf):figura(color)
        {  //Constructor mandandando a llamar a color de clase padre
       hipotenusa=hipotenusaf;
       sen =sin(altura / hipotenusa);
       csen=cos(base/hipotenusa);
       tan=tanf;tanf;
       perimetro=perimetrof;
       area=areaf; 
       base=basef;
       altura=alturaf;
       
        }
         triangulo1(string color,double hipotenusaf,double basef,double alturaf):figura(color)
        { //    Constructor sin area ni perimetro
       hipotenusa=hipotenusaf;
       sen =sin(altura / hipotenusa);
       csen=cos(base/hipotenusa);
       tan=tanf;tanf;
       base=basef;
       altura=alturaf;
       
        }
         virtual void setAltura(double alturad){  //Setters
             altura=alturad;  
             
         }
        virtual  void setBase(double based){
            base=based;
         }
         
         
    virtual void setColor(figura(color)){
        color=color;
    }
     virtual double getAltura(){
       return altura;  //Getters
     }
      virtual double getBase(){
        return base;
      }
         double getHipoptenusa()
     {
	return hipotenusa;
     }
       double getSeno()
     {
        return sen;
	}
       double getCoseno()
     {
	return csen;
      }
        double getTangente()
     {
	return tan;
      }
          virtual double CalcularArea(){  //Métodos abstractos
             return (altura*base)/2;}
            
         virtual double CalcularPerimetro(){
             return (hipotenusa+base+altura);
             
              
         }
         
         
    };    
    return 0;
     

}