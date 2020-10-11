#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1024];
    int i, count = 1;
    int lettre = 0;
    int sum = 0;
    float moyenne = 0;
    int taille;

    printf("Entrer votre phrase :  \n");
    gets_s(str, _countof(str));


    for (int i = 0; i < strlen(str); i++)
    {

        if (str[i] == ' ')
        {
            count = count + 1;
        }

        else {
            lettre = lettre + 1;
            //printf("%c", str[i]);
        }//printf("%c", str);

    }printf("Le nombre total de mots dans laphrase est = %d\n", count);
    moyenne = (lettre/count);
    printf("%f\n", moyenne);
}
