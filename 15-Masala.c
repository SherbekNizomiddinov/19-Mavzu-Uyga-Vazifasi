#include <stdio.h>
#include <string.h>

void count_world_max(char arr[])
{
    int max = 0, min = 1, count = 0;
    for(int i = 0; i < strlen(arr) - 1; i++)
    {
        if(arr[i] != ' ')
        {
            count++;
        }
        else 
        {
            min = (count <= min) ? count : min;
            max = (count <= max) ? count : max;
        }
    }
    printf("So'zlar soni %i ta ",count);
}

int main()
{
    char arr[100];

    printf("Matn kiriting = ");

    fgets(arr, sizeof(arr), stdin);

    count_world_max(arr);
}