#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    printf("ENTER THE MARKS YOU RECIVED\n");
    scanf("%d",&s);
    if(s<=100&&s>=85)
    {
        printf("your grade is A");
    }
    if(s<=84&&s>=70)
    {
        printf("your grade is B");
    }
    if(s<=69&&s>=55)
    {
        printf("your grade is C");
    }
    if(s<=54&&s>=40)
    {
        printf("your grade is D");

    }
    if(s<40)
    {
        printf("your grade is F");
    }
}
