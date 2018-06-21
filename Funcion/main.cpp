#include <iostream>
#include "string.h"
#include <math.h> //esta funcion es necesaria para que lea elcomando pow en la funcion


using namespace std;

	int funcion (int ,int  , int ); //esta funcion recibe como parametros la cantidad de bits que deben estar en 1
	                                //la cantidad de espacios que se deben mover para que queden en el principio
	                                //y el numero que se desea comparar segun para sacar el resultado 
	int desenmask;// es la variable que se usa para que entren los casos del switch

int main(int argc, char** argv) {
	
	int desenmask= funcion (2,4,67);
	int desenmask2= funcion (2,4,4115);
	int desenmask3= funcion (2,4,544);
	int desenmask4= funcion (2,4,2096);
	
	switch(desenmask){
	
		case 0:{
			cout<<"Soltero"<<endl;
		}break;
		case 16:{
			cout<<"Casado"<<endl;
		}break;
		case 32:{
			cout<<"Divorciado"<<endl;
		}break;
		case 48:{
			cout<<"Viudo"<<endl;
		}break;
		
	}
	
	switch(desenmask2){
	
		case 0:{
			cout<<"Soltero"<<endl;
		}break;
		case 16:{
			cout<<"Casado"<<endl;
		}break;
		case 32:{
			cout<<"Divorciado"<<endl;
		}break;
		case 48:{
			cout<<"Viudo"<<endl;
		}break;
		
	}
	
		switch(desenmask3){
	
		case 0:{
			cout<<"Soltero"<<endl;
		}break;
		case 16:{
			cout<<"Casado"<<endl;
		}break;
		case 32:{
			cout<<"Divorciado"<<endl;
		}break;
		case 48:{
			cout<<"Viudo"<<endl;
		}break;
		
	}
	
		switch(desenmask4){
	
		case 0:{
			cout<<"Soltero"<<endl;
		}break;
		case 16:{
			cout<<"Casado"<<endl;
		}break;
		case 32:{
			cout<<"Divorciado"<<endl;
		}break;
		case 48:{
			cout<<"Viudo"<<endl;
		}break;
		
	}
	
	
	return 0;
}

 int funcion (int cantidad, int ceros, int num ){ 
    	
    	int mascarax = pow(2,cantidad)-1;// aqui se crea la mascara con que se quiere comparar que es 2 elevado
    	                                 // por los encendidos -1
    	int resultado;
    	
    	 num= num >>4;// se mueve para limpiar
    	 resultado=  num&mascarax;
    	 resultado= resultado << ceros;// se mueve para acomodar
    	 
    	 return resultado;
    
    	
	}
