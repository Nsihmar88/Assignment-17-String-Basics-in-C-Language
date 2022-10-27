// Write a program in C to copy one string to another string.

#include<stdio.h>

int main ()
{
    char Str_arr[1000], Str_arr_copy[1000];
    int i;
    
    printf("\nEnter a string: ");
    fgets(Str_arr,1000,stdin);
    
    for (i = 0; Str_arr[i]; i++)
    {
        Str_arr_copy[i] = Str_arr[i];
    }
   
    printf("\nCopy string is: %s",Str_arr_copy);

    return 0;
}