#include <iostream>
using namespace std;

void recorrerArregloConPuntero(int* arr, int tamano, int(&array)[5]);

int main() {

	int arr[5] = { 1,2,3,4,5 };
	int tamano = sizeof(arr) / sizeof(int);
	int(&array)[5] = arr;
	recorrerArregloConPuntero(arr,tamano,array);

	cin.get();
	return 0;
}

void recorrerArregloConPuntero(int* arr,int tamano,int (&array)[5]) {
	int* p = nullptr;
	p = arr;
	

	for (int i = 0; i < tamano; i++) {
		cout << "["<<p[0 + i] <<"]"<<
	    "["<<*(p + i) <<"]";
	}
	cout << endl;

	for (int i = 0; i < tamano; i++) {
		array[i] += 10;
	}
	for (int i = 0; i < tamano; i++) {
		cout << "[" << p[0 + i] << "]" <<
			 "[" << *(p + i) << "]";
	}
}