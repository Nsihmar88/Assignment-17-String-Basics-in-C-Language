// Write a program to count the occurrence of a given character in a given string.

#include<stdio.h>

int main ()
{
    char Str_arr[1000],character;
    int i,Result=0;
    
    printf("Enter a string: ");
    fgets(Str_arr,1000,stdin);

    printf("\nEnter a character to count the occurrence in string: ");
    scanf("%c",&character);
    
    for (i = 0; Str_arr[i]; i++)
    {
        if (Str_arr[i]==character)
            Result++;        
    }
   
    printf("\nCharacter occurrence in string is: %d \n ",Result);
    return 0;
}