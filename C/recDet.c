#include <stdio.h>
#include <math.h>

int det(int *A, int n, int a, int b);

int main()
{
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int A[n][n];
    int i, j;
    for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
    {
        printf("Enter element (%d, %d): ", i + 1, j + 1);
        scanf("%d", A[i] + j);
    }
    printf("The determinant is: %d", det(A[0], n, 0, 0));
    return 0;
}

int det(int *A, int n)
{
    int det;
    if (n == 2)
        det = (*A) * (*(A+3)) - (*(A+1)) * (*(A+2));
    else
    {
        det = 0;
        int i;
        for (i = 0; i < n; i++)
        {
            int B[(n-2)*n - 1];
            int j,k,l = 0;
            for (j=1;j<n;j++)
            for (k=0; k < n;k++)
            if (k!=i) B[l++] = A[i][j];
            det += pow(-1, i) * det (B, n - 1);
        }
    }
    return det;
}
