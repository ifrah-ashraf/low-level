#include <stdio.h>

void my_strcpy(char *destination, char *source) {
    // Your implementation
    while(*source != '\0'){
        *destination++ = *source++ ;
    }
}

int main(void) {
    char source[] = "";
    char destination[20];

    my_strcpy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}