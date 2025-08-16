#include <iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

void vectorMultiplos() {
	int vectorMulti[5];
	int n;
	cout << "Ingrese el numero MULTIPLO: "; cin >> n;
	for (int i = 1; i <= 5; i++) {
		vectorMulti[i-1] = n * i;
	 }
	for (int i = 0; i < 5; i++) {
		cout << "["<<vectorMulti[i]<<"]";
	}
}

void Nombres() {
	string nombres[5];

	for (int i = 0; i < 5; i++) {
		cout << "Ingrese el nombre numero " << i + 1 << ": "; cin >> nombres[i];
	}
	for (int i = 0; i < 5; i++) {
		if (i < 3) {
			cout << nombres[i] << ",";
		}
		else if (i < 4) cout << nombres[i] << " y ";
		else cout << nombres[i] << ".";
	
	}
}

void edad() {
	string nombre;
	int edad;
	cout << "\tIngrese su nombre: "; cin >> nombre;
	cout << "\tIngrese su edad: "; cin>> edad;
	for (int i = 0; i < 5; i++) {
		cout << endl;
	}
	cout << "Su nombre es " << edad << " y tiene " << nombre<<endl;
}

void holaMundostring() {
	string palabra = " ";
	cout << "ingrese una frase: ";
	getline(cin>>ws, palabra);
	cout << "\nla frase que usted ha escrito es: ";
	for (int i = 0; i < palabra.length(); i++) {
		cout << palabra[i];
	}
}

void relojdeArena() {
    for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i == 1||i==10) cout << "*";
			else if (i == j||i+j==11)cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
}
void tablasdemultiplicar() {
	for (int i = 1; i <= 10; i++) {
		cout << "\ttabla del " << i << ":"<<endl;
		for (int j = 1; j <= 10; j++) {
			cout << i << " * " << j << " = " << j * i << endl;
		}
		cout<<endl;
	 }
 }

void gamepelea() {
srand(time(NULL));
	int vida=0,daño = 0;

    int opc=rand() % 3 + 1;
	cout << "veamos qwue rival te toca: " << endl;
	switch (opc) {
	case 1:
	cout << "Aparece un dragon"<<endl;
	vida = 100;
	break;
	case 2:
	cout<<"Aparece un perro"<<endl;
	vida = 50;
	break;
	case 3:
	cout << "Aparece una mosca" << endl;
	vida = 15;
	break;
	 }
	cin.get();
	int opc2 = rand() % 4 + 1;
	cout << "Veamos que arma te dan: " << endl;
	switch (opc2) {
	case 1:
		cout << "Tu arma es una boma nuclear" << endl;
		daño = 1000;
		break;
	case 2:
		cout << "Tu arma es un machete" << endl;
		daño = 60;
		break;
	case 3:
		cout << "Tu arma es una raqueta" << endl;
		daño=20;
		break;
	case 4:
		cout << "No tienes arma" << endl;
		daño = 0;

	}

	if (vida - daño <= 0)cout << "GANASTE!!!";
	else cout<<"PERDISTE :(";
}

string holaPepe(string nombre= "Pepe") {
	string frase = "Hola ";
cout << holaPepe("Juan");//esto va en el main()
	return frase + nombre;
	

}


int calcularTamanoDeVector() {
	int arreglo[] = {1,2,3,4,5,6,7};
	return sizeof(arreglo) / sizeof(int);
}

void llenarVector(int numeros[], int size){
	for (int i = 0; i < size; i++) {
		numeros[i] = i + 1;
	}
	for (int i = 0; i < size; i++) {
		cout <<"[" <<numeros[i]<<"]";
	}

	/* esto va en el main()
	int size=0;
	int numeros[5];
	size = sizeof(numeros) / sizeof(int);
	llenarVector(numeros, size);
    */
	}

void ordenamientoBurbuja(int arreglo[], int tamano) {

	int aux;
	for (int i = 0; i < tamano - 1; i++) {

		for (int j = 0; j < tamano - 1-i; j++) {
			if (arreglo[j] > arreglo[j + 1]) {
				aux = arreglo[j];
				arreglo[j] = arreglo[j + 1];
				arreglo[j + 1] = aux;

			}
		}
	}
	
	for (int i = 0; i < tamano ; i++) {
		cout << "[" << arreglo[i] << "]";
	}

	/* Esto va en el main();
	int arreglo[] = { 1,3,6,8,4,5,6,3,5 };
	int tamano = sizeof(arreglo) / sizeof(int);
	ordenamientoBurbuja(arreglo, tamano);
	*/
}

void rellenarArregloDeCeros(int arreglo[], int tamano) {
	fill(arreglo, arreglo + tamano, 0);

	/*esto va en el main()
	const int tamano = 20;
	int array[tamano];
	rellenarArregloDeCeros(array, tamano);
	for (int i = 0; i < tamano; i++) {
		cout<<array[i];
	}
	*/
}

int preguntados() {
	string preguntas[] = { "Cuanto es 1+2?","Cuanto de 5+4?","Cuanto es 6+12?","Cuanto es 9+11?" };
	string respuestas[4][4] = { {"A.20","B.9","C.3","D.18"},
							 {"A.20","B.9","C.3","D.18"},
							 {"A.20","B.9","C.3","D.18"},
							 {"A.20","B.9","C.3","D.18"} };
	char respuestasCorrectas[4] = { 'c','b','d','a' };
	char respuestasCorrectas2[4] = { 'C','B','D','A' };
	char respuesta;
	int contador = 0;

	cout << "----------------------------" << endl <<
		"\tPREGUNTADOS" << endl
		 << "----------------------------" << endl;

	for (int i = 0; i < 4; i++) {
		cout << "Pregunta #" << i + 1 << ": " << endl;
		cout << preguntas[i]<<endl;
		for (int j = 0; j < 4; j++) {
			cout<<respuestas[i][j]<<endl;
		}
		cout << "Ingrese su respuesta: "; cin >> respuesta;
		if (respuesta == respuestasCorrectas[i] || respuesta == respuestasCorrectas2[i]) {
			cout << "Correcto" << endl << "----------------------------" << endl;
			contador++;
		}
		else cout << "Incorrecto" << endl<< "----------------------------" << endl;
	}
	return contador;
}

int main() {
	cout << preguntados();


	cin.get();
	return 0;
}