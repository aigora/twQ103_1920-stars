#include<stdio.h>

#include<string.h>





void menu(){

	 printf("A-Registrarse para acceder a la matricula\n");

	 printf("B-Acceder a su cuenta\n");

	 printf("C-Salir de la pagina stars\n");

	 printf("\n");

}

void banner(){

	printf("-----------------------------------------------------------------------------------------------------------------------\n");

	printf("-----------------------------------------------------------------------------------------------------------------------\n");

	printf("----------BIENVENIDO---------------------------------------------------------------------------------------------------\n");

	printf("-----------------A-----------------------------------------------------------------------------------------------------\n");

	printf("-------------------LA--------------------------------------------------------------------------------------------------\n");

	printf("---------------------APLICACION--------------------------------------------------- ------------------------------------\n");

	printf("-----------------------------------STARS-------------------------------------------------------------------------------\n");

	printf("-----------------------------------------------------------------------------------------------------------------------\n");

	printf("-----------------------------------------------------------------------------------------------------------------------\n");

}





struct TAsignaturas {

	char materia[50];

	float ncreditos;

	float nhoras;

};



struct datos{

	char nombre[50],apellidos[50];

	char dni[50];

	char n_usuario[50];

	char email[50];

	char usuariopedido[50];

	int contrasennapedida;

	int contrasenna;
	
};



void asignaturas (){

	printf("++++++ ASIGNATURAS DISPONIBLES ++++++\n");

	printf("- Calculo\n");

	printf("- Fisica I\n");

	printf("- Estadistica\n");

	printf("- Quimica\n");

	printf("- Ingles\n");

	printf("- Informatica\n");

	printf("- Ciencia de materiales\n");

	printf("- Transmision de calor\n");

	printf("- Medio ambiente\n");

	printf("- Experimentacion quimica\n\n");
	
}




int main(){

	system("color 5F");

	char opcion;

	int i,n;

	int opcionB; 

	char mat1[50],mat2[50],mat3[50],mat4[50],mat5[50];

	

	struct datos usuario;


	struct TAsignaturas materias[100];

	int nAsignaturas = 0;

	FILE * fentrada;

	

	fentrada = fopen("asignaturas.txt", "r");

	

	if (fentrada == NULL) {

		printf("Error en la apertura del fichero\n");

		return 0;

	}

	banner();

	do {
		
		printf("\n");

	   printf("          MENU  DE  STARS        \n");

	   printf("\n");

           printf("Introduzca alguna de las opciones mostradas a continuacion \n");

           printf("\n");

	    menu();

	   printf("Opcion seleccionada:");

	   fflush(stdin);

	   scanf("%c",&opcion);

	  

	   

	   switch (opcion) {

	   	case 'A':

	    case 'a':

	    	printf("\n");

       		printf("          Zona de Registro          \n");

       		printf("\n");

       	    printf("Introduzca su nombre :    ");

       		scanf("%s",usuario.nombre);

       		

			printf("Introduzca sus apellidos:   ");

       		fflush(stdin);

       		gets(usuario.apellidos);

       		

			printf("Introduzca su DNI:   ");

       		gets(usuario.dni);

       		

			printf("Introduzca su email :   ");

       		gets(usuario.email);

       		

			printf("Elija un nombre de usuario  : ");

       		scanf("%s",usuario.n_usuario);

       		

			printf("Elija una contrasenna numerica : ");

       		scanf("%d",&usuario.contrasenna);

       		

			printf("\n");

       		printf("Acaba de ser registrado como usuario en STARS . Volvera al menu principal para ingresar en la espacio virtual. \n");

       		printf("\n");
       	

			

			break;

       		    

       	case 'B':

       	case 'b':

       		    

       		    do{

				   

       		    	printf("Introduzca su nombre de usuario :  ");

       		    	fflush(stdin);

       		    	gets(usuario.usuariopedido);

       		    	for(i=0;i<50;i++){

       		    		if(strcmp(usuario.n_usuario,usuario.usuariopedido)==0){

       		    			do{

       		    		    	printf("Introduzca su contrasenna :  ");

       		    	            scanf("%d",&usuario.contrasennapedida);

       		    	            printf("\n");

       		    	            if(usuario.contrasenna==usuario.contrasennapedida){

       		    	            	printf("Entro a su cuenta\n\n");

       		    	            	

       		    	        

       		    	        	

       		    	        	printf("Elija una opcion:\n");

								printf("1. Matricularse\n");

								printf("2. Ver informacion de asignaturas\n");

								printf("3. Ver informacion personal y de matricula\n");

								printf("4. Salir del progrma \n");

								scanf("%d",&opcionB); 

								

								switch (opcionB) {

								

								case 1:

									

									asignaturas ();

									

									printf ("Escoja 5 asignaturas que desee llevar:\n");

									fflush(stdin);

									

									gets(mat1);

									gets(mat2);

									gets(mat3);

									gets(mat4);

									gets(mat5);

									

									printf("******¡Su matricula ha sido realizada con exito!******\n\n");

						

									break;

									

								case 2:

									printf("Se muestra las asignaturas, numero de creditos y numero de horas por semana:\n\n");

									

									while (fscanf(fentrada, "%s %f %f", materias[nAsignaturas].materia, &materias[nAsignaturas].ncreditos, &materias[nAsignaturas].nhoras) != EOF) {

									printf("%s             %.2f %.2f\n", materias[nAsignaturas].materia, materias[nAsignaturas].ncreditos, materias[nAsignaturas].nhoras);

									nAsignaturas++;		

									}

									

									fclose(fentrada);

									

									break; 
																		

								case 3:

									

									printf("D A T O S   P E R S O N A L E S :\n\n");

									printf("  - NOMBRE: %s\n",usuario.nombre);

									printf("  - APELLIDOS: %s\n",usuario.apellidos);

									printf("  - N DNI: %s\n",usuario.dni);

									printf("  - CORREO ELECTRONICO: %s\n",usuario.email);

									printf("  - USUARIO: %s\n\n",usuario.n_usuario);

									

									printf ("A S I G N A T U R A S   M A T R I C U L A D A S :\n\n");

									printf("1. %s\n",mat1);

									printf("2. %s\n",mat2);

									printf("3. %s\n",mat3);

									printf("4. %s\n",mat4);

									printf("5. %s\n\n",mat5);

									

									break;

									

								

								case 4:

									
                                                                        printf("Saliendo de la plataforma STARS....\n");
                                                                        printf("\n");
									printf("** FIN DEL PROGRAMA **\n");
									printf("                                 VUELVA PRONTO \n");
									return 0;

									break;

									

								

								default:

									printf("Opcion incorrecta\n");

									

							}

								   

								} else {

       		    	            	printf("La contrasenna es incorrecta\n");

       		    	            	break;

								   }

       		    				

							   } 

							while(usuario.contrasenna!=usuario.contrasennapedida);

						   }else{

						   	printf("No existe ese usuario\n");

						   	break;

						   }

					}

       		    	

       		    

       		    	

				    }while(usuario.n_usuario!=usuario.usuariopedido && usuario.contrasenna!=usuario.contrasennapedida);

       		    	

       		    	

				   

       		break;

       	case 'C':

       	case 'c':
       		
       		printf("\n");
       		printf("Saliendo de la plataforma STARS....\n");
       		printf("\n");
       		printf("** FIN DEL PROGRAMA **\n");
       		printf("                                 VUELVA PRONTO \n");

       		break;

       	default :

       	    printf("Opcion no valida\n");

       	    break ;

	   }





	   } while (opcion!='C'&&opcion!='c');

	   

}
