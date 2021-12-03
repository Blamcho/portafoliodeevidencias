// 2021_10_Clase_practica_9_Arreglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Abraham Torres
// Arreglos dinamicos

//10_21_2021/
//Matrices practica 8//
// Abraham Torres//


#include <iostream>
#include <stdio.h>
#include <ctime>

using namespace std;


int main()
{
	int matriz1[3][3];
	int matriz2[5][5];
	int matriz3[10][10];
	srand(time(NULL));

	for (int i = 0; i < 3; i++) {//Controla las filas
		for (int j = 0; j < 3; j++) {//controla las columnas
			matriz1[i][j] = rand() % 10 + 1;//guarda un numero aleatorio del 1 al 10
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			matriz2[i][j] = rand() % 10 + 1;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			matriz3[i][j] = rand() % 10 + 1;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "|" << matriz1[i][j]<<"|";//muestra la matriz con formato |n|
		}
		cout << endl;//Salta a la siguiente linea de la matriz
	}
	cout << "-------------------------------------------------------\n";
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "|" << matriz2[i][j] << "|";//muestra la matriz con formato |n|
		}
		cout << endl;//Salta a la siguiente linea de la matriz
	}
	cout << "-------------------------------------------------------\n";
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <10; j++) {
			cout << "|" << matriz3[i][j] << "|";//muestra la matriz con formato |n|
		}
		cout << endl;//Salta a la siguiente linea de la matriz
	}
}


