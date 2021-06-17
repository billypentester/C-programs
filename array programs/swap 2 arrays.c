#include<stdio.h>
#include<conio.h>
int main()
{
	int array1[10],array2[10];
	int count,count2;
	int n;
	int array[10];
	int show1,show2;
	
	printf("1st array:");
		
	printf("\n");
	
	for(count=0;count<10;count++)
	{
		printf("Enter element of index %d : ",count);
		scanf("%d",&array1[count]);
	}
	
	printf("\n");
	
	printf("2nd array:");
		
	printf("\n");
	
	
	for(count2=0;count2<10;count2++)
	{
		printf("Enter element of index %d : ",count2);
		scanf("%d",&array2[count2]);
	}
	
	for(n=0;n<10;n++)
	{
		array[n]=array2[n];
		array2[n]=array1[n];
		array1[n]=array[n];
	}
	
	printf("\n");
	printf("Output");
	printf("\n\n");
	
	for(show1=0;show1<10;show1++)
	{
		printf("element of index %d is : %d ",show1,array1[show1]);
		printf("\n");
	}
	
	printf("\n");
	
	for(show2=0;show2<10;show2++)
	{
		printf("element of index %d is : %d ",show2,array2[show2]);
		printf("\n");
	}
			
	getch();
	return 0;
}
