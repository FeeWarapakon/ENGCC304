#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str [20] ;
    char tempStr [20] ;
    int N = 0 ;

    printf( "Enter word : " ) ;
    scanf( "%s" , str ) ;
    strcpy( tempStr , str ) ;
    N = strlen( str ) ;
    int n = N ;

    for( int i = 0 ; i < N ; i++ ){  // แปลงเป็นตัวพิมพ์เล็ก
        tempStr[i] = tolower( tempStr [i] ) ; 
        str [i] = tolower( tempStr [n-1] ) ;
        printf( "%c" , str [i] ) ;
        n--;
    }// end for
    if( strcmp( tempStr , str ) == 0 ) {// เปรียบเทียบข้อความ
        printf( "Pass." ) ;
    } else{ 
        printf( "Not Pass." ) ;
    }// end if
    return 0 ;
} // end function