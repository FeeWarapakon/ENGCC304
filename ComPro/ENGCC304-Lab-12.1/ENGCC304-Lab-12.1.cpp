#include <stdio.h>
#include <string.h>

struct Student {
    char Name[20] ;
    char ID[5] ;
    float ScoreSub1 ;
    float ScoreSub2 ;
    float ScoreSub3 ;
    float ScoreSub4 ;
    float ScoreSub5 ;
} typedef S ;

// ฟังก์ชันกำหนดเกรดตามคะแนน
void setGrade( float score, char gradeStr[3] ) {
    if( score >= 80 ) strcpy( gradeStr, "A" ) ;
    else if( score >= 75 ) strcpy( gradeStr , "B+" ) ;
    else if( score >= 70 ) strcpy( gradeStr , "B" ) ;
    else if( score >= 65 ) strcpy( gradeStr , "C+" ) ;
    else if( score >= 60 ) strcpy( gradeStr , "C" ) ;
    else if( score >= 55 ) strcpy( gradeStr , "D+" ) ;
    else if( score >= 50 ) strcpy(gradeStr , "D" ) ;
    else strcpy( gradeStr , "F" ) ;
}

int main() {
    S student[3] ;
    char g1[3] , g2[3] , g3[3] , g4[3] , g5[3] ;

    printf( "Enter the details of 3 students :\n" ) ;

    for( int i = 0 ; i < 3 ; i++ ) {
        printf( "Student %d:\n" , i + 1 ) ;
        printf( "Name:\n" ) ;
        scanf( " %[^\n]" , student[i].Name ) ;
        printf( "ID:\n" ) ;
        scanf( "%s" , student[i].ID ) ;
        printf( "Scores in Subject 1:\n" ) ;
        scanf( "%f" , &student[i].ScoreSub1 ) ;
        printf( "Scores in Subject 2:\n" ) ;
        scanf( "%f" , &student[i].ScoreSub2 ) ;
        printf( "Scores in Subject 3:\n" ) ;
        scanf( "%f" , &student[i].ScoreSub3 ) ;
        printf( "Scores in Subject 4:\n" ) ;
        scanf( "%f" , &student[i].ScoreSub4 ) ;
        printf( "Scores in Subject 5:\n" ) ;
        scanf( "%f", &student[i].ScoreSub5 ) ;

        // ตัดเกรดแต่ละวิชา
        setGrade( student[i].ScoreSub1, g1 ) ;
        setGrade( student[i].ScoreSub2, g2 ) ;
        setGrade( student[i].ScoreSub3, g3 ) ;
        setGrade( student[i].ScoreSub4, g4 ) ;
        setGrade( student[i].ScoreSub5, g5 ) ;

        // แสดงผลคะแนนและเกรด
        printf( "\n--- Result for %s (ID: %s) ---\n" , student[i].Name, student[i].ID ) ;
        printf( "Subject 1: %.2f (%s)\n" , student[i].ScoreSub1, g1 ) ;
        printf( "Subject 2: %.2f (%s)\n" , student[i].ScoreSub2, g2 ) ;
        printf( "Subject 3: %.2f (%s)\n" , student[i].ScoreSub3, g3 ) ;
        printf( "Subject 4: %.2f (%s)\n" , student[i].ScoreSub4, g4 ) ;
        printf( "Subject 5: %.2f (%s)\n" , student[i].ScoreSub5, g5 ) ;
    }

    return 0 ;
}