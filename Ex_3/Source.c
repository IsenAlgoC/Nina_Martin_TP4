#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
	char mot[100];
	char reponse;
	printf("Entrez votre nom : \n ");
	scanf_s("%s",&mot,_countof(mot));
	printf("Votre nom est %s", mot);
	printf("Entrez votre sexe H ou F: \n");
	reponse = _getch();
	switch (reponse)
	{
	case 'F':
		printf("Madame %s", mot);
		break;
	case 'H':
		printf("Monsieur %s", mot);
		break;
	default:
		printf("Veuillez recommencer");
		break;
	}
}

