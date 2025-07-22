#include <stdio.h>

int main() {
    int score = 0 ;
    int result ;
    printf( "Please enter your score: " ) ;
    result = scanf( "%d" , &score ) ;

    if ( result != 1 ) {
        printf( "Please enter number only.\n" ) ;
        while ( getchar() != '\n') ;
        return 1 ;
    }//end if
    printf( "Grade: " ) ;
    if  (score >= 80 ) {
        printf( "A" ) ;
    } else if  (score >= 75 && score < 80 ) {
        printf ("B+" ) ;
    } else if ( score >= 70 && score < 75 ) {
        printf( "B" ) ;
    } else if ( score >= 65 && score < 70 ) {
        printf( "C+" ) ;
    } else if ( score >= 60 && score < 65 ) {
        printf( "C" ) ;
    } else if ( score >= 55 && score < 60 ) {
        printf( "D+" ) ;
    } else if ( score >= 50 && score < 55 ) {
        printf( "D" ) ;
    } else {
        printf( "F" ) ;
    }//end else
    return 0 ;
}//end function
