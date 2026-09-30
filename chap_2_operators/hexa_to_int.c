#include <stdio.h>
#include <math.h>

int htoi(char hex[]);

int main(){
    char x[10] = "0xAF236" ;

    htoi(x); 
    return 0 ;
}

int htoi(char hex[]){
    int i = 0 , j = 0 ;
    while(hex[i] != '\0') i++ ;

    int totalVal = 0 ;
    for(i = i -1 , j = 0; i >= 0 ; i-- , j++){
        if(hex[i] == 'x' || hex[i] == 'X') break; 

        int numVal = 0 ;
        if(hex[i] >= 'A' && hex[i] <= 'F'){
            int diff = hex[i] - 'A'  ;
            numVal = 10 + diff ;
        }else if(hex[i] >= 'a' && hex[i] <= 'f'){
            // ascii value of a is 97 
            int diff = hex[i] - 'a' ;
            numVal = 10 + diff ;
        }else{
            numVal = hex[i] - '0' ;
        }

        int factor = pow(16,j) ;
        totalVal += numVal*factor ;        
        // calculation 
    }

    printf("Total val is %d\n", totalVal) ;

    return totalVal ;
}