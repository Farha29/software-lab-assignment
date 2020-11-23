#include<stdio.h>

int main()
{
    int n;

    printf("number please: ");
    scanf("%d",&n);

    if(n>0)
    {
        printf("\nThis is A Positive Number.\n");
    }
    else if(n<0)
    {
        printf("\nThis is A Negative Number.\n");
    }

    return 0;
}
