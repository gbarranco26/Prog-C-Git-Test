#include <stdio.h>
#include <stdbool.h>
#include "nim.h"
#include <time.h>
#include <stdlib.h>

int main(void) {
	srand(time(NULL));
	total = rand() %11 + 20;
	restants = total;
	torn_jugador = 1;
	printf("Benvinguts al joc del nim. (Hi ha %d fitxes, qui agafi l'ultima perd. \n", total);
	int agafades;
	while (!comprovar_fi_partida(restants)){
		printf("Queden %d fitxes. Torn del jugador %d. \n", restants, torn_jugador);
        	printf("Quantes fitxes vols agafar?(1-3):");
		scanf("%d", &agafades);
		while(!moviment_valid(agafades, restants)){
			printf("Moviment invalid. Ha de ser entre 1-3 \n");
			scanf("%d", &agafades);
		}
		restants = restants - agafades;
		if (comprovar_fi_partida(restants)) {
			printf("La partida ha acabat! Ha guanyat el jugador %d.", 3 - torn_jugador);
			return 0;}
		else {
		torn_jugador= 3 - torn_jugador;
		}
	}
	return 0;
}
