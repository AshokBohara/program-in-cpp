//finding reverse number enter by user.
#include<stdio.h>

int main()
{
    int array[10], i;
    
    printf("Enter ten numbers:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    
    printf("Reversed numbers are:\n");
    for(i = 9; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}

