#include <cs50.h>
#include <stdio.h>

int get_height(string prompt);

int main(void)
{
    int height = get_height("Height: ");
    
        for (int i = 0; i < height + 1; i++)
        {
            for (int period = height; period > i; period--)
            {
                if (i == 0)
                {
                    printf("");
                }
                else
                {
                   printf(" "); 
                }
            }    
            for (int hashes = 0; hashes < i; hashes++)
                {
                    printf("#");
                }
            printf("\n");
        }
}
    

int get_height(string prompt)
{
    int n;
    do 
    {
        n = get_int("%s", prompt);       
    }
    while (n < 1);
    do
    {
        n = get_int("%s", prompt);
    }
    while (n > 8);
    return n;
}
