#include<stdio.h>
#include<string.h>
main ()
{ char fstr[30],str[10];
	puts("Enter first string:");
	gets(fstr);
	puts("Enter sub string :");
	gets(str);
	 int flen=strlen (fstr);
	 int slen=strlen (str);
	 
	 for(int i=0;i<flen;i++){
	 	if(fstr[i]==str[0]){
	 		for(int j=1;j<slen;j++){
	 			if(fstr[i+j]==str[j])
	 			printf("%d is index of %d character\n",i+j,j);
			 }
		 }
	 }
}
