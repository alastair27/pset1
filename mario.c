#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // height
    int n;
    do
    {
        printf("Height: ");
        n = GetInt();
    }
    while (n<0 || n>23);
    
    // pyramid
    for (int j=0;j<n;j++)
    {    
        for (int i = 0;i < n-j-1;i++ )
        {
            printf(" ");
        }
        for (i = 0;i < j+2;i++ )
        {
            printf("#");
        }
        {
            printf("\n");    
        }
    }
}
