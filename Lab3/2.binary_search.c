#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int binarySearch(int a[], int n, int value, int *comps)
{
    (*comps) = 0;
    int lower_bound = 0;
    int upper_bound = n - 1;
    while (lower_bound <= upper_bound)
    {
        (*comps)++;
        int midpoint = (lower_bound + upper_bound) / 2;
        if(value < a[midpoint])
        {
            upper_bound = midpoint - 1;
        }
        else if(value > a[midpoint])
        {
            lower_bound = midpoint + 1;
        }
        else
        {
            return midpoint;
        }

    }
}

void print_arr(int arr[], int n)
{
    printf("\nIn mang:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

void initializeArray(int arr[], int n, int min, int max)
{
    for(int i = 0; i < n; i++)
    {
        arr[i] = min + rand()%(max - min + 1)/5;
        min = arr[i];
    }
}

int main()
{
    // choose random seed
    time_t t;
    srand((unsigned)(&t));

    int k[] = {100, 1000, 10000};
    int min = -1000, max = 1000;
    int arr[11];
    int comps;

    for(int i = 0; i < 3; i++)
    {
        int freq[10] = {};
        for(int j = 0; j < k[i]; j++)
        {
            int n = 10;
            initializeArray(arr, n, min, max);
            int idx = rand()%10;
            binarySearch(arr, 10, arr[idx], &comps);
            freq[comps]++;
        }

        printf("k = %d\n", k[i]);
        printf("Comparison Table\n");
        printf("comps  |  frequency\n");
        for(int i = 1; i < 5; i++) // range[1, log(2,10) = 3,43 ~ 4]
        {
            printf("%5d  |  %9d\n", i, freq[i]);
        }

        float sum = 0.0;
        for(int i = 1; i < 5; i ++)
        {
            sum += i * freq[i];
        }
        sum /= (float)k[i];
        printf("Average = %f\n\n", sum);
    }
    return 0;
}
