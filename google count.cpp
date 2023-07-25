#include<stdio.h>
#include<string.h>
main ()
{
	char scount[20];
	gets (scount);
	int count=0;
	int len =strlen(scount);
	for(int i=0;i<len;i++){
		count=1;
		for(int j=i+1;j<len;j++){
			if(scount[j]==scount[i])
			count++;
		}
		for(int k=0;k<i;k++){
			if(scount[k]==scount[i])
		{
			count=0;	break;
		}}
			 if(count> 0)
	printf("%c occur %d\n",scount[i],count);
		count=0;
	}
}
