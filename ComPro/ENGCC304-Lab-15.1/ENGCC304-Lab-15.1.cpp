#include <stdio.h>
#include <ctype.h>
#include <string.h>

// ฟังก์ชันนับจำนวนคำในไฟล์
int countWordsInFile( const char *filename ) {
    FILE *file = fopen( filename, "r" ) ;
    if ( file == NULL ) {
        printf( "ไม่สามารถเปิดไฟล์ %s ได้\n" , filename ) ;
        return -1 ;
    }

    int words = 0 ;
    int inWord = 0 ; // ตัวแปรบอกว่าอยู่ในคำหรือไม่
    char ch ;

    while (( ch = fgetc( file ) ) != EOF ) {
        if ( !isspace( ch ) ) {
            if ( !inWord ) { 
                words++ ;    // เริ่มคำใหม่
                inWord = 1 ; 
            }
        } else {
            inWord = 0 ; // ออกจากคำเมื่อเจอเว้นวรรค
        }
    }

    fclose( file ) ;
    return words ;
}

int main() {
    char filename[100] ;
    printf( "Enter file name:\n" ) ;
    scanf( "%s" , filename ) ;

    int totalWords = countWordsInFile( filename ) ;
        printf( "Total number of words in '%s' : %d words\n" , filename, totalWords ) ;

    return 0 ;
}//end function