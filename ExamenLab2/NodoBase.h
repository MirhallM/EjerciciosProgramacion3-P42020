#pragma once

enum types
{
	CADENA, ENTERO, CHAR, DECIMAL
};
class NodoBase  //Clase abstracta
{
private:
	types type;
	NodoBase* siguiente;
	NodoBase* anterior;
public:

	virtual void printNodo() = 0;
	NodoBase* getSiguiente()
	{
		return siguiente;
	}
	void setSiguiente(NodoBase* sig)
	{
		siguiente = sig;
	}

	NodoBase* getAnterior()
	{
		return anterior;
	}

	void setAnterior(NodoBase* ant)
	{
		anterior = ant;
	}

	void setType(types type_)
	{
		this->type = type_;
	}

	types getType()
	{
		return type;
	}
};