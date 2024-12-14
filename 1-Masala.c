#include<stdio.h>

void max_count(char arr[])
{

  int count = 0;
  for (int i=0; arr[i] != '\0'; i++)
  {
      if (arr[i] >= 'A' && arr[i] <= 'Z')
  {
      count++;
  }

  }


    printf("Natija = %d ta katta harf bor :)", count);

 }

int main()
{

   char arr[100];

   printf("Matinni kiriting: "); 

   fgets(arr, sizeof(arr), stdin);

   max_count(arr);

}