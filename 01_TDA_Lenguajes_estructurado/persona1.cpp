#include <stdio.h>


struct persona
{
	char nombre[20];
	char apellidos[30];
	char genero[15];
    int edad;	
};

void visualizar(struct persona);

main(void) 
{
	struct persona nueva;
	printf("ingrese el nombre de la persona: ");
	scanf("%s",nueva.nombre);
	printf("\ningrese el primer apellido: ");
	scanf("%s",nueva.apellidos);
	printf("\ningrese su  genero: ");
	scanf("%s",nueva.genero);
	printf("\ningrese su edad: ");
	scanf("%s",&nueva.edad);
	visualizar(nueva);		
}

void visualizar(struct persona datos)

{
	
printf("nombre: %s",datos.nombre);	
printf("\napellidos: %s",datos.apellidos);		
printf("\ngenero: %s",datos.genero);
printf("\nedad: %s",datos.edad);
	
}







