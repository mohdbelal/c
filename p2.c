#include<stdio.h>

void main()
{
	static int i=0;
	if(i<=10)
	{
		printf("%d \n",i++);
		main();
	}
}

/*
without  using  conditional loop print 0-10
*/