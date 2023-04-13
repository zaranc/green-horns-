#include<stdio.h>

main()
{
	int a,b;
	printf("enter of value a");
	scanf("%d" ,&a);
	printf("enter of value b");
	scanf("%d" ,&b);
	
    a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping value of is=%d \n",a);
    printf("after swapping value of is=%d \n",b);
	
}
