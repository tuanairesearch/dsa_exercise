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
    srand((unsigned)time(&t));

    float arr[10];
    int k[] = {100, 1000};
    int comp = 0;

    for(int i = 0; i < 2; i++)
    {
        int freq[11] ={0};
        for(int j = 0; j < k[i]; j++)
        {
            initializeArray(arr, 10);
            minIndex(arr, 10, &comp);
            freq[comp]++;
        }
        printf("k = %d\n", k[i]);
        printf("Comparison table\n");
        printf("comps   |  frequency\n");
        for(int i = 1; i < 11; i++)
        {
            printf("%4d  |  %9d\n", i, freq[i]);
        }
    }

    return 0;
}
