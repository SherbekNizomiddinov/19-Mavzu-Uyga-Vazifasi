#include <stdio.h>

void count_number(char arr[])
{
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i] >= '0' && arr[i] <= '9')
        {
            count++;
        }
    }
    printf("%i - ta raqam ",count);
}
int main()
{
    char arr[100];
    printf("Biron bir matn kiriting - ");
    fgets(arr, sizeof(arr), stdin);


    count_number(arr);

    return 0;
}