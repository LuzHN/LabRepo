#include <iostream>

#ifndef Racional_h
#define Racional_h

class Racional{

	protected:
		int numerador;
		int denominador;

	public:
		Racional();
		Racional(int, int);
		virtual ~Racional();

		int getNumerador();
		void setNumerador(int);

		int getDenominador();
		void setDenominador(int);
		Racional* operator+(const Racional&);
		Racional* operator-(const Racional&);
		Racional* operator*(const Racional&);
		Racional* operator/(const Racional&);

};

#endif