#include <stdio.h>

int main() {
    int i , j , x ;

    printf( "กรุณาใส่ตัวเลข: " ) ;
    scanf( "%d" , &i ) ;
    
    
    do{
        x = 1 ;
        j = 2 ;
        do{
            if( j < i && i % j == 0 ) {
                x = 0 ;
            }// end if
            j++ ;
        } while ( j < i ) ;

        if(x && i >= 2 ) {
            printf( "%d ", i ) ;
        }

        i-- ;
    } while( i >= 2 ) ;// end do while

    return 0 ;
}// end function
