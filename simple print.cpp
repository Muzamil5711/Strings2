#include<stdio.h>
main ()
{
	char s[15];
	int i=0;
/*	for(i=0;s[i]!='\0';i++){
		printf("%c",s[i]);
	}
	*/
	//scanf("%s",s);
	gets(s);
	printf("%s\n",s[1]);
	puts(s);
}
