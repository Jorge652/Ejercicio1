#include <iostream>
#include "Arreglo.cpp"
#include "Operaciones.cpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Arreglo arg;
	Operaciones op;
	int* aux = new int[100];
	op.generarNum(arg,aux);
	
	
	
	return 0;
}