// esta es la historia de un aventurero



// Historia rpg de texto
// Abraham Torres

#include <iostream>
#include <stdio.h>

using namespace std;
// desiciones para comenzar
bool respuesta;
bool reiniciar = true;

int main ()
{
// aqui comiensa el primer final de la historia se puede modificar el final en las primeras descionbes
// si depeendiendo de que elijas iras por eb camino del bien o el camino del mal

cout << "esta es la historia de un aventurero que tendra oportunidad de elegir entre el bien y el mal" << endl;
cout << "en tus desiciones podras encontrar diferentes finales  y el final detras de todo" << endl;

	cout << " Esta es la historia de un aventurero" << endl;

	cout << "Elige 1 para si o 0 para no" << endl;
while( reiniciar)
{
	cout << "comenzar historia?" << endl;
	cin >> respuesta;
	
	// todo esta anidado dentro de este if  con if pequeños dentro

	if (respuesta == 1)
	{
		cout << "Estas caminando para el bosque de las tinieblas" << endl;
		cout << "deseas andetrarte mas al bosque" << endl;
		cin >> respuesta;

		if (respuesta == 1)
		{
			cout << "te encontrste una bruja" << endl;
			cout << "Deseas pelear contra ella?" << endl; 
			cin >> respuesta;
			if (respuesta == 1)
			{
				cout << "conseguiuste una espada el primer objeto majico" << endl;

				
                    cout << "la bruja te maldijo haora tienes que encontrar 4 objetos magicos para librarte de tumaldicion el cadader de la bruja tiene un mapa que te guiara" << endl;
                    cout << "sigues tu camino" << endl;
                    cin >> respuesta;
                
                      if (respuesta ==1)
                      {
                      	cout << "llesgate a la montana el ludar donde esta el segundo objeto"<< endl;
                      	cout << "deseas subir la montana?"<< endl;
                      	cin >> respuesta;
				      
					  
					  if (respuesta ==0)
				       {
					  cout << "si no consigues los objetos te convertiras en un hombre lobo" << endl;
                     cin >> respuesta;
                   }
                       if (respuesta = 1)
                       
                       	cout << "en la montana encontaste un trol "<< endl;
                      	cout << " peleas contra el y lo vences"<< endl;
                      	cin >> respuesta;
				    }
				    
				    if (respuesta =1)
				    {
				    	cout << "conseguste el segundo objecto la antorcha de luz eterna"<< endl;
                      	cout << " y sigues tu camino"<< endl;
                      	cin >> respuesta;
					}
				
                       if (respuesta ==1)
                      {
                      	cout << "llesgate a al risco el ludar donde esta el tercer objeto"<< endl;
                      	cout << "deseas bajar al risco?"<< endl;
                      	cin >> respuesta;
				      
					  
					  if (respuesta ==0)
				       {
					  cout << "si no consigues los objetos te convertiras en un hombre lobo ya tienes orejas de lobo sigue furro" << endl;
                     cin >> respuesta;
                   }
                       if (respuesta = 1)
                       
                       	cout << "en el risco encontraste un gigante que estaba esclavizando aldeanos para trabajos de mineria  "<< endl;
                      	cout << " peleas contra el y lo vences "<< endl;
                      	cin >> respuesta;
				    }
				    
				    if (respuesta =1)
				    {
				    	cout << "liberaste a los aldeanos en reconpesa los aldeanos te dan un cristal purificador que sacaron de la mina"<< endl;
                      	cout << " y sigues tu camino"<< endl;
                      	cin >> respuesta;
					}
					
					
					 if (respuesta ==1)
                      {
                      	cout << "llesgate a la cueva del llanto el ludar donde esta el cuarto y ultimo objeto"<< endl;
                      	cout << "deseas entrar a la cueva ?"<< endl;
                      	cin >> respuesta;
				      
					  
					  if (respuesta ==0)
				       {
					  cout << "si no consigues los objetos te convertiras en un hombre lobo ya tienes orejas y cola echale ganas !furro¡" << endl;
                     cin >> respuesta;
                   }
                       if (respuesta = 1)
                       
                       	cout << "la cueva esta muy obscura pero con la antocha eterna sigues adelante  "<< endl;
                       	cout << "el la cueva encontraste una serpien gigante el veneno de sus colmillo es lo que te falta para salbarte de tu maldicion "<< endl;
                      	cout << " peleas contra ella y la vences "<< endl;
                      	cin >> respuesta;
				    }
				    
				    if (respuesta =1)
				    {
				    	cout << "conseguidte el veneno haces el antidoto y te salvas de tu maldicion"<< endl;
                      	cout << "tu aventura a concluido  y te has convertido en un heroe salvaste a los aldenos y eres capas de enfrentar el mal  "<< endl;
                      	cout << "fin "<<  endl;
                      	cin >> respuesta;
					}
					
					
                       
                      return 0;
				   }

// aqui comiesa otro final si en la desicion dl incio se escoge otra respuesta
			else (respuesta == 0);
			{
				cout << "huiste del bosque para no pelear " << endl;
				 cin >> respuesta;  
				
				
				if (respuesta ==1)
                      {
                      	cout << "llegaste a un corral de toros"<< endl;
                      	cout << "uno de los toros escapo"<< endl;
                      	cin >> respuesta;
				      
					  
					 
                       if (respuesta = 1)
                       
                       	cout << "el toro te persigue"<< endl;
                      	cout << " te alcanza y te pisotea"<< endl;
                      	cin >> respuesta;
				    }
				    
				    if (respuesta =1)
				    {
				    	cout << "boom despiertas solo fue un sueno "<< endl;
                      	cout << " ponte hacer tu tarea  ya casi acaba el parcial"<< endl;
                      	cout << "fin " << endl;
                      	cin >> respuesta;
					}
				
				
				
				

				return 0;

			}
		}
		// aqui esta  esta el seguundo final que es mas largo y es una historia  sobre ir en el camino de la obscuridad
		else (respuesta == 0);
		{
			cout << "encotraste un pueblo" << endl;
			cout << "Quieres entrar al pueblo?" << endl;
			cin >> respuesta;
			if (respuesta == 1)
			{
				cout << "en el  peleaste con una bruja  " << endl;
				cout << "la bruja te convirtio en un hombre lobo setiento de dangre  y matas a la bruja " << endl;
				cout << "has comenzado tu camino malvado  tienes que conseguir 4 objetos majicos para que no surja un heroe que te pueda vencer " << endl;
			    cout << " la bruja tenia el primer objeto la espada  magica faltan 3  " << endl;
				cin >> respuesta;
				
				
				if (respuesta ==1)
                      {
                      	cout << "llesgate a la montana el ludar donde esta el segundo objeto"<< endl;
                      	cout << "subiste a la montana  encontraste un trol  el trol te pide que hagan una alianza"<< endl;
                      	cout << "hacer alianza ?"<< endl;
                      	cin >> respuesta;
				      
					  
					  if (respuesta ==0)
				       {
					  cout << "si haces una alianza te traicionaran  !atentamente la voz malbada de tu cabeza¡" << endl;
                     cin >> respuesta;
                   }
                       if (respuesta = 1)
                       
                       	cout << "rechazas la alianza con el trol "<< endl;
                      	cout << " peleas contra el,  lo mataste a sangre fria y te hiciste una capa con su piel "<< endl;
                      	cin >> respuesta;
				    }
				    
				    if (respuesta =1)
				    {
				    	cout << "conseguste el segundo objecto la antorcha de luz eterna"<< endl;
				    		cout << "corropiste la antorcaha con tu maldad  ahora es de obscuridad eterna"<< endl;
                      	cout << "  una parte de la buena persona que habia en ti murio por tus acciones   y sigues tu camino"<< endl;
                      	cin >> respuesta;
					}
				
                       if (respuesta ==1)
                      {
                      	cout << "llesgate a al risco el ludar donde esta el tercer objeto"<< endl;
                        cout << "en el risco  encuentras un gigante esclavista de aldeanos para minar cristales purificadorres"<< endl;
                      		cout << "el gigante te ofrece dividir las ganacias  y los aldeanos"<< endl;
                      	cout << "dividir ganancias?"<< endl;
                      	cin >> respuesta;
				      
					  
					  if (respuesta ==0)
				       {
					  cout << "si dives las ganacias no tendras el poder absoluto ! atentamente la voz de tu cabeza¡" << endl;
                      cin >> respuesta;
                   }
                       if (respuesta = 1)
                       
                       	cout << "rechazaste la propuestas del gigante "<< endl;
                      	cout << " peleas contra el y lo vences cortandole la cabeza "<< endl;
                      	cin >> respuesta;
				    }
				    
				    if (respuesta =1)
				    {
				    	cout << "tomaste el control sobre los aldeanos "<< endl;
				    	cout << "corropiste los cristales y en tu sed de sangre y muerte te comiste a  los ninos aladeanoas "<< endl;
                      	cout << " una parte de la buena persono que hay en ti acaba de morir y sigues tu camino"<< endl;
                      	cin >> respuesta;
					}
					
					
					 if (respuesta ==1)
                      {
                      	cout << "llesgate a la cueva del llanto el ludar donde esta el cuarto y ultimo objeto"<< endl;
                      	cout << "en la cueva encontraste una serpiente gigante "<< endl;
                      	cout << "que haras con la serpiene? elije 1 , 0 "<< endl;
                      	cin >> respuesta;
				      
					  
					  if (respuesta ==0)
				       {
					  cout << " no la mates mejor convertela a en tu mascota malbada " << endl;
					  
					  
					  
                     cin >> respuesta;
                   }
                       if (respuesta = 1)
                       
                       	cout << "ahora la cueva es tu guarida  "<< endl;
                       	cout << "solo le arrancaste un colmillo a la serpienta para que nadie obtenga su veneno  "<< endl;
                      	cout << " y la dejaste libre"<< endl;
                      	cin >> respuesta;
				    }
				    
				    if (respuesta =1)
				    {
				    	cout << "te covertiste en un villano por la maldicion de la bruja"<< endl;
                      	cout << "ahora en ti solo hay obscuridad  la buena persoina que soloas ser a muerto  "<< endl;
                      	cout << "la voz malbada de tu cabeza tomo el control total "<< endl;
                      	cout << "fin "<<  endl;
                      	cin >> respuesta;
					}
				
				
				 
				 
				 
				 
				 
				 
				
				return 0;
			
			}
			
			// este es el ultimo final que revela la verdad detras de estas historias
			else(respuesta == 0);
			{
				cout << "Continuaste con tu viaje" << endl;
				
				 if (respuesta ==1)
                      {
                      	cout << "sigues tu camino y te encuentras un barranco  en el fondo de este barranco vez una olla de oro"<< endl;
                      	cout << "tratas de vajar cuidadosamente por el barranco y empiezas a rodar  a golpearte "<< endl;
                      	cin >> respuesta;
				      }
                       if (respuesta = 1)
                       {
					   
                       
                       	cout << "despiertas medio moribundo en un hospital "<< endl;
                      	cout << " estas aventuras  solo pasaron en tu menete mientras estasbas inconciente"<< endl;
                      	cin >> respuesta;
				       }
				    
				    if (respuesta =1)
				    {
				    	cout << "lo que si era real es la voz de tu cabeza "<< endl;
                      	cout << " que al fin te covencio de atentar contra tu vida "<< endl;
                      	
                      	cin >> respuesta;
					}
				
				if (respuesta =1)
				    {
				    	cout << "al unico lugar que iras  seara a un loquero "<< endl;
                      	cout << " fin "<< endl;
                      	cin >> respuesta;
					}
			}

	 }
 }
	else (respuesta == 0);
	{
		cout << "ni pedo bro no hay historia que tegas buen dia" << endl;
	}
}
cout << "volvera jugar" << endl;
cin >> reiniciar;


cout << "gracias por jugar " << endl;
cout << "creador Abraham Torres " << endl;
cout << "Creditos para Brian Yael  " << endl;
cout << "proyecto para la materia de fundamenos de programacion" << endl;
cout << "26/11/2021 " << endl;
}	





    
    
    
    
    




