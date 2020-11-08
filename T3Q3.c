#include <stdio.h>
void transpose2D(int ar[][SIZE], int rowSize, int colSize);
int main()
{   
    int SIZE;
    int size;
    int array[size][size];
    int i, j;
    printf("Enter matrix size: \n");
    scanf("%d", &size);
    printf("Enter the array: \n");
    for(i=0; i<=size-1;i++){
        for(j=0; j<size;j++){
            scanf("%d", &array[i][j]);
        }
    }
    transpose2D(array[][size], size, size);
    for(i=0; i<=size-1;i++){
        for(j=0; j<size;j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
void transpose2D(int ar[][SIZE], int rowSize, int colSize)
{
    int SIZE=rowSize;
    int temp[SIZE][SIZE];
    int i, j;
    for(i=0;i<SIZE;i++){
        for(j=0; j<SIZE; j++)
            temp[j][i]=ar[i][j];
    }
    ar = temp;
}