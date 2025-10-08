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

// ฟังก์ชันตัดเกรด
void setGrade( float score , char gradeStr[3] ) {
    if( score >= 80 ) strcpy( gradeStr, "A" ) ;
    else if( score >= 75) strcpy( gradeStr, "B+" ) ;
    else if( score >= 70) strcpy( gradeStr, "B" ) ;
    else if( score >= 65) strcpy( gradeStr, "C+" ) ;
    else if( score >= 60) strcpy( gradeStr, "C" ) ;
    else if( score >= 55) strcpy( gradeStr, "D+" ) ;
    else if( score >= 50) strcpy( gradeStr, "D" ) ;
    else strcpy( gradeStr, "F" ) ;
}

// ฟังก์ชันคำนวณค่าเฉลี่ย
float calAverage( S st ) {
    return ( st.ScoreSub1 + st.ScoreSub2 + st.ScoreSub3 + st.ScoreSub4 + st.ScoreSub5 ) / 5.0 ;
}

int main() {
    S student[3] ;
    char g1[3] , g2[3] , g3[3] , g4[3] , g5[3] ;

    printf( "Enter the details of 3 students :\n" ) ;

    for( int i = 0 ; i < 3 ; i++ ) {
        printf( "Student %d:\n" , i + 1 ) ;
        printf( "Name: " ) ;
        scanf( " %[^\n]" , student[i].Name ) ;
        printf( "ID: " ) ;
        scanf( "%s", student[i].ID ) ;
        printf( "Scores in Subject 1: " ) ;
        scanf( "%f" , &student[i].ScoreSub1 ) ;
        printf( "Scores in Subject 2: " ) ;
        scanf( "%f" , &student[i].ScoreSub2 ) ;
        printf( "Scores in Subject 3: " ) ;
        scanf( "%f" , &student[i].ScoreSub3 ) ;
        printf( "Scores in Subject 4: " ) ;
        scanf( "%f" , &student[i].ScoreSub4 ) ;
        printf( "Scores in Subject 5: " ) ;
        scanf( "%f" , &student[i].ScoreSub5 ) ;

        // กำหนดเกรดแต่ละวิชา
        setGrade( student[i].ScoreSub1, g1 ) ;
        setGrade( student[i].ScoreSub2, g2 ) ;
        setGrade( student[i].ScoreSub3, g3 ) ;
        setGrade( student[i].ScoreSub4, g4 ) ;
        setGrade( student[i].ScoreSub5, g5 ) ;

        float avg = calAverage( student[i] ) ;

        // แสดงผล
        printf( "\n--- Student %d ---\n" , i + 1 ) ;
        printf( "Name : %s\n" , student[i].Name ) ;
        printf( "ID   : %s\n" , student[i].ID ) ;
        printf( "Scores : %.2f %.2f %.2f %.2f %.2f\n" ,
               student[i].ScoreSub1, student[i].ScoreSub2, student[i].ScoreSub3,
               student[i].ScoreSub4, student[i].ScoreSub5 ) ;
        printf( "Grades : %s %s %s %s %s\n", g1, g2, g3, g4, g5 ) ;
        printf( "Average Score : %.2f\n" , avg ) ;
    }
    return 0 ;
}//end function