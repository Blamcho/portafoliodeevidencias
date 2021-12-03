// arreglos de juegos de mesa.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Abraham Torres zamora
//preactica 8

#include <string>
#include <iostream>
#pragma warning(disable:4996 )
using namespace std;

int main()

{
    string titulo[10];
    int fecha[10];
    string Autor[10];    // en esta parte se declaran las variables utilizando arregos de una sola dimesion y se les asigna un dato
    
    cout << "ingresa titulo, fecha y el autor de cada juego" << endl;
    for (int i = 0; i < 5; i++)  // en esta parte se solicitan los datos a ingrresar  utilizando el for para que solicite ingresar los datos de 5 juegos
                                                                
    {
        cout << "\n juego" << i + 1 << ":\n";  // en esta parte solicita el titulo 
        cout << "titulo: ";        
        getline(cin, titulo[i]); //se utiliza la funcion getline para poder ingresar nombres con saltos de linea 





        cout << "fecha de publicacion" << endl;  // en esta parte solicita la fecha con la funcion ignore para que al ingresar la fecha no salte el dato del autor
        cin>> fecha[i];
        cin.ignore();
        
        



        cout << "Autor: " << endl ; // en esta parte se solicitan el nombre del autor
        getline(cin, Autor[i]); // en esta parte se utiliza el getline para poder ingresar nombres con saltos de linea 

    }
    

    for (int i = 0; i < 5; i++) // con este for se imprimen los datos ingrsados de los 5 juegos
    {
        cout << "el titulo es: " << titulo[i] << endl;
        cout << "la fecha  es: " << fecha[i] << endl;
        cout << "el el autor  es: " << Autor[i] << endl;
    }
    
    
}
