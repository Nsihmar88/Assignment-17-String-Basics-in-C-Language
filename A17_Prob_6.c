// Write a program to reverse a string.

#include<stdio.h>

int main ()
{
    char Str_arr[1000],temp,Str_arr1[1000];
    int i,j,k=0;
    
    printf("\nEnter a string: ");
    fgets(Str_arr,1000,stdin);
    
    for (j = 0; Str_arr[j]; j++);
    printf("\nString in reverse: ");
    for (i=j-1; i >= 0; i--)
    {
        temp = Str_arr[i];
        Str_arr1[k] = temp;
        k++;  
    }
    printf("%s",Str_arr1);
    printf("\n ");
    return 0;
}