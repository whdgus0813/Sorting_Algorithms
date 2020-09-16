#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void selectionsort(int array[], int n);

int main()
{
    int n;
    int *array;
    
    printf("How many elements? ");
    scanf("%d", &n);
    array = (int*)malloc(sizeof(int) * n);
    printf("Enter %d elements : ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", array + i);
    }

    selectionsort(array, n);

    printf("After sorting by selection sort : ");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort(int array[], int n)
{
    int smallest_index = 0;

    for(int i = 0; i < n - 1; i++) {
        smallest_index = i;
        for(int j = i + 1; j < n; j++) {
            if(array[smallest_index] > array[j]) {
                smallest_index = j;
            }
        }
        swap(array + i, array + smallest_index);
    }
}