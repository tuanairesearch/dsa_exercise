#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void deleteArray(int arr[], int* n, int value, int index, int* assign)
{
    *assign = 0;
    if(index < 0 || index > (*n)-1)
        return;
    for(int i = index; i < (*n) - 1; i++)
    {
        (*assign)++;
        arr[i] = arr[i + 1];
    }
    (*n)--;
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
        arr[i] = min + rand()%(max - min + 1);
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
    int assign;

    for(int i = 0; i < 3; i++)
    {
        int freq[11] = {}; // khoi tao bang tang so va gan tat ca gia tri bang 0
        for(int j = 0; j < k[i]; j++)
        {
            int n = 10;
            initializeArray(arr, n, min, max);
            int idx = rand()%10;
            deleteArray(arr, &n, k[i], idx, &assign);
            freq[assign]++;
        }

        printf("k = %d\n", k[i]);
        printf("Assignments Table\n");
        printf("assign  |  frequency\n");
        for(int i = 0; i < 10; i++)
        {
            printf("%6d  |  %9d\n", i, freq[i]);
        }

        float sum = 0.0;
        for(int i = 0; i < 10; i ++)
        {
            sum += i * freq[i];
        }
        sum /= (float)k[i];
        printf("Average = %f\n\n", sum);
    }
    return 0;
}
