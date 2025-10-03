#include <stdio.h>


int main() {
    int H,W ;

    printf("Enter your height : ");
    scanf("%d",&H); 
    printf("Enter your weight : ");
    scanf("%d",&W);

    float Area = H*W/2.0 ;
    printf("Area = %.2f",Area);
    return 0;
}    