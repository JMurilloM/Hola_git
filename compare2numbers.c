#include <stdio.h>

main (){
	int num1, num2; /* declarando variables */

	printf("Introduce dos numeros, y te dire la relacion que satisfacen\n");
	scanf("%d%d", &num1, &num2); /* Imprimir mensaje y escaper valores recibidos del usuario */

	if (num1 != num2){
	printf("%d no es igual que %d\n", num1, num2);
	} /* primer caso, es igual que */

	if (num1 == num2){
		printf("%d es igual que %d\n",num1, num2);
	} /*caso de ambos numeros iguales*/

	if (num1 < num2) {
	printf("%d es menor que %d\n", num1, num2);
	} /* segundo caso, menor que */

	if (num1 > num2){
		printf("%d es mayor que %d\n", num1, num2 );
	}
return 0;
}
