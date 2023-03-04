#include<stdio.h>
main()
{int array[100],search,c,num;
printf("Enter number of elements:\t");
scanf("%d",&num);
printf ("Enter %d elements:\n",num);
for (c=0;c<num;c++)
{scanf("%d",&array[c]);
}
printf("Enter the number to search:\t");
scanf("%d",&search);
for(c=0;c<num;c++)
{if(array[c]==search)
{printf("%d is present at location %d.\n",search,c+1);
break;}}
if(c==num)
printf("%d is not present in array.\n",search);
}
