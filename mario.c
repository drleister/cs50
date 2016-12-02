#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    
    do
    {
        printf("Height: ");
        
        h = GetInt();
    }
    while (h < 0 || h > 23);
    
    if (h == 0)
    {
        printf("");
    }
    
    else
    {
        for (int i = 1; i <= h; i++)
        {
            for (int j = 0; j < h - i; j++)
            {
                printf(" ");
            }
            for (int k = 0; k < i + 1; k++)
            {
                printf("#");
            }
            
            printf("\n");
        }
    }
}