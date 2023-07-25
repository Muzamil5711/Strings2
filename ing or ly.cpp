#include<stdio.h>
#include<string.h>
main()
{
	char sing[20];
	gets(sing);
	int lenght=strlen(sing);
	if(lenght<3)
	puts(sing);
	else{
		if(sing[lenght-1]=='g'&&sing[lenght-2]=='n'&&sing[lenght-3]=='i'){
			sing[lenght-2]='l';
			sing[lenght-1]='y';
			
		}
		else  
		strcat (sing,"ing");
			
		}
	
	puts(sing);
}
