#include<stdio.h>
int findlcm(int num1,int num2){
	int max= num1>num2 ? num1:num2;
	int lcm=max;
	while(1){
		if(lcm%num1==0 && lcm%num2==0)
		return lcm;
		lcm+=max;
	}
}
main ()
{
	int number[10];
	
	for(int i=0;i<10;i++){
		scanf("%d",&number[i]);
	}
	
	int lcm;
	
	lcm=number[0];
	
	for(int j=1;j<10;j++)
	{
		lcm=findlcm(number[j],lcm);
	}
	
	printf("Lcm is : %d",lcm);
}
