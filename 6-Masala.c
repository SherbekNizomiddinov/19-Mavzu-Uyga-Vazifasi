#include <stdio.h>
#include <string.h>

void find_world(char arr[], char arr2[])
{
    int count = 0, j = 0;
    for(int i = 0; arr2[i + 1] != '\0'; i++)
    {
        for(j; arr[j] != '\0'; j++)
        {
            if(arr2[i] == arr[j])
            {
                count++;
                j++; break;
            }
            else
            {
                count = 0;
                i = 0;
            }
        }
    }
    if(count == strlen(arr2) - 1)
    {
        printf("Bu so'z seriyada mavjud = %s", arr2);
    }
    else
        {
            printf("Bu so'z seriyada mavjud emas");
        }
}

int main()
{
    char arr[100], arr2[100];

    printf("Matn kiriting = ");

    fgets(arr, sizeof(arr), stdin);

    printf("So'z kiriting = ");

    fgets(arr2, sizeof(arr2), stdin);

    find_world(arr, arr2);
    return 0;
}