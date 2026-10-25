#include <stdio.h>
#include "intensitat.h"
#include <stdlib.h>
int calcular_intensitat( int fila, int columna, int centre) {
	int fc = abs(fila - centre); int cc = abs(columna - centre);
	int Manhattan = fc + cc;
	return Manhattan;


}
int senar_enter_positiu(void){	
	int n = 0;
	printf("Posa un nombre enter senar positiu: \n");
	scanf("%d" , &n);
	if (n < 1 || n % 2 == 0) {
		while (n < 1 || n % 2 == 0)  {
			printf("Valor incorrecte.\n"); 
			printf("Posa un nombre enter senar positiu: \n");
			scanf("%d", &n);
			}	
		printf("Valor agafat \n");
		}
	else {
		printf("Valor agafat \n");
	}
	return n;
}
