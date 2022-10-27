/*
    Write a program to calculate the length of the string. (without using built-in method)
*/

#include<stdio.h>

int main ()
{
    char Str_arr[1000];
    int i;
    
    printf("\nEnter a string: ");
    fgets(Str_arr,1000,stdin);
    
    for (i = 0; Str_arr[i]; i++);
   
    printf("\nLength of string is: %d \n ",i);
    return 0;
}