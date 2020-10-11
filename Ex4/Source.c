#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int i = 0;
	char str[30];
	int taillemot;
	printf("Entrez votre mot pour verifier s'il est un palindrome\n");
	scanf_s("%s", str, _countof(str));
	taillemot = strlen(str);
printf("La taille du mot est %d\n", taillemot);

	for (int n = 0; n < taillemot / 2; n++)
	{
		if (str[n] != str[taillemot - (n + 1)]) {
			printf("Ce n'est pas un palindrome\n");
			break;
		}printf("C'est un palindrome !!!\n");
		break;

	}
}