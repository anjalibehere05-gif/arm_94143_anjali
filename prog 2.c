#include<stdio.h>
void displayBinary(int num)
{
int bin[32];
int i=0;
if(num==0)
{
	printf("0");
	return;
}
while(num>0)
{
	 bin[i]=num%2;
	 num=num/2;
	 i++;
}
for(i=i-1;i>=0;i--)
{
	printf("%d",bin[i]);
}
} 
int main()
{
	int n;
	printf("enter a number:");
    scanf("%d",&n);
    printf("binary format:");
    displayBinary(n);
    return 0;
}
