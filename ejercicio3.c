
#include <unistd.h>
#include <stdio.h>
void printFichaBlanca(int);

int main()
{
	int pid1,pid2;
	pid1 = fork();
	if(pid1 != 0)
	{
		//printf("SOY EL PADRE\n");
		pid2 = fork();
		if(pid2 == 0)
			printf("SOY LA FICHA AZUL\n");

		else 
			printf("SOY LA FICHA BLANCA\n");
		printf("HOLA\n");//hijo2 y el padre

	}

	else
		printf("SOY LA FICHA ROJA\n");

	printf("ADIOS\n");// todos
}
