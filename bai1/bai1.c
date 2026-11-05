#include <stdio.h>

int main()
{
    double arr[100];
    int n; // number of elements
    int m;
    printf("Nhap vao so phan tu: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%lf", &arr[i]);
    }
    printf("Nhap vao m: ");
    scanf("%d", &m);
    double temp = (arr[0] - m)*(arr[0] - m);
    int index = 0;
    for(int i = 1; i < n; i++)
    {
        if((arr[i] - m)*(arr[i] - m) < temp )
        {
            temp = (arr[i] - m)*(arr[i] - m);
            index = i;
        }
    }
    printf("%.2lf o vi tri %d gan %d", arr[index], index, m);
}
