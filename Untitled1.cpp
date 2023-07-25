#include<stdio.h>
main ()
{
	char store[50];
	gets(store);
 
	int  size=0;
	int a=0;
	while(store[a]!='\0')
	{
		size++;
		a++;
	}
	printf("%d",size);
}
