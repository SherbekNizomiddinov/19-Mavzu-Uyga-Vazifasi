#include <stdio.h>
#include <ctype.h>

void count_max_alpha(char arr[])
{
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(isupper(arr[i]))
        {
            count++;
        }
    }
    if(count)
    {
        printf("Katta harflar soni %i ta", count);
    }
    else 
    {
        printf("Bironta ham harf yo'q ");
    }

}

int main()
{
    char arr[100];

    printf("Matinni kiriting = ");
    scanf("%s", arr);

    count_max_alpha(arr);

}