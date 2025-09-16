#include <stdio.h>
#include <string.h>
#include <ctype.h>

    char str [20] ;
    char tempStr [20] ;
    int N = 0 ;
int main() {
    printf( "Enter word : " ) ;
    scanf( "%s" , str ) ;
    strcpy( tempStr , str ) ;
    //printf("%s",str);
    N = strlen( str ) ;
    int n = N ;

    for( int i = 0 ; i < N ; i++ ){
        tempStr[i] = tolower( tempStr [i] ) ; 
        str [i] = tolower( tempStr [n-1] ) ;
        n--;
    }
    if( strcmp( tempStr , str ) == 0 ) {
        printf( "Pass." ) ;
    } else{
        printf( "Not Pass." ) ;
    }
    return 0 ;
}