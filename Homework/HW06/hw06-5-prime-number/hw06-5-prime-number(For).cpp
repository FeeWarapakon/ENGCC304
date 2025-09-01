#include <stdio.h>

int main() {
    int num , i , j , จำนวนเฉพาะ ;

    printf( "กรุณาใส่ตัวเลข: " ) ;
    scanf( "%d" , &num ) ;

    for( i = num ; i >= 2 ; i-- ) {
        จำนวนเฉพาะ = 1 ; 
        for( j = 2 ; j < i ; j++ ) {
            if( i % j == 0 ) {
                จำนวนเฉพาะ = 0 ;
            }
        }
        if( จำนวนเฉพาะ ) {
            printf( "%d ", i ) ; 
        }
    }

    return 0 ;
}
