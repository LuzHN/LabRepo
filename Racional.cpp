#include "Racional.h"
using namespace std;


Racional :: Racional(){

}

Racional :: Racional(int num, int denom){
	numerador = num;
	denominador = denom;

}

Racional :: ~Racional(){

}

Racional* Racional :: operator+(const Racional& der){
	
	int denominadorIzq = this->denominador; 
	int numeradorIzq = this->numerador;


	int denominadorDerecha = der.denominador;
	int numeradorDerecha = der.numerador;

	int denominadorIzqTEMP = denominadorIzq;	

	denominadorIzq = denominadorIzq * denominadorDerecha;

	numeradorIzq = numeradorIzq * denominadorDerecha;


	denominadorDerecha = denominadorDerecha * denominadorIzqTEMP;

	numeradorDerecha = numeradorDerecha * denominadorIzqTEMP;

	
	int numeradorResult = numeradorIzq + numeradorDerecha;
	int denominadorResult = denominadorDerecha;

	Racional* result = new Racional(numeradorResult, denominadorResult);
	return result;

}

Racional* Racional :: operator-(const Racional& der){
	
	int denominadorIzq = this->denominador; 
	int numeradorIzq = this->numerador;


	int denominadorDerecha = der.denominador;
	int numeradorDerecha = der.numerador;

	int denominadorIzqTEMP = denominadorIzq;	

	denominadorIzq = denominadorIzq * denominadorDerecha;

	numeradorIzq = numeradorIzq * denominadorDerecha;


	denominadorDerecha = denominadorDerecha * denominadorIzqTEMP;

	numeradorDerecha = numeradorDerecha * denominadorIzqTEMP;

	
	int numeradorResult = numeradorIzq - numeradorDerecha;
	int denominadorResult = denominadorDerecha;

	Racional* result = new Racional(numeradorResult, denominadorResult);
	return result;

}

Racional* Racional :: operator*(const Racional& der){
	
	int denominadorIzq = this->denominador; 
	int numeradorIzq = this->numerador;


	int denominadorDerecha = der.denominador;
	int numeradorDerecha = der.numerador;	

	int numeradorResult = numeradorIzq * numeradorDerecha;
	int denominadorResult = denominadorDerecha * denominadorIzq;

	Racional* result = new Racional(numeradorResult, denominadorResult);
	return result;

}

Racional* Racional :: operator/(const Racional& der){
	
	int denominadorIzq = this->denominador; 
	int numeradorIzq = this->numerador;


	int denominadorDerecha = der.denominador;
	int numeradorDerecha = der.numerador;	

	int numeradorResult = numeradorIzq * denominadorDerecha;
	int denominadorResult = denominadorIzq * numeradorDerecha;

	Racional* result = new Racional(numeradorResult, denominadorResult);
	return result;

}

int Racional :: getNumerador(){
	return numerador;
}

void Racional :: setNumerador(int x){
	numerador = x;
}

int Racional :: getDenominador(){
	return denominador;
}

void Racional :: setDenominador(int x){
	denominador = x;
}

