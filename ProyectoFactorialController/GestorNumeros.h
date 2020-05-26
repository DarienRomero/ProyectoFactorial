#pragma once

namespace ProyectoFactorialController {
	
	using namespace ProyectoFactorialModel;
	
	public ref class GestorNumeros{
		private:
			Numero^ objetoNumero;
		public:
			GestorNumeros();
			Numero^ calcularFactorial(int dato);
	};
}