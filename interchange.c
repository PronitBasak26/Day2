#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter two no.s");
	scanf("%d%d",&a,&b);
	printf("The value of a before interchange is %d",a);
	printf("The value of b before interchange is %d",b);
	c=a;
	a=b;
	b=c;
	printf("The value of a after interchange is %d",a);
	printf("The value of b after interchange is %d",b);
}
