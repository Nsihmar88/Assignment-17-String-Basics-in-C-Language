// Write a C program to sort a string array in ascending order.

#include<stdio.h>

int main ()
{
    char Str_arr[1000],temp;
    int i,j,count;
    
    printf("\nEnter a string: ");
    fgets(Str_arr,1000,stdin);
    
    //Str_arr[6]='\0';
    for (i = 0; Str_arr[i]; i++);
    count=i-2;
    //printf("count %d",count);
    
    for (i = 0; i<count; i++)
    {
        for (j = i+1; j<=count; j++)
        {
            if (Str_arr[i]>Str_arr[j])
            {
                temp = Str_arr[j];
                Str_arr[j] = Str_arr[i];
                Str_arr[i] = temp;
            }
        }
    }
    printf("\nstring array in ascending order: %s",Str_arr);
    return 0;
}