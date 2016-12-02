#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Minutes: ");
    int m = GetInt();
    
    int b = m * 12;
    
    printf("Bottles: %i\n", b);
}