#include <stdio.h>

int main () {
    int Position ;
    int Year ;
    int Project ;
    int Salary = 0 ;
    int SpecialBonus = 0 ;
    int ExpBonus = 0 ;

    printf( "Enter Position\nJunior Programmer=> 1\nMid-Level Programmer=> 2\nSenior Programmer=> 3\n" ) ;
    scanf( "%d" , &Position ) ;
    
    printf( "Enter Year :" ) ;
    scanf( "%d" , &Year ) ;

    printf( "Enter Project :" ) ;
    scanf( "%d" , &Project ) ;

    int BaseSalary1 = 20000 ; // Junior Programmer
    int BaseSalary2 = 35000 ; // Mid-Level Programmer
    int BaseSalary3 = 50000 ; // Senior Programmer

    if ( Position == 1) { // กรณี Junior Programmer
        Salary = BaseSalary1 ;
        if ( Year >= 1 && Year <= 3 ) { // กรณี 1-3 ปี
            ExpBonus = (BaseSalary1 * 10)/100 ;
            Salary += ExpBonus ;
        } else if ( Year >= 4 && Year <= 5 ) { // กรณี 4-5 ปี
            ExpBonus = (BaseSalary1 * 15)/100 ;
            Salary += ExpBonus ;
        }else if ( Year > 5 ) { // กรณีมากกว่า 5 ปี
            ExpBonus = (BaseSalary1 * 20)/100 ;
            Salary += ExpBonus ;
        }
        if (Project > 5)  // กรณีทำโปรเจคเกิน 5 โปรเจค
        {
            SpecialBonus = (BaseSalary1 * 5)/100 ;
            Salary += SpecialBonus ;
        
        }// end if
        
    }else if (Position == 2) { // กรณี Mid-Level Programmer

        Salary = BaseSalary2 ;
          Salary = BaseSalary2;
        if ( Year >= 1 && Year <= 3 ) { // กรณี 1-3 ปี
            ExpBonus = (BaseSalary2 * 10)/100 ;
            Salary += ExpBonus ;
        } else if ( Year >= 4 && Year <= 5 ) { // กรณี 4-5 ปี
            ExpBonus = (BaseSalary2 * 15)/100 ;
            Salary += ExpBonus ;
        }else if ( Year > 5 ) { // กรณีมากกว่า 5 ปี
            ExpBonus = (BaseSalary2 * 20)/100 ;
            Salary += ExpBonus ;
        }
        if (Project > 5) // กรณีทำโปรเจคเกิน 5 โปรเจค
        {
            SpecialBonus = (BaseSalary2 * 5)/100 ;
            Salary += SpecialBonus ;
        
        }// end if

    }else if (Position == 3) { // Senior Programmer
        Salary = BaseSalary3 ;
          Salary = BaseSalary3 ;
        if ( Year >= 1 && Year <= 3 ) { // กรณี 1-3 ปี
            ExpBonus = (BaseSalary3 * 10)/100 ;
            Salary += ExpBonus ;
        } else if ( Year >= 4 && Year <= 5 ) { // กรณี 4-5 ปี
            ExpBonus = (BaseSalary3 * 15)/100 ;
            Salary += ExpBonus ;
        }else if ( Year > 5 ) { // กรณีมากกว่า 5 ปี
            ExpBonus = (BaseSalary3 * 20)/100 ;
            Salary += ExpBonus ;
        }
        if (Project > 5) // กรณีทำโปรเจคเกิน 5 โปรเจค
        {
            SpecialBonus = (BaseSalary3 * 5)/100 ;
            Salary += SpecialBonus ;
        
        }// end if
    }
    if ( Position == 1 ) {
        printf( "\nBase Salary = %d\n" , BaseSalary1 ) ;
    }// end if
    if ( Position == 2 ) {
        printf( "\nBase Salary = %d\n" , BaseSalary2 ) ;
    }// end if
    if ( Position == 3 ) {
        printf( "\nBase Salary = %d\n" , BaseSalary3 ) ;
    }// end if
    printf( "Experience Bonus = %d\n" , ExpBonus ) ;
    printf( "Special Bonus = %d\n" , SpecialBonus ) ;
    printf( "Net Salary = %d\n" , Salary ) ;
   
    return 0 ;
} //end function