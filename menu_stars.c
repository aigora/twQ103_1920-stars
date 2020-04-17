#include<stdio.h>
#include<string.h>

// MenÃº de opciones para la cuenta STARS

//Añado estructura para asignatura
struct TAsignaturas {
	char materia[50];
	float ncreditos;
	float nhoras;
	
struct datos{
	char nombre[50],apellidos[50];
	char dni[50];
	char n_usuario[50];
	char email[50];
	char usuariopedido[50];
	int contrasennapedida;
	int contrasenna;

}};

int main(){
	
	char opcion;
	int i,n;
	int opcionB; //añado opciones de caseB
	
	struct datos usuario;
	
	//Añado estructura de asignaturas
	struct TAsignaturas materias[100];
	int nAsignaturas = 0;
	FILE * fentrada;
	
	fentrada = fopen("asignaturas.txt", "r");
	
	if (fentrada == NULL) {
		printf("Error en la apertura del fichero\n");
		return 0;
	}
	
	do {
	   printf("          MENU DE STARS          \n");
	   printf("\n");
       printf("Introduzca alguna de las opciones mostradas a continuacion \n");
       printf("\n");
	   printf("A-Registrarse para acceder a la matricula\n");
	   printf("B-Acceder a su cuenta\n");
	   printf("C-ALGOOOOOO\n");
	   printf("D-Salir de la pagina stars\n");
	   printf("\n");
	   printf("Opcion seleccionada:");
	   scanf("%c",&opcion);
	   fflush(stdin);
	   
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
       		printf("Acaba de ser registrado como usuario en STARS \n");
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
       		    	            	
       		    	        	//aqui deberiamos poner el menu 
       		    	        	
								//AGREGO AVANCE
       		    	        	
       		    	        	printf("Elija una opcion:\n");
								printf("1. Matricularse\n");
								printf("2. Ver informacion de asignaturas\n");
								printf("3. Volver al menu principal\n");
								scanf("%d",&opcionB); //lo declaro al inicio
								
								switch (opcionB) {
								
								case 1: //buscar otra forma para que se muestren las asignaturas
									printf("++++++ Asignaturas disponibles ++++++\n");
									printf("- calculo\n");
									printf("- fisica I\n");
									printf("- estadistica\n");
									printf("- quimica\n");
									printf("- ingles\n");
									printf("- informatica\n");
									printf("- ciencia de materiales\n");
									printf("- transmision de calor\n");
									printf("- medio ambiente\n");
									printf("- experimentacion quimica\n\n");

								/*	printf("Escriba 5 asignaturas que desee llevar:\n");
									scanf("%s %s %s %s %s", mat1,mat2,) */
									
									//TERMINAR...
									break;
									
								case 2:
									printf("Se muestra las asignaturas, numero de creditos y numero de horas por semana:\n\n");
									
									while (fscanf(fentrada, "%s %f %f", materias[nAsignaturas].materia, &materias[nAsignaturas].ncreditos, &materias[nAsignaturas].nhoras) != EOF) {
									printf("%s %.2f %.2f\n", materias[nAsignaturas].materia, materias[nAsignaturas].ncreditos, materias[nAsignaturas].nhoras);
									nAsignaturas++;		
									}
									
									fclose(fentrada);
									
									break; //si pongo return0; acaba el programa, con break me dice que vuelva a ingresar la contraseña
									//hacer un do-while
																		
								case 3:
									//volver
									
									break;
									
									//me falta un default tmb
									
								}
									
							 
								
								
								
								
							/*
       		    	        	printf("Introduzca el numero que quiera :\n");
       		    	        	scanf("%d",&n);
       		    	            }  */ //PAU esto para que es?
								   
								} else {
       		    	            	printf("La contrasenna es incorrecta\n");
       		    	            	break;
								   }
       		    				
							   } 
							while(usuario.contrasenna!=usuario.contrasennapedida);
						   }else{
						   	printf("No existe ese usuario\n");
						   	///aqui como hago que vuelva al menu
						   	break;
						   }
					   }
       		    	
       		    
       		    	
				    }while(usuario.n_usuario!=usuario.usuariopedido && usuario.contrasenna!=usuario.contrasennapedida);
       		    	
       		    	
				   
       		break;
       	case 'C':
       	case 'c':
       		break;
       	default :
       	    printf("Opcion no valida\n");
       	    break ;
	   }


	   } while (opcion!='C'&&opcion!='c');
	   
}
	
