#include<stdio.h>
#include<string.h>
int main ()
{
	char sting[10];
	gets(sting);
	int count=1;
	int lenght=strlen(sting);
	for(int i=0;i< lenght;i++){
		if (sting[i]!=0)
		{
		  count=1;
		for(int j=i+1;j< lenght;j++){
			
			if(sting[i]==sting[j]){
				count++;
				sting[j]='\n';
			}
		}
		printf("%c occours %d times\n",sting[i],count);
	}}
	printf("%d",lenght);
}
