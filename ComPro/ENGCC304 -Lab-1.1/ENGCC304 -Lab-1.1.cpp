#include <stdio.h>

int main() {
    int a, b, c ;
    int sum ;

    printf( "Enter number : " ) ;
    scanf( "%d %d %d" , &a, &b, &c ) ;
    sum = a + b + c ;
    printf( "Answer = %d\n" , sum ) ; 

    return 0 ;
}
