#include <stdio.h>

int main() {
    int Num ;

    printf("Enter value: ") ;
    if (scanf( "%d" , &Num ) != 1 ) {
        printf( "Invalid input. Please enter an integer.\n" ) ;
        return 1 ; 
    }

    printf( "Series: " ) ;
    if ( Num % 2 != 0 ) {
        for ( int i = 1 ; i <= Num ; i += 2 ) {
            printf( "%d " , i ) ;
        }
    } else {
        for ( int i = Num ; i >= 0 ; i -= 2 ) {
            printf( "%d " , i ) ;
        }
    }
    return 0 ;
}