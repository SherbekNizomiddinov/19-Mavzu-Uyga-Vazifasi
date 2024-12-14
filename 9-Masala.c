#include <stdio.h>
#include <ctype.h>
#include <string.h>

void parol(char arr[])
{
    int count = 0, count1 = 0, count2 = 0, count3 = 0;
    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(islower(arr[i]))
        {
            count++;
        }
        else if(isupper(arr[i]))
        {
            count1++;
        }
        else if(isupper(arr[i]))
        {
            count2++;
        }
        else if(isupper(arr[i]))
        {
            count3++;
        }
    }
    if(count && count1 && count2 && count3 && (strlen(arr) - 1 >= 8))
    {
        printf("Parol Xavfsiz ");
    }
    else
    {
        printf("Parol Xavfsiz emas ");
    }
}

int main()
{
    char arr[100];

    printf("Parol kiriting = ");
    scanf("%s", arr);


    parol(arr); 
}
