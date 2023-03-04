#include<stdio.h>
main()
{char s1[100], s2[100],res[100],position,length,c=0;
printf("Enter the string 1:\t");
scanf("%s",&s1);
printf("\nEnter the string 2:\t");
scanf("%s",&s2);
printf("\nEntered strings are:\t%s and %s\n\n",s1,s2);
//length
printf("Length of String 1: %d\n\n", strlen(s1));
printf("Length of String 2: %d\n\n", strlen(s2));
//upper case and lower case
printf("Upper case strings are: %s and %s\n\n",strupr(s1),strupr(s2));
printf("Lower case strings are: %s and %s\n\n", strlwr(s1),strlwr(s2));
/*substring
printf("\nEnter position for substring 1 for extraction:\t");
scanf("%d",&position);
printf("\nEnter length of the substring 1 :\t");
scanf("%d",&length);
while(c<length)
{
res[c]=s1[position+c-1];
c++;
}
res[c]='\0';
printf("\nEnter position for substring 2 for extraction:\t");
scanf("%d",&position);
printf("\nEnter length of the substring 2 :\t");
scanf("%d",&length);
while(c<length)
{
res[c]=s2[position+c-1];
c++;
}
res[c]='\0';
printf( "\nSubstring received : %s\n",res);*/
//reverse
printf("Reverse strings are: %s and %s\n\n",strrev(s1),strrev(s2));
//concatenation
printf("Concatenated strings are: %s\n\n",strcat(s1,s2));
}
