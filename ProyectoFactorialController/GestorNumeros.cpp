#include "GestorNumeros.h"

using namespace ProyectoFactorialController;

GestorNumeros::GestorNumeros() {
	this->objetoNumero = gcnew Numero();
}
Numero^ GestorNumeros::calcularFactorial(int dato) {
	int i = 0;
	long factorial = 1;
	for (i = 1; i <= dato;i++) {
		factorial *= i;
	}
	Numero^ objetoNumero = gcnew Numero(dato, factorial);
	this->objetoNumero = objetoNumero;
	return this->objetoNumero;
}