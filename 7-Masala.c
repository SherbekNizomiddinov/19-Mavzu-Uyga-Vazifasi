#include <stdio.h>
#include <ctype.h>

void undosh_alpha(char arr[], char arr2[])
{
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++)
    {
        for(int i = 0; arr[i] != '\0'; i++)
        {
            if[arr[i] == towler(arr2[j])
            {
                count++;
            }
            if(count != 0)
            {
                printf("%c harf %d marta qatnashgan \n", arr[i], count);
            }
            count = 0;
        }

    }
}

int main()
{
    char arr[6] = "aeiou";

    char arr2[100];

    fgets(arr2, sizeof(arr2), stdin);

    undosh_alpha(arr, arr2);

    return 0;
}