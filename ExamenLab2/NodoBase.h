#pragma once

class NodoBase  //Clase abstracta
{
private:
	NodoBase* siguiente;
public:
	virtual ~NodoBase();
	virtual void printNodo() = 0;
	NodoBase* getSiguiente()
	{
		return siguiente;
	}
	void setSiguiente(NodoBase* sig)
	{
		siguiente = sig;
	}
};