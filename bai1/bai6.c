#include <stdio.h>

void chen(double arr[], double val, int idx, int *n)
{
    (*n)++;
    for(int i = *n - 1; i > idx; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[idx] = val;
}

int main()
{
    double arr[100];
    int n;
    int num_insert;

}
