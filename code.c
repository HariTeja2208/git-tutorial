#include<stdio.h>
int main()
{
	int n;
	char ch;
	printf("chn: ");
	scanf("%c%d",&ch,&n);
	if(ch%2==n%2)
	{
		printf("black-false");
	}
	else
	printf("white-true");
}
