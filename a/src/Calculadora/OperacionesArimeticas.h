#ifndef OPERACIONESARIMETICAS_H_
#define OPERACIONESARIMETICAS_H_

#include <cmath>
#include <cstdlib>

class OperacionesArimeticas {
	public:
		OperacionesArimeticas();
		virtual ~OperacionesArimeticas();
		double Sumar(double,double);
		double Restar(double,double);
		double Multiplicar(double,double);
		double Dividir(double,double);
};

#endif /*OPERACIONESARIMETICAS_H_*/
