#include <stdio.h>

int main() {
    char Emp_ID[ 10 ] ;
    int hours ;
    float Salary_amount_hours , Salary_amount ;

    printf( "Employees ID: " ) ;
    scanf( "%10s" , Emp_ID ) ;

    printf( "working hours: " ) ;
    scanf( "%d" , &hours ) ;

    printf( "Salary_amount/hours: " ) ;
    scanf( "%f" , &Salary_amount_hours ) ;

    Salary_amount = hours * Salary_amount_hours ;

    printf( "Employees ID: %s\n" , Emp_ID ) ;
    printf( "working hours: %f\n" , Salary_amount ) ;

    return 0 ;  
}//end main function
