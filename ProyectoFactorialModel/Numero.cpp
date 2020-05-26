#include "Numero.h"

using namespace ProyectoFactorialModel;

Numero::Numero(int dato, long factorial) {
	this->dato = dato;
	this->factorial = factorial;
}
Numero::Numero(){
	this->dato = 0;
	this->factorial = 0;
}
long Numero::getFactorial() {
	return this->factorial;
}