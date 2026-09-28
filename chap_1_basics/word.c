#include <stdio.h>

int main()
{
    char content[100] = "Hello  world\t\tthis is a test\n"
                        "with multiple spaces\tand tabs\n"
                        "and a few\n"
                        "newlines too.";

    // Now in this program I have to count these three things
    // blanks , tabs and newlines

    int i = 0 ;
    int tabs = 0 , blanks = 0 , newlines = 0 ;

    while(content[i] != '\0'){
        if(content[i] == '\n'){
            newlines++ ;
        }else if(content[i] == '\t'){
            tabs++ ;
        }else if(content[i] == ' '){
            blanks++ ;
        }
        i++ ;
    }

    printf("The total tabs here are %d, blanks are %d , newlines are %d\n", tabs , blanks , newlines);


    return 0;
}