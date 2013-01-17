#include <stdio.h>

main () 
{
	int numero1, numero2, numero3, numero4, suma;


	printf ("Ejercicio 2: Sumar cuatro sifras. Introduce el primer numero\n");
	scanf("%d", &numero1);

	printf("Introduce la segunda cifra\n");
	scanf("%d", &numero2);

	printf("Pon el tercer numero\n");
	scanf("%d", &numero3);

	printf("Introduce el cuarto y ultimo numero\n");
	scanf("%d", &numero4);

	suma= numero1+numero2+numero3+numero4 ;
	printf("La suma es %d\n", suma);
return 0;
}