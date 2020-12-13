#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <ctype.h>



int main() {
   unsigned char str[30];//evite un warning
    int verif = 0;
    int i = 0;
    int taillemot;
    char MotSansAccents[30];
    printf("entrez le mot: ");
    scanf_s("%s", str, _countof(str));
    taillemot = strlen(str);
    int Taille_MotSansAccents = 0;
    for (int n = 0; n < taillemot; n++) {
        printf("%c\n", str[n]);
        if ((str[n] > 64 && str[n] < 91) || (str[n] > 96 && str[n] < 123)) {
            MotSansAccents[i] = toupper(str[n]);//met en majuscule
            i += 1;
            Taille_MotSansAccents += 1;
        }
        else if (str[n] > 127 && str[n] < 166) {
            MotSansAccents[i] =str[n];
            i += 1;
            Taille_MotSansAccents += 1;
        }
    }
    int count = 0;
    Taille_MotSansAccents -= 1;
    while (verif == 0 && count < Taille_MotSansAccents) {
        if (MotSansAccents[count] == MotSansAccents[Taille_MotSansAccents]) {
            count += 1;
            Taille_MotSansAccents -= 1;
        }
        else { verif = 1; 
        }
    }
    if (verif == 1) {
        printf("%s n'est pas un palindrome", str);
       
    }
    else {
        printf("%s est un palindrome", str);
    }
}
//deuxième version sans la notion d'accent
/*#include<stdio.h>
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
*/