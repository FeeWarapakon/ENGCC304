 #include <stdio.h>
 #include <math.h>

int main () {
    int N ;
    printf( "Enter N : " ) ;
    scanf("%d", &N) ;
    
    int value[N] ;
    int Sqrt ;

  

    for ( int i = 0 ; i < N ; i++ ) {
        printf( "Enter value[%d] : ", i ) ;
        scanf( "%d", &value[i] ) ;   
    }

    printf( "Index :\t" ) ;
    for ( int i = 0 ; i < N ; i++ ) {
        printf( "%d\t", i ) ;
    } 
    printf( "\n" ) ;

    printf( "Array :\t" ) ;
    for ( int i = 0 ; i < N ; i++ ) {
        
        if (value[i] % 2 == 1&& value[i] != 1 ) { // กรณีเลขคี่
          
            Sqrt = ( int )sqrt( value[i] ) ;
            for ( int j = Sqrt ; j > 0 ; j-- ) {
                if ( value[i] % j == 0 && j != 1 ) {
                    printf( "#\t" ) ;
                    break ;
                } else if ( j == 2 ) {
                    printf( "%d\t" , value[i] ) ;
                }

            }  
        } 
        if (value[i] % 2 == 0 && value[i] != 2 ){ // กรณีเลขคู่
            printf( "#\t" );
        } else if ( value[i] == 2 ) {
            printf( "%d\t" , value[i] ) ;
        }  
    }

    return 0 ;
}  
