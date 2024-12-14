#include <stdio.h>

void change_alpha(char arr[])
{
    printf("Natija = ");
    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
        {
            putchar(arr[i] - 32);
        }
        else if(arr[i] >= 'A' && arr[i] <= 'Z')
        {
            putchar(arr[i] + 32);
        }
        else
        {
            putchar(arr[i]);
        }
    }
}

int main()
{
    char arr[100];
    
    printf("Biron bir matn kiriting - ");
    fgets(arr, sizeof(arr), stdin);

    change_alpha(arr);

    return 0;
}