#include <stdio.h>
void swapvalue(int , int);
void swapref(int*,int*);
int main()
{
    int a,b;
    printf("Enter value of a:\n");
    scanf("%d",&a);
    printf("Enter value of b:\n");
    scanf("%d",&b);
    printf("\nBefore swapping the values in main a = %d, b = %d\n\n",a,b); // printing the value of a and b in main
    swapvalue(a,b);
    printf("After swapping by call by value, in main a = %d, b = %d\n\n",a,b);
    swapref(&a,&b);
    printf("After swapping by call by refference, in main a = %d, b = %d\n\n",a,b);
}
void swapvalue (int a, int b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
    printf("After swapping values (call by value) in function a = %d, b = %d\n\n",a,b); // Formal parameters, a = 20, b = 10
}
void swapref (int *a, int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    printf("After swapping values(call by reference) in function a = %d, b = %d\n\n",*a,*b); // Formal parameters, a = 20, b = 10
}
