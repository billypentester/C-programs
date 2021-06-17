#include<stdio.h>
#include<conio.h>
int main()
{
	int array1[10];
	int count,n,show;
	int value=0;
	
	for(count=0;count<10;count++)
	{
		printf("Enter element of index %d : ",count);
		scanf("%d",&array1[count]);
	}
	
	printf("\n");
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	printf("\n");
	
	for(show=0;show<10;show++)
	{
		if(array1[show]==n)
		{
			value=1;
		}
	}
	
	if(value==1)
	{
		printf("Given number is present in array.");
	}
	else
	{
		printf("Given number is not present in array.");
	}
	
	
	getch();
	return 0;
}
