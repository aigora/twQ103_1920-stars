#include<stdio.h>
// Menú de opciones para la cuenta STARS
int main(){

	char opcion;


	
	printf("*****BIENVENIDO A STARS*****\n");
    do {
	printf("Introduzca la opcion que desee :\n");
	   printf("A-Registrarse para acceder a la matricula\n");
	   printf("B-Acceder a su cuenta\n");
	   printf("C-Salir\n");
	fflush(stdin);
	scanf("%c",&opcion);
	switch (opcion)
       {
       	case 'A':
		case 'a':
			char nombre[50],contrasena[50];
       		printf("Para registrarse tiene que seleccionar su numbre de usuario y contraseña \n");
       		printf("Introduzca su nombre de usuario:\n");
       		fflush(stdin);
       		gets(nombre);
       		printf("Introduzca su contraseña sin espacios :\n");
       		fflush(stdin);
       		gets(contrasena);
       		break;
       	case 'B':
       	case 'b':
       		printf("\n");
       		break;
       	case 'C':
       	case 'c':
       		break;
       	default :
       	    printf("Opcion no valida\n");
       	    break ;
	   }
    }while (opcion!='C'&&opcion!='c');
	
}
