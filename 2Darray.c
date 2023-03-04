#include<stdio.h>
main()
{int array[100][100],i,j,row,col;
printf("Enter number of rows:\t");
scanf("%d",&row);
printf("Enter number of columns:\t");
scanf("%d",&col);
printf("Enter elements:\n");
for(i=0;i<row;i++)
{for (j=0;j<col;j++)
{scanf("%d",&array[i][j]);
}
}
printf("Elements of array are:\n\n");
for(i=0;i<row;i++)
{for (j=0;j<col;j++)
{printf("%d\t",array[i][j]);
}
printf("\n");}
}
