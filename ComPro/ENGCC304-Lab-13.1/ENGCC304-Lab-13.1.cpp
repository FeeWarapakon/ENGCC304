#include <stdio.h>

void swapNumbers( int *a, int *b ) {
    int *arr[2] = {a, b} ;
    for( int i = 0 ; i < 1 ; i++ ) {
        int temp = *arr[i] ;
        *arr[i] = *arr[i+1] ;
        *arr[i+1] = temp ;
    }
}

int main() {
    int num1, num2 ;
    int *ptr1 = &num1 , *ptr2 = &num2 ;

    printf( "Enter num1 : " ) ;
    scanf( "%d" , &num1 ) ;
    printf( "Enter num2 : " ) ;
    scanf( "%d" , &num2 ) ;

    printf( "Before swap (num1 & num2) : %d, %d\n" , num1, num2 ) ;

    swapNumbers( ptr1, ptr2 ) ;

    printf( "After swap (num1 & num2) : %d, %d\n ", num1, num2 ) ;

    return 0 ;
}//end function