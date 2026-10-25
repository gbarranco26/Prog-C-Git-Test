#include <stdbool.h>
#include <stdio.h>
#include "nim.h"
#include <stdlib.h>

int torn_jugador = 1;
int restants;
int total;

bool moviment_valid(int agafades, int restants){
	if (restants < agafades ||agafades > 3 ||agafades < 1 ){
		return false;
	}
	else {
		return true;

} }


bool comprovar_fi_partida(int restants){
	return restants == 0;
}
