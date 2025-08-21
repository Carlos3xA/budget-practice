#pragma once
#include <iostream>
using namespace std;

class Persona {
private:
	int edad;
	string nombre;
	float peso;

public:
	//Constructor
	Persona(int _edad, string _nombre, float _peso);

	//getters
	int getEdad() {
		return edad;
	}
	string getNombre() {
		return nombre;
	}
	float getPeso() {
		return peso;
	}

	//setters
	void setEdad(int _edad) {
		edad = _edad;
	}
	void setNombre(string _nombre) {
		nombre = _nombre;
	}
	void setpeso(float _peso) {
		peso = _peso;
	}

	//Otros
	void saludar() {
		cout << "Hola, mi nombre es " << nombre << " tengo " << edad << " anios y peso " << peso << endl;
	}
};

Persona::Persona(int _edad, string _nombre, float _peso) {
	edad = _edad;
	nombre = _nombre;
	peso = _peso;
}
