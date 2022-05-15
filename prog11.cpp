/*Autor: Oscar Eduardo Fletes Ixta, Realizado: 17/02/22
	programa qu pida el numero de mes e imprima el nombre del mes y debe detectar
	valores erroneos
	Programa en lenguaje c que muestra el uso de scanf, y el uso del switch 
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo int
		-scanf
		-Uso del switch
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables enteras, como declararlas, pedirlas por teclado, usar el switch, 
	e imprimirl el resultado.

	Breve descripcion:
	El programa pide como entrada 1 variables de tipo int (numero del mes),
	El programa pide el numero de mes e imprime el nombre del mes y debe detectar valores erroneos
	*/
	
#include<stdio.h>

int main(){
	//Variables
	int mes; //variable numero entero
	//Entrada
	printf("Intoduce el numero del mes: "); //imrpime mensaje
	scanf("%d", &mes); //lee el numero insertado por el teclado
	//Proceso, Salida
	switch(mes){ //solo funciona para datos que sean fijos y pocos
		//menu del switch 
		case 1: printf("Enero"); //opcion 1
				break;
		case 2: printf("Febrero"); //opcion 2 
				break;
		case 3: printf("Marzo"); //opcion 3
				break;
		case 4: printf("Abril"); //opcion 4
				break;
		case 5: printf("Mayo"); //opcion 5
				break;
		case 6: printf("Junio"); //opcion 6
				break;
		case 7: printf("Julio"); //opcion 7
				break;
		case 8: printf("Agosto"); //opcion 8
				break;
		case 9: printf("Septiembre"); //opcion 9
				break;
		case 10: printf("Octubre"); //opcion 10
				break;
		case 11: printf("Noviembre"); //opcion 11
				break;
		case 12: printf("Diciembre"); //opcion 12
				break;
		default: printf("Numero de mes invalido"); //se valdia que si es mayor de 12 imrprime mensaje
	}
	return 0;
}
