#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()

{
	int val;
	int tab[100];
	srand(time(NULL));
	int* MyPtr;
	for (int i = 0; i < 100; i++)
	{
		val = rand() % 20;
		tab[i] = val;
		printf("%d  ", tab[i]);

	}

	
}