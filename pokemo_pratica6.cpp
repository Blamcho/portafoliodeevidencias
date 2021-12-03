// practica 6 pokemon
// Abraham Torres Zamora 10/07/2021
#include <iostream>
using namespace std;

int main()
{
	bool salir = false;

	while (salir == false)
	{
		int pokemon;

		int Vida1 = 100;
		int Vida2 = 100;

		int Maractus = 7;
		int Charmander = 8;
		int pikachu = 6;
		int ct = 0;

		bool pelear;
		bool combate;

Inicio:
		cout << "Selecciona alguno de los 3 Pokémon: " << endl;
		cout << "1 = Maractus" << endl;
		cout << "2 = Charmander" << endl;
		cout << "3 = pikachu" << endl;
		cin >> pokemon;

		switch (pokemon)
		{
			
		case 1:
			cout << "Seleccionaste a Maractus..." << endl;
			cout << "¡muy bien! estamos listos" << endl;
			cout << "      " << endl;
			cout << " ¿quieres un combate?" << endl;
			cout << "1 = ¡Si!" << endl;
			cout << "0 = huir..." << endl;
			cout << "      " << endl;
			cin >> pelear;

			if (pelear == true)
			{
				
				cout << "vamos a pelearemos contra Charmander..." << endl;
				cout << "      " << endl;
				cout << "¡estas listo!" << endl;
				cout << "En 3..." << endl;
				cout << "   2..." << endl;
				cout << "   1..." << endl;
				cout << "       " << endl;
				cout << "¡pelear!" << endl;
				cout << "       " << endl;
			Ataque:
				
				cout << "¿quieres atacar?" << endl;
				cout << "1 = ¡atacar!" << endl;
				cout << "      " << endl;
				cout << "¿quieres defenderte?" << endl;
				cout << "0 = defenderte..." << endl;
				cout << "      " << endl;
				cin >> combate;
				cout << "      " << endl;

					
					if (combate == true)
					{
						Vida2 = Vida2 - 20;
						cout << "¡bienl! le vajamoos la vida a " << Vida2 << endl;
						cout << "      " << endl;
						cout << "es el turno del rival.." << endl;
						cout << "      " << endl;
Pelea:
							ct = ct + 1;

							if (ct = 1);
							{
								Vida1 = Vida1 - 15;
								cout << "¡chale!  bajo a: " << Vida1 << endl;
								cout << "      " << endl;

								if (Vida1 > 0)
								{
									goto Ataque;
								}

								else
								{
									goto salir;
								}
							}
							break;

							if (ct = 2);
							{
								Vida1 = Vida1 - 13;
								cout << "¡chale! bajo a: " << Vida1 << endl;
								cout << "      " << endl;

								if (Vida1 > 0)
								{
									goto Ataque;
								}

								else
								{
									goto salir;
								}

							}
							break;

							if (ct = 3);
							{
								Vida1 = Vida1 - 12;
								cout << "¡chale! bajo a: " << Vida1 << endl;
								cout << "      " << endl;

								if (Vida1 > 0)
								{
									goto Ataque;
								}

								else
								{
									goto salir;
								}

							}
							break;

							if (ct= 4);
							{
								Vida1 = Vida1 - 15;
								cout << "¡chale! bajo a: " << Vida1 << endl;
								cout << "      " << endl;

								if (Vida1 > 0)
								{
									goto Ataque;
								}

								else
								{
									goto salir;
								}

							}
							break;

							if (ct = 5);
							{
								Vida1 = Vida1 - 12;
								cout << "¡chale! a: " << Vida1 << endl;
								cout << "      " << endl;

								if (Vida1 > 0)
								{
									goto Ataque;
								}

								else
								{
									goto salir;
								}

							}
							break;


									if (Vida2 > 0)
									{
									goto Ataque;
									}

					}

					
					else
					{
						Vida2 = Vida2 - 15;
						cout << "apenas lo soporto " << Vida2 << endl;
						cout << "      " << endl;
						cout << "es e turno del rival.." << endl;
						cout << "      " << endl;
						goto Pelea;

						if (Vida2 > 0)
						{
							goto Ataque;

						}

						else
						{
							goto salir;
						}

					}

			}

			
			else
			{
				goto Inicio;

			}
			break;

			
		case 2:
			cout << "Seleccionaste a Charmander..." << endl;
			cout << "¡estamos listos..." << endl;

			cout << " ¿queress un cobate?" << endl;
			cout << "1 = ¡Si!" << endl;
			cout << "0 = ala proxima." << endl;
			cin >> pelear;

			if (pelear == true)
			{
				
				cout << "vamos a pelear contra pikachu..." << endl;
				cout << "      " << endl;
				cout << "¡estas listo!" << endl;
				cout << "en 3..." << endl;
				cout << "   2..." << endl;
				cout << "   1..." << endl;
				cout << "       " << endl;
				cout << "¡pelear!" << endl;
				cout << "       " << endl;
				
				cout << "¿quieres atacar?" << endl;
				cout << "1 = ¡atacar!" << endl;
				cout << "      " << endl;
				cout << "¿quieres Defenderte?" << endl;
				cout << "0 = defenderte..." << endl;
				cout << "      " << endl;
				cin >> combate;
				cout << "      " << endl;

				
				if (combate == true)
				{
					Vida2 = Vida2 - 20;
					cout << "¡bien! le vajamos la vida a " << Vida2 << endl;
					cout << "      " << endl;
					cout << "es el turno de rival.." << endl;
					cout << "      " << endl;
					ct = ct + 1;

					if (ct = 1);
					{
						Vida2 = Vida2 - 15;
						cout << "¡chale! bajo a: " << Vida1 << endl;
						cout << "      " << endl;

						if (Vida2 > 0)
						{
							goto Ataque;
						}

						else
						{
							goto salir;
						}
					}
					break;

					if (ct = 2);
					{
						Vida1 = Vida1 - 13;
						cout << "¡chale! bajo a: " << Vida2 << endl;
						cout << "      " << endl;

						if (Vida1 > 0)
						{
							goto Ataque;
						}

						else
						{
							goto salir;
						}

					}
					break;

					if (ct = 3);
					{
						Vida1 = Vida1 - 12;
						cout << "¡chale!  bajo a: " << Vida1 << endl;
						cout << "      " << endl;

						if (Vida1 > 0)
						{
							goto Ataque;
						}

						else
						{
							goto salir;
						}

					}
					break;

					if (ct = 4);
					{
						Vida1 = Vida1 - 15;
						cout << "¡chale!  bajo a: " << Vida1 << endl;
						cout << "      " << endl;

						if (Vida1 > 0)
						{
							goto Ataque;
						}

						else
						{
							goto salir;
						}

					}
					break;

					if (ct = 5);
					{
						Vida1 = Vida1 - 12;
						cout << "¡chale! bajo a: " << Vida1 << endl;
						cout << "      " << endl;

						if (Vida1> 0)
						{
							goto Ataque;
						}

						else
						{
							goto salir;
						}

					}
					break;


					if (Vida2 > 0)
					{
						goto Ataque;
					}

				}

				
				else
				{
					Vida2 = Vida2 - 15;
					cout << "Apenas lo soporto " << Vida2 << endl;
					cout << "      " << endl;
					cout << "es el turno del rival..." << endl;
					cout << "      " << endl;
					goto Pelea;

					if (Vida2 > 0)
					{
						goto Ataque;

					}

					else
					{
						goto salir;
					}

				}

			}

			
			else
			{
				goto Inicio;

			}
			break;

			
		case 3:
			cout << "Seleccionamos pikachu..." << endl;
			cout << "¡muy bien! estamos listos..." << endl;

			cout << " ¿quieres hacer un combate?" << endl;
			cout << "1 = ¡Si!" << endl;
			cout << "0 = ala proxima..." << endl;
			cin >> pelear;

			if (pelear == true)
			{
				
				cout << "vamos a pelearemos contra Charmander..." << endl;
				cout << "      " << endl;
				cout << "¡estas listo!" << endl;
				cout << "en 3..." << endl;
				cout << "   2..." << endl;
				cout << "   1..." << endl;
				cout << "       " << endl;
				cout << "¡pelea!" << endl;
				cout << "       " << endl;
				cout << "¿queres atacar?" << endl;
				cout << "1 = ¡atacar!" << endl;
				cout << "      " << endl;
				cout << "¿quieres Defenderte?" << endl;
				cout << "0 = Defenderte..." << endl;
				cout << "      " << endl;
				cin >> combate;
				cout << "      " << endl;

				if (combate == true)
				{
					Vida2= Vida2 - 20;
					cout << "¡bien! le bajamos  la vida a " << Vida2 << endl;
					cout << "      " << endl;
					cout << "es turno del rival..." << endl;
					cout << "      " << endl;
					ct = ct + 1;

					if (ct = 1);
					{
						Vida1 = Vida1 - 15;
						cout << "¡chale!  bajo a: " << Vida1 << endl;
						cout << "      " << endl;

						if (Vida1 > 0)
						{
							goto Ataque;
						}

						else
						{
							goto salir;
						}
					}
					break;

					if (ct = 2);
					{
						Vida1 = Vida1 - 13;
						cout << "¡chale!  bajo a: " << Vida1 << endl;
						cout << "      " << endl;

						if (Vida1 > 0)
						{
							goto Ataque;
						}

						else
						{
							goto salir;
						}

					}
					break;

					if (ct = 3);
					{
						Vida1 = Vida1 - 12;
						cout << "¡chale!  bajo a: " << Vida1 << endl;
						cout << "      " << endl;

						if (Vida1 > 0)
						{
							goto Ataque;
						}

						else
						{
							goto salir;
						}

					}
					break;

					if (ct = 4);
					{
						Vida1 = Vida1 - 15;
						cout << "¡chale!  bajo a: " << Vida1 << endl;
						cout << "      " << endl;

						if (Vida1 > 0)
						{
							goto Ataque;
						}

						else
						{
							goto salir;
						}

					}
					break;

					if (ct = 5);
					{
						Vida1 = Vida1 - 12;
						cout << "¡chale! bajo a: " << Vida1 << endl;
						cout << "      " << endl;

						if (Vida1 > 0)
						{
							goto Ataque;
						}

						else
						{
							goto salir;
						}

					}
					break;


					if (Vida2 > 0)
					{
						goto Ataque;
					}

				}

				
				else
				{
					Vida2 = Vida2 - 15;
					cout << "apenas lo soporto... " << Vida2 << endl;
					cout << "      " << endl;
					cout << "es el turno del rival..." << endl;
					cout << "      " << endl;
					goto Pelea;

					if (Vida2 > 0)
					{
						goto Ataque;

					}

					else
					{
						goto salir;
					}

				}

			}

			
			else
			{
				goto Inicio;

			}
			break;
		}

salir:
		cout << "la batalla termino, ¿Te gustaria volver a jugar?" << endl;
		cout << "        " << endl;
		cout << "0 = ¡Si!" << endl;
		cout << "1 = hasta la proxima ..." << endl;
		cin >> salir;
	}

}

