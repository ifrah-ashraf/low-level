#include <stdio.h>

int main()
{
    // 1. Declare a FILE pointer and open the file in read mode ("r")
    FILE *fptr = fopen("example.txt", "r");

    // 2. Always check if the file failed to open
    if (fptr == NULL)
    {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // 3. Create a character buffer to store each line
    char buffer[256];

    // 4. Read and print the file line-by-line until the end (NULL)
    while (fgets(buffer, sizeof(buffer), fptr) != NULL)
    {
        printf("%s", buffer);
    }

    printf("\n");
    // 5. Close the file
    fclose(fptr);

    return 0;
}