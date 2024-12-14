#include <stdio.h>
#include <string.h>

void palindroma(char arr[])
{
    int length = strlen (arr) - 1, count = 0;
    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i] == arr[length - i - 1])
        {
            count++;
        }
    }
    if(count == length)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

int main()
{
    char arr[100];

    printf("So'z kiriting - ");

    fgets(arr, sizeof(arr), stdin);

    palindroma(arr);
}