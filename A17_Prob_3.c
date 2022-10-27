// Write a program to count vowels in a given string.

#include<stdio.h>

int main ()
{
    char Str_arr[1000];
    int i, vowel=0;
    
    printf("\nEnter a string: ");
    fgets(Str_arr,1000,stdin);
    
    for (i = 0; Str_arr[i]; i++)
    {
        if (Str_arr[i]=='a' || Str_arr[i]=='e' || Str_arr[i]=='i' || Str_arr[i]=='o' || Str_arr[i] == 'u' || Str_arr[i]=='A' || Str_arr[i]=='E' || Str_arr[i]=='I' || Str_arr[i]=='O' || Str_arr[i]=='U')
        {
            vowel++;
        }        
    }   
    printf("\nVowels in given string are: %d. \n ",vowel);
    return 0;
}