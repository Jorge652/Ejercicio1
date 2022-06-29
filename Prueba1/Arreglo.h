#include <iostream>
class Arreglo{
	private:
    	int* _datos = nullptr;
    	int _tamano = 0;
    public:
    	int get_tamano();
    	void set_tamano(int);
    	void agregar(int );
   	    void imprimir();
   	    int* get_datos();
    	void set_datos(int*);
};