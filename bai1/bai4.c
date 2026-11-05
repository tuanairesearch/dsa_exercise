#include <stdio.h>
#include <string.h>

int main()
{
    char s[1005];
    char c;
    int idx;
    gets_s(s,1005);
    scanf("%c %d", &c, &idx);
    int length = strlen(s) + 1;
    s[length] = '\0';
    for(int i = length - 1; i > idx; i--)
    {
        s[i] = s[i-1];
    }
    s[idx] = c;
    printf("%s\n", s);
}
