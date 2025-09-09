#include <stdio.h>

int main() {
    int num , i , j , x ;

    printf( "กรุณาใส่ตัวเลข: " ) ;
    scanf( "%d" , &num ) ;

    for( i = num ; i >= 2 ; i-- ) {
        x = 1 ; 
        for( j = 2 ; j < i ; j++ ) {
            if( i % j == 0 ) {
                x = 0 ;
            }//end if
        }//end for
        if( x ) {
            printf( "%d ", i ) ; 
        }
    }//end for

    return 0 ;
}//end function 
