#include<stdio.h>
main()
{int elements,i=0,large=0;
int ary[elements];
printf("Enter number of elements:\t");
scanf("%d",&elements);
for(i=0;i<elements;i++)
{
printf("Enter element %d:\t",i);
scanf("%d",ary[i]);
}
printf("Largest number is: \n Index of the largest number is:");
}
