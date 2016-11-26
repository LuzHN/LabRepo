
#include <iostream>
#include "Racional.h"

using namespace std;

int numerador1 = 0;
int numerador2 = 0;
int denominador1 = 0;
int denominador2 = 0;

int Menu();


int main(){

	int opcion = 0;



	while(opcion != 7){
		opcion = Menu();

		switch(opcion){
			case 1:{

				cout << endl << "Ingrese numerador del primer racional: ";
				cin >> numerador1;

				cout << endl << "Ingrese denominador del primer racional: ";
		
				cin >> denominador1;
				cout << endl;

				cout << endl << "Ingrese numerador del segundo racional: ";
				cin >> numerador2;

				cout << endl << "Ingrese denominador del segundo racional: ";
				cin >> denominador2;

				cout << endl << "Numeros guardados..." << endl;

				break;
			}
			case 2:{ //suma racionales
				if(numerador1 == 0 && numerador2 == 0 && denominador1 == 0 && denominador2 == 0){
					cout << endl << "Tiene que ingresar numeros primero. ";
				} else{
					Racional* rac1 = new Racional(numerador1, denominador1);
					Racional* rac2 = new Racional(numerador2, denominador2);

					Racional* rac3 = *rac1 + *rac2;

					if(rac3->getNumerador() % rac3->getDenominador() == 0){
						cout << endl << "La suma es: " << rac3->getNumerador() / rac3->getDenominador();
						delete rac1; delete rac2; delete rac3;
					} else{
						cout << endl << "La suma es: " << rac3->getNumerador() << " / " << rac3->getDenominador();
						delete rac1; delete rac2; delete rac3;
					}
				}

				break;
			}
			case 3:{ //resta racionales
				if(numerador1 == 0 && numerador2 == 0 && denominador1 == 0 && denominador2 == 0){
					cout << endl << "Tiene que ingresar numeros primero. ";
				} else{
					Racional* rac1 = new Racional(numerador1, denominador1);
					Racional* rac2 = new Racional(numerador2, denominador2);

					Racional* rac3 = *rac1 - *rac2;

					if(rac3->getNumerador() % rac3->getDenominador() == 0){
						cout << endl << "La resta es: " << rac3->getNumerador() / rac3->getDenominador();
						delete rac1; delete rac2; delete rac3;
					} else{
						cout << endl << "La resta es: " << rac3->getNumerador() << " / " << rac3->getDenominador();
						delete rac1; delete rac2; delete rac3;
					}
				}

				break;
			}
			case 4:{ //multiplicacion racionales
				if(numerador1 == 0 && numerador2 == 0 && denominador1 == 0 && denominador2 == 0){
					cout << endl << "Tiene que ingresar numeros primero. ";
				} else{
					Racional* rac1 = new Racional(numerador1, denominador1);
					Racional* rac2 = new Racional(numerador2, denominador2);

					Racional* rac3 = *rac1 * *rac2;

					if(rac3->getNumerador() % rac3->getDenominador() == 0){
						cout << endl << "La multiplicacion resulta en: " << rac3->getNumerador() / rac3->getDenominador();
						delete rac1; delete rac2; delete rac3;
					} else{
						cout << endl << "La multiplicacion resulta en: " << rac3->getNumerador() << " / " << rac3->getDenominador();
						delete rac1; delete rac2; delete rac3;
					}
				}
				break;
			}
			case 5:{ //division racionales
				if(numerador1 == 0 && numerador2 == 0 && denominador1 == 0 && denominador2 == 0){
					cout << endl << "Tiene que ingresar numeros primero. ";
				} else{
					Racional* rac1 = new Racional(numerador1, denominador1);
					Racional* rac2 = new Racional(numerador2, denominador2);

					Racional* rac3 = *rac1 / *rac2;

					if(rac3->getNumerador() % rac3->getDenominador() == 0){
						cout << endl << "La division resulta en: " << rac3->getNumerador() / rac3->getDenominador();
						delete rac1; delete rac2; delete rac3;
					} else{
						cout << endl << "La division resulta en: " << rac3->getNumerador() << " / " << rac3->getDenominador();
						delete rac1; delete rac2; delete rac3;
					}
				}
				break;
			}
			case 6:{ //suma entero y racional 
				
				cout << endl << "Ingrese su numero entero: ";
				int entero = 0;
				cin >> entero;

				cout << endl << "Ahora el numerador del racional: ";
				int numeradorCase6 = 0;
				cin >> numeradorCase6;

				cout << endl << "Ahora el denominador del racional: ";
				int denominadorCase6= 0;
				cin >> denominadorCase6;

				Racional* rac1 = new Racional(entero, 1);
				Racional* rac2 = new Racional(numeradorCase6, denominadorCase6);

				Racional* rac3 = *rac1 + *rac2;

				if(rac3->getNumerador() % rac3->getDenominador() == 0){
						cout << endl << "La suma es: " << rac3->getNumerador() / rac3->getDenominador();
						delete rac1; delete rac2; delete rac3;
				} else{
					cout << endl << "La suma es: " << rac3->getNumerador() << " / " << rac3->getDenominador();
					delete rac1; delete rac2; delete rac3;
				}

				break;
			}
			case 7:{
				cout << endl << "Saliendo..." << endl;
				break;
			}
			default:{
				cout << endl << "Valor invalido" << endl;
			}
		}
	}

	return 0;
}

int  Menu(){

	int opcion = 0;


	if(numerador1 != 0 && numerador2 != 0 && denominador1 != 0 && denominador2 != 0){

		cout << endl << endl << "================ Menu ====================" << endl << endl
							<< endl << "Sus dos racionales son los siguentes: " << numerador1 << "/"<< denominador1 <<
							" y " << numerador2 << "/" << denominador2 << endl << endl
							<<"1. Cambiar los numeros." << endl
							<<"2. Sumarlos." << endl
							<<"3. Restarlos." << endl
							<<"4. Multiplicarlos." << endl
							<<"5. Dividirlos." << endl
							<<"6. Suma entero y racional" << endl
							<<"7. Salir" << endl << endl;
		cin >> opcion;
		
		return opcion;

	} else{
		cout << endl << endl << "================ Menu ====================" << endl << endl
							<<"1. Ingresar dos numeros." << endl
							<<"2. Sumarlos." << endl
							<<"3. Restarlos." << endl
							<<"4. Multiplicarlos." << endl
							<<"5. Dividirlos."
							<<"6. Suma entero y racional." << endl
							<<"7. Salir." << endl << endl;
		cin >> opcion;

		return opcion;
	}

	
}