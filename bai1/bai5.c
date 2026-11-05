#include <stdio.h>

void s1_to_s2(char s1[], char s2[])
{
    int i;
    for(i = 0; s1[i] != '\0'; i++)
        s2[i] = s1[i];
    s2[i] = '\0';
}

int main()
{
    char arr_s[100][100];
    int n, m; // n = number of elements, m = length of each str
    int idx; // location to insert
    char s[100];

    scanf("%d %d", &n, &m);
    int c;
    while((c = getchar() != '\n') && c != EOF);
    for(int i = 0; i < n; i++)
    {
        gets_s(arr_s[i], 100);
    }
    scanf("%d", &idx);
    while((c = getchar() != '\n') && c != EOF);
    gets_s(s, 100);

    n++;
    for(int i = n - 1; i > idx; i--)
    {
        s1_to_s2(arr_s[i-1], arr_s[i]);
    }
    s1_to_s2(s, arr_s[idx]);

    printf("\n");
    for(int i = 0; i < n; i++)
    {
        printf("%s\n",arr_s[i]);
    }
}
