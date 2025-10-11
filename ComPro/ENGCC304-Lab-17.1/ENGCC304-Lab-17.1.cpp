#include <stdio.h>
#include <string.h>

typedef struct {
    int id ;
    char title[100] ;
    char author[100] ;
    int year ;
} Book ;

void addBook( Book arr[] , int *cnt ) ;
void searchBook( Book arr[] , int cnt ) ;
void showBooks( Book arr[] , int cnt ) ;

int main() {
    Book library[100] ;
    int count = 0 ;
    int option ;

    while(1) {
        printf( "\n=== Library Menu ===\n" ) ;
        printf( "1. Add a new book\n" ) ;
        printf( "2. Find a book by title\n" ) ;
        printf( "3. Show all books\n" ) ;
        printf( "4. Quit\n" ) ;
        printf( "Enter your choice: " ) ;
        scanf( "%d" , &option ) ;
        getchar() ; // กำจัด \n ค้างใน buffer

        if( option == 1 ) {
            addBook( library , &count ) ;
        } else if( option == 2 ) {
            searchBook( library , count ) ;
        } else if( option == 3 ) {
            showBooks( library , count ) ;
        } else if ( option == 4 ) {
            printf( "Goodbye!\n" ) ;
            break ;
        } else {
            printf( "Invalid choice! Try again.\n" ) ;
        }
    }

    return 0 ;
}

void addBook( Book arr[], int *cnt ) {
    printf( "Enter Book ID: " ) ;
    scanf( "%d" , &arr[*cnt].id ) ;
    getchar() ;

    printf( "Enter Title: " ) ;
    fgets( arr[*cnt].title , sizeof( arr[*cnt].title ) , stdin ) ;
    arr[*cnt].title[strcspn( arr[*cnt].title , "\n" )] = 0 ;

    printf( "Enter Author: " ) ;
    fgets( arr[*cnt].author , sizeof( arr[*cnt].author ) , stdin ) ;
    arr[*cnt].author[strcspn( arr[*cnt].author, "\n" )] = 0 ;

    printf( "Enter Year: " ) ;
    scanf( "%d" , &arr[*cnt].year ) ;
    getchar() ;

    (*cnt)++ ;
    printf( "Book successfully added!\n" ) ;
}

void searchBook( Book arr[] , int cnt ) {
    char t[100] ;
    int found = 0 ;

    printf( "Enter book title to search: " ) ;
    fgets( t, sizeof( t ) , stdin ) ;
    t[strcspn( t , "\n" )] = 0 ;

    for( int i = 0 ; i < cnt ; i++ ) {
        if( strcmp( arr[i].title , t ) == 0 ) {
            printf( "\nBook ID: %d\nTitle: %s\nAuthor: %s\nYear: %d\n" ,
                   arr[i].id , arr[i].title , arr[i].author , arr[i].year ) ;
            found = 1 ; 
            break ;
        }
    }

    if( !found ) {
        printf( "Book not found.\n" ) ;
    }
}

void showBooks( Book arr[] , int cnt ) {
    if( cnt == 0 ) {
        printf( "No books available.\n" ) ;
        return ;
    }

    for( int i = 0 ; i < cnt ; i++ ) {
        printf( "\nBook ID: %d\nTitle: %s\nAuthor: %s\nYear: %d\n" ,
               arr[i].id , arr[i].title , arr[i].author , arr[i].year ) ;
    }
}//end function