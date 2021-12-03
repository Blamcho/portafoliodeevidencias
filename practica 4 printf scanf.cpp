//30_09_2021
//prctica_4
//Abraham Torres

#include <stdio.h>
#include <conio.h>
#include<iostream>
int main()
{
	char  nm [29];
	char a [29];
	int e;
	float es;
	float p;
	
	
	printf("nombre\n");
	scanf("%s",&nm);
    
    
    printf("apelloido\n");
	scanf("%s",&a);
    
    printf("edad\n");
	scanf("%d",&e);
    
    
    
    printf("estatura\n");
	scanf("%f",&es);
   
    printf("peso\n");
	scanf("%f",&p);
    
    
    
    printf("su nombre es %s",nm);
    printf("\nsu apellido es %s",a);
    printf("\nsu edad es %d",e);
    printf("\nsu  estarura es %.2f",es);
    printf("\nsu  epeso es %.2f",p);
    
    return 0;
    
}
 
