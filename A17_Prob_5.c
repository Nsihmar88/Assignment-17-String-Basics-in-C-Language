// Write a program to convert a given string into lowercase.

#include<stdio.h>

int main ()
{
    char Str_arr[1000];
    int i;
    
    printf("\nEnter a string: ");
    fgets(Str_arr,1000,stdin);
    
    for (i = 0; Str_arr[i]; i++)
    {
        if (Str_arr[i]>='A' && Str_arr[i]<='Z')
        {
            Str_arr[i] = Str_arr[i] + 32;
        }                
    }
    printf("\nString in uppercase: %s",Str_arr);
    printf("\n ");
    return 0;
}