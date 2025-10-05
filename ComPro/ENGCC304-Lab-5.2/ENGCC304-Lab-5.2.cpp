#include <stdio.h>

int main() {
    float score ;
    int result ;

    printf( "enter score : " ) ;
    result = scanf( "%f" , &score ) ;  

    if ( result != 1 ) {
        printf( "please enter number only.\n" ) ;
    }//end if
    else if ( score < 50 ) {
        printf( "F !\n" ) ;
    }//end if
    else if ( score >= 50 && score < 55 ) {
        printf( "D !\n" ) ;
    }//end if
    else if ( score >= 55 && score < 60 ) {
        printf( "D+ !\n" ) ;
    }//end if
    else if ( score >= 60 && score < 65 ) {
        printf ("C !\n" ) ;
    }//end if
    else if ( score >= 65 && score < 70 ) {
        printf( "C+ !\n" ) ;
    }//end if
    else if ( score >= 70 && score < 75 ) {
        printf( "B !\n" ) ;
    }//end if
    else if ( score >= 75 && score < 80 ) {
        printf( "B+ !\n" ) ;
    }//end if
    else if ( score >= 80 ) {
        printf( "A !\n" ) ;
    }//end if

    return 0 ;
}//end function