#include <stdio.h>
#include <math.h>

int isArmstrong( int n ) {
    int digits = ( n == 0 ) ? 1 : ( int )log10( n ) + 1 ;
    int temp = n ;
    int sum = 0 ;

    while ( temp != 0 ) {
        int last = temp % 10 ;
        sum += pow( last, digits ) ;
        temp /= 10 ;
    }

    return sum == n ;
}

int main( void ) {
    int n ;
    printf( "Enter Number: " ) ;
    scanf( "%d" , &n ) ;

    if ( isArmstrong( n ) )
        printf( "Pass.\n" ) ;
    else
        printf( "Not Pass.\n" ) ;

    return 0 ;
}
