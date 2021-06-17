#include<stdio.h>
#include<conio.h>
int main()
{
	int array[10];
	int count;
	
	for(count=0;count<10;count++)
	{
		printf("Enter element of index %d : ",count);
		scanf("%d",&array[count]);
	}
	
	if(array[0] < array[1] && array[2] && array[3] && array[4] && array[5] && array[6] && array[7] && array[8] && array[9])
	{
		printf("%d is the minimum number in an array.",array[0]);
		printf("\n");
		printf("Number of index is 0");
	}
	else if(array[1] < array[0] && array[2] && array[3] && array[4] && array[5] && array[6] && array[7] && array[8] && array[9])
	{
		printf("%d is the minimum number in an array.",array[1]);
		printf("\n");
		printf("Number of index is 1");
	}
	else if(array[2] < array[0] && array[3] && array[1] && array[4] && array[5] && array[6] && array[7] && array[8] && array[9])
	{
		printf("%d is the minimum number in an array.",array[2]);
		printf("\n");
		printf("Number of index is 2");
	}
	else if(array[3] < array[0] && array[2] && array[1] && array[4] && array[5] && array[6] && array[7] && array[8] && array[9])
	{
		printf("%d is the minimum number in an array.",array[3]);
		printf("\n");
		printf("Number of index is 3");
	}
	else if(array[4] < array[0] && array[2] && array[1] && array[3] && array[5] && array[6] && array[7] && array[8] && array[9])
	{
		printf("%d is the minimum number in an array.",array[4]);
		printf("\n");
		printf("Number of index is 4");
	}
	else if(array[5] < array[0] && array[2] && array[1] && array[4] && array[3] && array[6] && array[7] && array[8] && array[9])
	{
		printf("%d is the minimum number in an array.",array[5]);
		printf("\n");
		printf("Number of index is 5");
	}
	else if(array[6] < array[0] && array[2] && array[1] && array[4] && array[5] && array[3] && array[7] && array[8] && array[9])
	{
		printf("%d is the minimum number in an array.",array[6]);
		printf("\n");
		printf("Number of index is 6");
	}
	else if(array[7] < array[0] && array[2] && array[1] && array[4] && array[5] && array[6] && array[3] && array[8] && array[9])
	{
		printf("%d is the minimum number in an array.",array[7]);
		printf("\n");
		printf("Number of index is 7");
	}
	else if(array[8] < array[0] && array[2] && array[1] && array[4] && array[5] && array[6] && array[7] && array[3] && array[9])
	{
		printf("%d is the minimum number in an array.",array[8]);
		printf("\n");
		printf("Number of index is 8");
	}
	else
	{
		printf("%d is the minimum number in an array.",array[9]);
		printf("\n");
		printf("Number of index is 9");
	}
	
	
	getch();
	return 0;
}
