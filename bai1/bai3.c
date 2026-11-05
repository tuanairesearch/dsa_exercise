#include <stdio.h>

int comp_str(char s1[], char s2[], int length)
{
    for(int i = 0; i < length; i++)
    {
        if(s1[i] != s2[i])
            return 0; // false
    }
    return 1; // true
}

int main()
{
    char arr_s[100][100];
    int n;
    int k;
    char s[100];
    scanf("%d", &n);
    scanf("%d", &k);
    int c;
    while((c = getchar() != '\n') && (c != EOF));

    for(int i = 0; i < n; i++)
    {
        gets_s(arr_s[i], 100);
    }
    gets_s(s, 100);
    int found = 0;
    for(int i = 0; i < n; i++)
    {
        if(comp_str(s,arr_s[i],k))
        {
            printf("found %s at %d\n", s, i);
            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("Not found\n");
}
