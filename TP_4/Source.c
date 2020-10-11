#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"tp4.h"

int main() {
	HEURE HeureDebut,HeureFin,Duree;
	HeureDebut.heure = 12;
	Duree.heure = 0;
	HeureDebut.minute = 30;
	Duree.minute = 45;
	int reste=0;
	HeureFin.heure=0;
	HeureFin.minute=0;


	if ((HeureDebut.minute + Duree.minute) > 60)
	{
		reste = (HeureDebut.minute + Duree.minute) % 60;
		HeureFin.heure = HeureDebut.heure + 1;
		HeureFin.minute = reste;
		printf("%d %d", HeureFin.heure, HeureFin.minute);
	}
	else {
		HeureFin.minute = reste + HeureDebut.minute;
		printf("%d %d", HeureFin.heure, HeureFin.minute);
	}

}