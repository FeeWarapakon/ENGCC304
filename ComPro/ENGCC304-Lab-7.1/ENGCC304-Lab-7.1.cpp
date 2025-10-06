#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int command ;  
    int score ;
    int guess ;
    int answer ; 
    int lower , upper ;

    srand(time(NULL)) ;

    while ( 1 ) {
        printf( "Do you want to play game (1=play,-1=exit) : " ) ;

      
        if ( scanf( "%d" , &command ) != 1 ) {
            printf( "Please enter only 1 or -1.\n\n" ) ;
            while ( getchar() != '\n' ) ;
            continue ;
        }

        if ( command == -1 ) {
            printf( "\nSee you again.\n" ) ;
            break ; 
        } 
        else if ( command == 1 ) {
            score = 100 ;
            answer = rand() % 100 + 1 ;
            lower = 1 ;
            upper = 100 ;

            printf( "\n(Score=%d)\n\n" , score ) ;

            while ( 1 ) {
                printf( "Guess the winning number (%d-%d) :\n" , lower , upper ) ;

                if ( scanf( "%d" ,  &guess ) != 1 ) {
                    printf( "Invalid input. Please enter a number.\n\n" ) ;
                    while ( getchar() != '\n' ) ;
                    continue ;
                }

                if ( guess == answer ) {
                    printf( "\nThat is correct! The winning number is %d.\n\n" , answer ) ;
                    printf( "Score this game: %d\n\n" , score ) ;
                    break ;
                } 
                else if ( guess < answer ) {
                    score -= 10 ;
                    lower = guess + 1 ;
                    printf( "\nSorry, the winning number is HIGHER than %d. (Score=%d)\n\n" , guess , score ) ;
                } 
                else {
                    score -= 10 ;
                    upper = guess - 1 ;
                    printf( "\nSorry, the winning number is LOWER than %d. (Score=%d)\n\n" , guess , score ) ;
                }

                if ( score <= 0 ) {
                    printf( "\nScore this game: 0\nYou ran out of points!\n\n" ) ;
                    break ;
                }
            }
        }
        else {
            printf( "Please enter only 1 or -1.\n\n" ) ;
        }
    }

    return 0 ;
}//end function