#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona(int _edad, string _nombre, float _peso) {
	edad = _edad;
	nombre = _nombre;
	peso = _peso;
}

int main() {
	Persona p1= Persona(22, "Carlos", 56.0);
	p1.saludar();
	cin.get();
	return 0;
}

