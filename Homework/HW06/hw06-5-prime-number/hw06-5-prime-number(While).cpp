#include <stdio.h>

int main() {
    int num , i , j , จำนวนเฉพาะ ;

    printf( "กรุณาใส่ตัวเลข: " ) ;
    scanf( "%d" , &num ) ;
    i = num ;

    while( i >= 2 ) {
        จำนวนเฉพาะ = 1 ; 
        j = 2 ;
        while( j < i  ) {
            if( i % j == 0 ) {
                จำนวนเฉพาะ = 0 ;
            }
            j++ ;
        }
        if( จำนวนเฉพาะ ) {
            printf( "%d ", i ) ; 
        }
        i-- ;
    }

    return 0 ;
}
