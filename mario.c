#include <stdio.h>
#include <cs50.h>c

int main(void)

{
	// Declare height variable.
	int height = 0;
	
	// Gets height from user, makes sure it is within the required range.
	do {
		printf("Height:");
		height = GetInt();
        if (height == 0)
        {
            return 0;
        }
	} while (height < 1 || height > 23);

    // These loops handle the number of rows, spaces and hash markings.
	for(int row = 0; row < height; row++) 
	{
	    // Prints the spaces.
        for(int space = 0; space < height-row-1; space++)
        {
            printf("%s", " ");
        }
        // Prints the hash marks.
		for(int hash = 0; hash < row+2; hash++)
		{
			printf("#");
		}
		printf("\n");
	}	
	return 0;
}