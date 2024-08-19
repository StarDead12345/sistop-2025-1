#include <unistd.h>
#include <stdio.h>

int main()
{
	int pid, a = 5, b = 8, c;
	pid = fork();
	if(pid != 0)
	{
		c = a++ +b;
		b *= 3;
	}
	else
	{
		c = b * a;
		a = a + 10;
	}
}
