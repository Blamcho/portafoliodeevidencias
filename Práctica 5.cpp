// Práctica 5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//05/10/2021 Abraham Torres las condiciones simples (IF-ELSE)

#include <iostream>
using namespace std;


int main()

{
	string  nombre , apellido, tps ;
	int edad, ed = 18 ;
	float peso, sp = 85.5; 
    float estatura, ma = 1.80;
	cout << "ingrese su nommbre: "<< endl ;
	cin >> nombre;

	cout << "ingrese  su apellido: "<< endl;
	cin >> apellido;

	cout << "ingrese su edad: "<< endl;
	cin >> edad;

	if (edad >= ed)
	{
		cout<< "usted es mayor de edad"<<endl;
	}
	else
	{
		cout << "usted es menor de edad"<<endl;

	}

	cout << "ingrese su peso" <<endl;
	cin >> peso;
	
if (peso >= sp)
	{
		cout<< "usted tiene sobre peso"  <<endl;
	}
	else
	{
		cout <<"su peso esta estable" <<endl;

	}

	cout << "ingrese su estatura" <<endl;
	cin >> estatura ;
	
	if (estatura >= ma)
	{
		cout<< "usted es bastante alto"<<endl;
	}
	else
	{
		cout << "usted es chaparro"<<endl;

	}


	cout << "tipo de sangre " << endl;
	cin >> tps;
	
	cout << "\nNombre" <<nombre <<endl;
    cout << "apellido" <<apellido <<endl;
    cout << "edad" <<edad <<endl;
    cout << "peso" <<peso <<endl;
    cout << "estatura" <<estatura <<endl;
    cout << "tipo de sangre" <<tps <<endl;
	return 0;
}


