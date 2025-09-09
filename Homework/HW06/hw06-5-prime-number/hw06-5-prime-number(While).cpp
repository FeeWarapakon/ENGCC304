#include <stdio.h>

int main() {
    int num , i , j , x ;

    printf( "กรุณาใส่ตัวเลข: " ) ;
    scanf( "%d" , &num ) ;
    i = num ;

    while( i >= 2 ) {
        x = 1 ; 
        j = 2 ;
        while( j < i  ) {
            if( i % j == 0 ) {
                x = 0 ;
            }//end if
            j++ ;
        }//end while
        if( x ) {
            printf( "%d ", i ) ; 
        }//end if
        i-- ;
    }//end while

    return 0 ;
}//end function
