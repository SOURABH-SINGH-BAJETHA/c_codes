#include<stdio.h>
int main()
{
	int num;
	printf("enter any number");
	scanf("%d",&num);
	if (num>0)
	{
		printf("+number");
	}
     if (num<0)
     {
     	printf("-number");
	 }
	 if (num==0)
	 {
	 	printf("zero");
	 }
	    return 0;
}