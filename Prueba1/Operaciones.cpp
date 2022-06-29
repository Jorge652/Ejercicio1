#include "Operaciones.h"
void Operaciones::generarNum(Arreglo arg,int *aux)
{
	for(int i=0;i<100;i++)
	{
		*(aux+i)=1+rand()%(10000000-1);
		arg.agregar(*(aux+i));
	}
	arg.imprimir();
}