#include <stdio.h>



int main()
{
    char str[100];
    char c;
    printf("Nhap vao chuoi: ");
    scanf("%s", str);

    // find length
    int len = 0;
    while(str[len] != '\0') len++;
    printf("length = %d\n", len);

    printf("Nhap vao ki tu can tim: ");
    while(getchar()!='\n');
    scanf("%c", &c);

    // 'a' - 'A' = 32
    int index = -1;
    for(int i = 0; i < len; i++)
    {
        if(c == str[i] || c == str[i] - 32 || c == str[i] + 32)
        {
            index = i;
            break;
        }
    }

    // print result
    if(index == -1)
        printf("Khong tim thay");
    else
        printf("Tim thay %c o vi tri %d", c, index);

}
