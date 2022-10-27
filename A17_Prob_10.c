// Write a program in C to Find the Frequency of Characters.

#include<stdio.h>

int main ()
{
    char Str_arr[1000],result[2000];
    int i,j,count,feq;
    
    printf("\nEnter a string: ");
    fgets(Str_arr,1000,stdin);

    for (i = 0; Str_arr[i]; i++);
    count=i-2;
    //printf("count %d",count);
    
    printf("\nCharacters Entered by user: [ ");
    for (i = 0; i <= count; i++)
    {
        result[i]=Str_arr[i];
        printf("%c ",Str_arr[i]);    
    }
    printf("]");
    
    for (i = 0; i < (count-1); i++)
    {
        feq=1;
        for ( j = i+1; j <= count; j++)
        {
            if (result[i]==result[j])
            {
                feq++;
                result[j] = '\0';
            }
        }
        if(result[i]!='\0')
            printf("\nfrequency of Character %c is %d",result[i],feq);
    }
    
    return 0;
}