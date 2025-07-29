#include <stdio.h>

int main() {
    int N ;
    printf( "Test case: \n" ) ;
    scanf( "%d" , &N ) ;

    if (N % 2 == 1) {
        printf( "Output: \n" , N ) ;
        for ( int i = 1 ; i <= N ; i++ ) {
            printf( "[%d] Hello World\n", i ) ;
        }
    } else {
        printf( "Output: \n" , N ) ;
        for ( int i = 1 ; i <= N ; i++ ) {
            printf( "(%d) Hello World\n", i ) ;
        }
    }
    return 0 ;
}//end function