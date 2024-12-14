#include <stdio.h>
#include <ctype.h>
#include <string.h>

void change(char arr[])
{
    printf("Natija = ");
    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i] == '-')
        {
            arr[i] = ' ';
        }
        putchar(arr[i]);
    }
}

int main()
{
    char arr[100];

    printf("Matin kiriting = ");
    scanf("%s", arr);

    change(arr);

}