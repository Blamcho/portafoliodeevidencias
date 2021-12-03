// practica_10_BR.cpp : Este1 archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Abraham Torres

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <conio.h> 


using namespace std;

// iniucio del del struct
struct participante {
    
    string nom;
    int mana;
    int hp;
    int agilidad;
    int sabiduria;
    

}jugador[19];


int main()
{
    participante jugador[19];

    //variables auxiliares
    string aux_nom = "";
    string aux_nom_hp = "";
    string aux_nom_agi = "";
    string aux_nom_sabi = "";
    int aux_mana = 0;
    int aux_hp = 0;
    int aux_agi = 0;
    int aux_sabi = 0;
    string nombre[] = { " Karen " , "Alejandro " , " Angel" , "Dylan" , "Ricardo" , "oscar", "Caarlos", "Fernando" , "Kuvassi" , "Uriel" , "Jair" , "Isrrael" , "Ricardo", "Chilo" , "JP"  , "Eric", "Tapia", "Abraham", "kevin" };
    srand(time(NULL));
 // para asignar valorres randoom
    for (int i = 0; i <19 ; i++)
    {
        jugador[i].nom = nombre[i];

        jugador[i].mana= rand() % 10;

        jugador[i].hp =  rand() % 15;

        jugador[i].agilidad = rand() % 10;

        jugador[i].sabiduria  = rand() % 15;




    }
// lista
    cout << "veamos la lista de participantes y sus caraacteristicas" << endl;
    for (int i = 0; i < 19; i++)
    {

        cout << " El nombre del jugador " << i << " es " << jugador[i].nom << endl;
        cout << " La mana del jugador " << i << " es " << jugador[i].mana << endl;
        cout << " El hp del jugador " << i << " es " << jugador[i].hp << endl;
        cout << " La agilidad del jugador " << i << " es " << jugador[i].agilidad << endl;
        cout << " La sabiduria del jugador " << i << " es " << jugador[i].sabiduria << endl << endl << endl;
    }
 // conparar
    for (int  i = 0; i < 19; i++)
    {
        if (jugador[i].mana > aux_mana) {

            aux_nom = jugador[i].nom;

            aux_mana = jugador[i].mana;

        }

        if (jugador[i].hp > aux_hp) {

            aux_nom_hp = jugador[i].nom;

            aux_hp = jugador[i].hp;

        }

        if (jugador[i].agilidad > aux_agi) {

            aux_nom_agi = jugador[i].nom;

            aux_agi = jugador[i].agilidad;

        }

        if (jugador[i].sabiduria> aux_sabi) {

            aux_nom_sabi = jugador[i].nom;

            aux_sabi = jugador[i].sabiduria;

        }

    }
// nombra jugadores
    cout << "el jugador que tiene mas mana es " << aux_nom << endl;
    cout << "el jugador que tiene mas hp es " << aux_nom_hp << endl;
    cout << "el jugador que tiene mas agilidad es " << aux_nom_agi << endl;
    cout << "el jugador que tiene mas sabiduria es " << aux_nom_sabi << endl;


    /*if (jugador[0].mana < jugador[1].mana)
    {
        cout << "Alejandro tiene mas mana " << endl;
    }

    if (jugador[2].mana < jugador[3].mana)
    {
        cout << "Dylan tiene mas mana" << endl;

    }

    if (jugador[4].mana < jugador[5].mana)
    {
        cout << "oscar tiene mas mana" << endl;

    }*/
}


