#include <stdio.h>
#include <ctype.h>

double atof(char s[]);

int main()
{
    // here we have to pass the argument like this 123.43e-6
    char s[10] = "123.45e-6";
    double res = atof(s);

    printf("result is %0.9f", res);
    return 0;
}

double atof(char s[])
{
    int powerVal = 0, powersign = 1 , power = 1;
    float val = 0.0 ;
    int i;

    for (int i = 0; isspace(s[i]); i++)
        ;

    for (i; isdigit(s[i]); i++)
    {
        val = val * 10 + s[i] - '0';
    }

    if(s[i]== '.'){
        float decimal = 1 ;
        i++ ;
        for(i ; isdigit(s[i]) ; i++){
            val = val * 10 + s[i] - '0';
            decimal *= 10.0 ;
        }
        val = val / decimal ;
    }

    if (s[i] == 'e' || s[i] == 'E')
    {
        i++;
        if (s[i] == '-')
        {
            powersign = -1;
            i++;
        }
    }else{
        return val ;
    }

    for (i; isdigit(s[i]); i++)
    {
        powerVal = powerVal * 10 + s[i] - '0';
    }

    for(int j = 0 ; j < powerVal ;j++){
        power *= 10.0 ;
    }

    if (powersign == -1)
    {
        return val / power;
    }

    return val * power;
}