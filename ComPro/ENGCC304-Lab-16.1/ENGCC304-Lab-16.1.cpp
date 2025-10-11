#include <stdio.h>

int main() {
    int arr[] = {15, 7, 25, 3, 73, 32, 45} ;
    int n = sizeof( arr ) / sizeof( arr[0] ) ;
    int i , j , key , pos32 ;

    // แสดงข้อมูลเดิม
    printf( "Old Series : " ) ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "%d" , arr[i] ) ;
        if( i < n-1 ) printf( ", " ) ;
    }
    printf( "\n" ) ;

    // เรียงลำดับแบบ Insertion Sort
    for( i = 1 ; i < n ; i++ ) {
        key = arr[i] ;
        j = i - 1 ;
        while( j >= 0 && arr[j] > key ) {
            arr[j+1] = arr[j] ;
            j-- ;
        }
        arr[j+1] = key ;
    }

    // แสดงข้อมูลหลังเรียงลำดับ
    printf( "New Series : " ) ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "%d" , arr[i] ) ;
        if( i < n-1 ) printf( ", " ) ;
    }
    printf( "\n" ) ;

    // หาตำแหน่งของ 32
    for( i = 0 ; i < n ; i++ ) {
        if( arr[i] == 32 ) {
            pos32 = i ;
        }
    }
    printf( "Pos of 32 : %d\n" , pos32 ) ;

    return 0 ;
}//end function