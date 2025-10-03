#include <stdio.h>


int main() {
    int D ;
    printf( "Enter Day : " ) ;
    scanf( "%d" , &D ) ;
    
    int Seconds = 24 * 60 * 60 ;
    printf( "%d days = %d seconds\n" , D , D * Seconds ) ;
    return 0 ;
}//end function
