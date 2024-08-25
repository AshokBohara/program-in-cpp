#include<stdio.h>
int main() 
{
    int i, n, a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) 
	{
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("%d\t", a);
    if (n > 1) 
	{
        printf("%d\t", b);
    }

    for (i = 2; i < n; i++) 
	{  // Loop starts from 2 because the first two terms are already printed
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
    }

    return 0;
}

