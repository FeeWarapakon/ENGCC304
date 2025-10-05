#include <stdio.h>

int main() {
    char ID[11] ;
    int workhrs ;
    float salaryPerHr , ttSalary ;

    printf( "Employees ID : " ) ;
    scanf( "%s" , ID ) ;

    printf( "working hrs : " ) ;
    scanf( "%d", &workhrs ) ;

    printf( "Salary amount/hr : " ) ;
    scanf( "%f", &salaryPerHr ) ;

    ttSalary = workhrs * salaryPerHr ;

    printf( "Employees ID = %s\n" , ID ) ;
    printf( "Salary = U$ %.2f\n", ttSalary ) ;

    return 0 ;
} //end function