#include<stdio.h>
int countSetBits(int num)
{
	int count=0;
	while(num>0)
	{
		if(num&1)
		count++;
		num=num>>1;
	}
	return count;
}
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	printf("number of 1bits=%d\n",countSetBits(n));
	return 0;
}
