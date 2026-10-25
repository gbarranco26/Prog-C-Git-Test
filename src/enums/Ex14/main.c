#include <stdio.h>
#include <assert.h>
#include "pedra_paper_tisores.h"
#include <stdlib.h>
#include<time.h>
int main(void) {
	
	int Jugada_J1;
	printf("Joc: 0=Pedra, 1=Paper, 2=Tisores\n");
	scanf("%d" , &Jugada_J1);
	srand(time(NULL));
	Jugada Jugada_J2 = (Jugada)(rand() %3);
	printf("La teva jugada es, %d! \n", Jugada_J1);
	printf("La maquina ha jugat, %d !\n", Jugada_J2);
	if (Jugada_J1 > 2 || Jugada_J1 < 0) {
		printf("Jugada no válida. \n");
	}else{
		if (determinar_guanyador(Jugada_J1 , Jugada_J2)== GUANYA_J1) {
			printf("Has guanyat! \n");
		}
		else if (determinar_guanyador(Jugada_J1 , Jugada_J2)== GUANYA_J2) {
			printf("Has perdut! \n");
		} else {
			printf("Heu empatat!\n");
		}
	}


	assert(determinar_guanyador(PEDRA , TISORES) == GUANYA_J1);
	assert(determinar_guanyador(PAPER , TISORES) == GUANYA_J2);
	assert(determinar_guanyador(TISORES , TISORES) == EMPAT);
	printf("Tots els asserts han passat! \n");
	return 0;
}
