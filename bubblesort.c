#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void bubblesort(int array[], int n);

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

    bubblesort(array, n);

    printf("After sorting by bubblesort : ");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *b;
    *b = *a;
    *a = temp;
}

void bubblesort(int array[], int n)
{
    int num_swap = 0;

    for(int j = 0; j < n - 1; j++) {
        num_swap = 0;
        for(int i = 0; i < n - 1 - j; i++) {
            if(array[i] > array[i + 1]) {
                swap(array + i, array + i + 1);
                ++num_swap;
            }
        }
        if(num_swap == 0) {
            break;
        }
    }
}