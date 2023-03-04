#include<stdio.h>
int main() {
    int mat1[100][100], mat2[100][100], multiply[100][100], row1, col1, row2, col2,i,j,k;

    printf("Enter the number of rows in M1: ");
    scanf("%d", &row1);
    printf("Enter the number of columns in M1: ");
    scanf("%d", &col1);

    printf("Enter the elements of Matrix-1: \n");

    for (i = 0; i < row1; i++) {
        for (j = 0; j <col1; j++) {
            scanf("%d", & mat1[i][j]);
        }
    }
    printf("Enter the number of rows in M2: ");
    scanf("%d", &row2);
    printf("Enter the number of columns in M2: ");
    scanf("%d", &col2);
    printf("Enter the elements of Matrix-2: \n");

    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            scanf("%d", & mat2[i][j]);
        }
    }
    printf("Entered Matrix 1 is:\n\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j <col1; j++) {
            printf("%d\t",  mat1[i][j]);
        }
        printf("\n");
    }
    printf("Entered Matrix 2 is:\n");
     for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    if(col1!=row2)
    {printf("Multiplictaion not possible\n");}
    else
    {
    for (i = 0; i < row1; i++) {
        for (j = 0; j <row1; j++) {
            multiply[i][j] = 0;
            for (k = 0; k < row1; k++) {
                multiply[i][j] += (mat1[i][k] * mat2[k][j]);
            }
        }
    }
    }
    printf("The product of the two matrices is: \n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < row1; j++) {
            printf("%d\t", multiply[i][j]);
        }
        printf("\n");
    }
    return 0;
}
