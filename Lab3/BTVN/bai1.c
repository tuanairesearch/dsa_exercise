#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int minIndex(float arr[], int n, int *comp)
{
    *comp = 0;
    int minIdx = 0;
    float minVal = arr[0];
    for(int i = 1; i <  n; i++)
    {
        (*comp)++;
        if(arr[i] < minVal)
        {
            minIdx = i;
            minVal = arr[i];
        }
    }
    return minIdx;
}

void print_arr(float arr[], int n)
{
    printf("\nIn mang:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%f ", arr[i]);
    }
    printf("\n");

}

// create random float value from range [-2*n, 2*n]
void initializeArray(float arr[], int n)
{
    int min = -2 * n;
    int max = 2 * n;
    for(int i = 0; i < n; i++)
    {
        arr[i] = min + (max - min)*((float)rand() / RAND_MAX);
    }
}

int main()
{
    time_t t;
    srand((unsigned)(&t));

    float arr[10];
    int k[] = {100, 1000};
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < k[i]; j++)
        {

        }
    }

    return 0;
}
