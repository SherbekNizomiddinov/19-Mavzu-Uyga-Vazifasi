#include <stdio.h>
#include <string.h>

void count_word(char arr[])
{
    int count = 1;
    for(int i = 0; i < strlen(arr) - 1; i++)
    {
        if(arr[i] != ' ' && arr[i + 1] == ' ')
        {
            count++;
        }
    }
    printf("So'zlar soni %i ta ",count);
}

int main()
{
    char arr[100];

    printf("Matn kiriting  = ");

    fgets(arr, sizeof(arr), stdin);

    count_word(arr);

}