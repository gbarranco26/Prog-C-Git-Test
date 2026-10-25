#include <stdio.h>
#include "pedra_paper_tisores.h"

Resultat determinar_guanyador(Jugada J1 ,Jugada J2){

	if (J1 == J2){
		return EMPAT;
	}
	else if (J1== PEDRA) {
		if (J2 == PAPER) {
			return GUANYA_J2;
		} else{
			return GUANYA_J1;
		} }
	else if (J1 == PAPER) {
		if (J2 == PEDRA) {
			return GUANYA_J1;
		} else{
			return GUANYA_J2;
		} }
	else {
		if (J2 == PEDRA) {
			return GUANYA_J2;
		} else {
			return GUANYA_J1;
		}}
}
