#include <stdio.h>

void change_max(char arr[])
{
    printf("Natija = ");
    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
        {
            putchar(arr[i] - 32);
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

    change_max(arr);

    return 0;
}