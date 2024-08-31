#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"spanish");
	//Reservamos memoria
	int resultado;
	int numero;
	//Guardamos el numero a multiplicar
	printf("ingresa un número:");
	scanf("%i",&numero);
	 resultado=numero*1;
	//multiplicaciones
	
	printf("%ix1=%i\n",numero,resultado);
	
	resultado=numero*2;
	printf("%ix2=%i\n",numero,resultado);
	
	resultado=numero*3;
	printf("%ix3=%i\n", numero, resultado);
	
	resultado=numero*4;
	printf("%ix4=%i\n",numero, resultado);
	
	resultado=numero*5;
	printf("%ix5=%i\n",numero,resultado);
	
	resultado=numero*6;
	printf("%ix6=%i\n",numero,resultado);
	
	resultado=numero*7;
	printf("%ix7=%i\n",numero,resultado);
	
	resultado=numero*8;
	printf("%ix8=%i\n",numero,resultado);
	
	resultado=numero*9;
	printf("%ix9=%i\n",numero,resultado);
	
	resultado=numero*10;
	printf("%ix10=%i\n",numero,resultado);
}
