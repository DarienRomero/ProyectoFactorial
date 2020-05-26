#pragma once

namespace ProyectoFactorialModel {

	public ref class Numero {
		private:
			int dato;
			long factorial;
		public:
			Numero();
			Numero(int dato, long factorial);
			long getFactorial();

	};
}


