#include<stdio.h>
void printArray(int*A, int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("\n %d", A[i]);
}

void InserttionSort(int*A, int n)
{
    int key, i, j;
    for(i=0; i<n; i++)
    {
        key = A[i];
        j = i-1;
        while(j>=0 && A[j]>key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}
int main()
{
    int A[] ={23, 18, 78, 59, 45, 89};
    int n = 6;
    printf("The array before sorting: \n");
    printArray(A,n);
    printf("\n");
    printf("The array after sorting: \n");
    InserttionSort(A,n);
    printArray(A,n);
    return 0;
}
