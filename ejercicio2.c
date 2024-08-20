
#include <unistd.h>
#include <stdio.h>

int main()
{
	int pid, a = 5, b = 8, c;
	printf("a: %i\n",a);
	printf("b: %i\n",b);
	printf("c: %i\n",c);
	pid = fork();
	if(pid != 0)
	{
		c = a++ +b;
		b *= 3;
		printf("PADRE\n");
		printf("a: %i\n",a);
        	printf("b: %i\n",b);
        	printf("c: %i\n",c);
	}
	else
	{
		c = b * a;
		a = a + 10;
                printf("HIJO\n");
                printf("a: %i\n",a);
                printf("b: %i\n",b);
                printf("c: %i\n",c);
	}
}
