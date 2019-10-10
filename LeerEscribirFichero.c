#include <stdio.h>
#include <stdlib.h>

/*  Programa que pide el nombre de fichero de lectura y fichero de escritura lea sus caracteres uno a uno y los escribe  */


int main() {
	
	

	char pathIn[100]; // String que almacenará todos los carácteres
	char pathOut[100]; // String que almacenará todos los carácteres
	
	printf("Introduzca el nombre del fichero de lectura con su extension  \n");	
	scanf("%s", pathIn); // Escribimos en el string el fichero de entrada
	 
	 /*Instancias fichero E/S*/
	FILE *fin; 
	FILE *fout;
	
	
	char caracter; //Caracter que almacenará lo que se va leyendo
	int incremento; //Entero que almacenará el incremento de codificación
	
	////LEER FICHERO CARACTER A CARACTER
	
	
	fin=fopen(pathIn,"r"); // fopen stream que abre el fichero (param1:fichero) (param2:modo (r,w..)
	
	if(fin !=NULL){ //Si se ha podido abrir el fichero de entrada			
	
	printf("Se ha abierto el fichero de lectura  \n"); 
	
		printf("Introduzca el nombre del fichero de escritura con su extension  \n");	
	 
	 	scanf("%s", pathOut); //Escribimos en el String fichero de salida
	 	
	 		 	
	 	fout=fopen(pathOut,"r+"); // Stream r+(lectura y escritura de un fichero existente)
	 	
	 		if(fout != NULL){  // Si se ha podio abrir el fichero de escritura	
	 		
	 		printf("Introduzca numero de caracteres a desplazar \n" );	 
			 		
	 			scanf(" %d", &incremento); // Scan 	
				 			
				//	incrementar(incremento);
					
					caracter=fgetc(fin);	 	//  Leemos primer carácter
					 while( caracter!= EOF){	// Si carácter es distinto a END OF FILE
					 	   											    
					 	//	calculaAscii(caracter);	
					 	
					 	char w = calculaAscii(caracter+incremento); //Almacenamos el valor que retorna la funciòn enviando como parametro el caracter + incremento de codificacion
					 	
					 	fputc(w, fout); //Escribimos caracter en fichero de salida	 					 	
					 	
						 caracter = fgetc(fin); // Volvemos a leerlo
					 	
					 					 	
					 }	 
					 	printf("Se ha escrito el fichero correctamente \n");	
						 
						 				 	
						 		
			 }else{			 	
					printf("No se ha podido abrir el fichero de escritura. \n");
			}	
	
	 
	}else{
		printf("No se ha podido abrir el fichero de entrada. \n");
	}	
	
	

	

	
	return 0;
}





void calculaAscii(char c){


  return c;
	 
	 
}





