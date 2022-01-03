// Q1 multiplication
#include <stdio.h>

void main()

{

    int a[10][10], b[10][10], c[10][10], sum = 0;
    int a1, a2, b1, b2;

    printf("Enter the row and column for first matrix A\n");
    scanf("%d%d", &a1, &a2);

    printf("Enter the row and column for second matrix b\n");
    scanf("%d%d", &b1, &b2);

    if (a2 != b1){
        printf("Matrix multiplication is not possible\n");
    }

    else{
        printf("Enter the elements of first matrix:\n");
        for (int i = 0; i < a1; i++)
            for (int j = 0; j < a2; j++)
                scanf("%d", &a[i][j]);

        printf("Enter the elements of second matrix:\n");
        for (int i = 0; i < b1; i++)
            for (int j = 0; j < b2; j++)
                scanf("%d", &b[i][j]);

        printf("\nFirst Matrix:\n");
        for(int c = 0; c < a1; c++){
        for(int d = 0; d < a2; d++)   // to iterate the columns
        {
            printf("%d\t", a[c][d]);
        }
    printf("\n");
    }

    printf("\nSecond  Matrix:\n");
        for(int c = 0; c < b1; c++){
        for(int d = 0; d < b2; d++)   // to iterate the columns
        {
            printf("%d\t", b[c][d]);
        }
    printf("\n");
    }
 
 printf("\nMultiplication of Matrix:\n");

        for (int i = 0; i < a1; i++){

            for (int j = 0; j < b2; j++){
                for (int k = 0; k < a2; k++){
                    sum = sum + a[i][k] * b[k][j];
                }
                c[i][j] = sum;
                sum = 0;
                printf("%d\t", c[i][j]);
            }

            printf("\n");
        }
    }
}