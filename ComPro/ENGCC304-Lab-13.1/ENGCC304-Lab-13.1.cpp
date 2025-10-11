#include <stdio.h>

// ประกาศฟังก์ชันล่วงหน้า
int findMin( int a[] , int size ) ;
int findMax( int a[] , int size ) ;

int main() {
    int a[100] ;
    int count = 0 ;
    char ch ;

    printf( "Enter value:\n" ) ;

    // รับค่าจากผู้ใช้ในบรรทัดเดียว
    do {
        scanf( "%d" , &a[count] ) ;
        count++ ;
        ch = getchar() ;
    } while ( ch != '\n' && ch != EOF ) ;

    // แสดงผล Index
    printf( "Index: " ) ;
    for ( int i = 0 ; i < count ; i++ ) {
        printf( "%d " , i ) ;
    }

    printf( "\nArray: " ) ;
    for ( int i = 0 ; i < count ; i++ ) {
        printf( "%d " , a[i] ) ;
    }

    printf( "\n\nMin : %d\n" , findMin( a, count ) ) ;
    printf( "Max : %d\n" , findMax( a, count ) ) ;

    return 0 ;
}

// ฟังก์ชันหาค่าน้อยที่สุด
int findMin( int a[], int size ) {
    int min = a[0] ;
    for ( int i = 1 ; i < size ; i++ ) {
        if ( a[i] < min )
            min = a[i] ;
    }
    return min ;
}

// ฟังก์ชันหาค่ามากที่สุด
int findMax( int a[] , int size ) {
    int max = a[0] ;
    for ( int i = 1 ; i < size ; i++ ) {
        if ( a[i] > max )
            max = a[i] ;
    }
    return max ;
}//end function