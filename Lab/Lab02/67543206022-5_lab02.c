#include <stdio.h>

int main() {
    char sc1 = 0;
    int in1,in2 = 0;
    float fl1 = 0;
    char st2 [ 50 ];

    printf( "Enter a character: \n" ) ;
    scanf( "%c", &sc1 ) ;
    printf( "Enter two integers: \n" ) ;
    scanf( "%d %d", &in1 , &in2) ;
    printf( "Enter a floating-point number: \n" ) ;
    scanf( "%f", &fl1 );
    printf( "Enter a string: \n" ) ;
    scanf( "%s", st2 ) ;

    printf( "You entered character: %c\n", sc1 ) ;
    printf( "You entered integers: %d and %d\n", in1 , in2 ) ;
    printf( "You entered floating-point number: %.2f\n", fl1 ) ;
    printf( "You entered string: %s\n", st2 ) ;
}