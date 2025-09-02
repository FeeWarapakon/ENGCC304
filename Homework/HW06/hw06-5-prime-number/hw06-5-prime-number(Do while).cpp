#include <stdio.h>

int main() {
    int num , i , j , จำนวนเฉพาะ ;

    printf( "กรุณาใส่ตัวเลข: " ) ;
    scanf( "%d" , &num ) ;
    i = num ;
    
    do{
        จำนวนเฉพาะ = 1 ;
        j = 2 ;
        do{
            if( j < i && i % j == 0 ) {
                จำนวนเฉพาะ = 0 ;
            }// end if
            j++ ;
        } while ( j < i ) ;

        if( จำนวนเฉพาะ && i >= 2 ) {
            printf( "%d ", i ) ;
        }

        i-- ;
    } while( i >= 2 ) ;// end do while

    return 0 ;
}// end function
