#include <stdio.h> 
#define MAX 10 
void initialize(int *size, int ar[]);
void insert(int max, int *size, int ar[], int num);
void iremove(int *size, int ar[], int num);
void display(int size, int ar[]);
int main()
{
    int option = 0;
    int num, ar[MAX], size = 0;

    printf("Please select an option: \n");
    printf("(1) Initialize the array \n");
    printf("(2) Insert an integer \n");
    printf("(3) Remove an integer \n");
    printf("(4) Display the numbers stored in the array \n");
    printf("(5) Quit \n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &option);
        switch(option){
            case 1:
                initialize(&size, ar);
                break;
            case 2:
                printf("Enter an integer: \n");
                scanf("%d", &num);
                insert(MAX, &size, ar, num);
                break;
            case 3: 
                printf("Enter the integer to be removed: \n");
                scanf("%d", &num);
                iremove(&size, ar, num);
                break;
            case 4:
                display(size, ar);
                break;
            default:
                break;

        }
    } while (option<5);
    return 0;
}
void display(int size, int ar[])
{
    int i; 
    printf("The %d numbers in the array: \n", size);
    for(i=0; i < size; i++)
        printf("%d ", ar[i]);
    printf("\n");
}
void initialize(int *size, int ar[])
{
    int total, i, num;
    printf("Enter the total number of integers (MAX=%d): \n", MAX);
    scanf("%d", &total);
    (*size)=0;
    printf("Enter the integers: \n");
    for (i=0; i < total; i++){
        scanf("%d", &num);
        insert(MAX, size, ar, num);
    }
}
void insert(int max, int *size, int ar[], int num)
{ 
    // write code here
    //must show that the array is full 
    int tempValue;
    int tempSize = *size;
    int index, pass;
    if (tempSize < max)
    {
        ar[tempSize] = num;
        tempSize++;
        for (pass = 0; pass < tempSize-1; pass++)
        {
            for(index = 0; index < tempSize-1; index++)
            {
                if (ar[index]>ar[index+1]){
                    tempValue = ar[index];
                    ar[index] = ar[index+1];
                    ar[index+1] = tempValue;
                }
            }
        }
        *size = tempSize;
    }
    else{
        printf("The array is full \n");
    }
}
void iremove(int *size, int ar[], int num)
{
    //Write code here
    //must show the array is empty if it has nth
    //must show if the number is in the array
    //must print that the number has been removed
    int i=0, j=0; 
    int tempSize=*size;
    if (tempSize>0){
        for(i=0; i<tempSize; i++){
            if (ar[i] == num){
               for (j=i; j < tempSize; j++){
                   ar[j]=ar[j+1];
               }
               printf("The integer is removed \n");
               tempSize--;
            }
        }
        if (tempSize == *size){
            printf("The number is not in the array \n");
        }
        else{
        *size = tempSize;
        }
    }
    else {
        printf("The array is empty\n");
    }
}