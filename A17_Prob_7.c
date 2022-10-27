// Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>

int main ()
{
    char Str_arr[1000];
    int i,j,special_characters=0,alphabets=0,number=0;
    
    printf("\nEnter a string: ");
    fgets(Str_arr,1000,stdin);
    
    for (i=0; Str_arr[i]; i++)
    {
         if (Str_arr[i]>='A' && Str_arr[i]<='Z' || Str_arr[i]>='a' && Str_arr[i]<='z')
            alphabets++;
         else if (Str_arr[i]>='0' && Str_arr[i]<='9')
            number++;
         else
            special_characters++;
         
    }
    printf("\nalphabets: %d, number: %d, special_characters: %d",alphabets, number, special_characters-1);
    printf("\n ");
    return 0;
}