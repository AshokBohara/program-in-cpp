//example of enum.

#include<stdio.h>
enum week{sun,mon,tue,wed,thur,fri,sat};
int main()
{
    char selected_day;
    printf("enter day(1-7)\n");
    scanf("%d",&selected_day);
    if(selected_day==sun)
    {
        printf("selected day is sunday");

    }
    else 
	if(selected_day==mon)
    {
        printf("selected day is monday");
    }
    else
    if(selected_day==tue)
    {
        printf("selected day is tuesday");
    }
}
