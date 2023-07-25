#include<stdio.h>
#include<string.h>
int main ()
{
	char sting[10];
	gets(sting);
//	int lenght=1;
	int lenght=strlen(sting);
	for(int i=0;i<10;i++){
	//lenght++;
	printf("%c",sting[i]);
}
printf("%d",lenght);
}
