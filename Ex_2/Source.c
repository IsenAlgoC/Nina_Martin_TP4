#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define SEPARATEUR '/'
#define TAILLETAB1 20

int main()
{
	int MyTab1[TAILLETAB1];
	int i;
	int* MyPtr;

	for ( i = 0; i < TAILLETAB1; i++)
	{
		MyTab1[i] = i+1;
		printf("%d %c", MyTab1[i],SEPARATEUR);
	
	}
	printf("\n");
	MyPtr = &MyTab1[TAILLETAB1-1];
	for (int j=TAILLETAB1-1; j >= 0; MyPtr--,j--)
	{
		//MyPtr = &MyTab1[j];
		printf("%d %c", *MyPtr, SEPARATEUR);
		

	}
}