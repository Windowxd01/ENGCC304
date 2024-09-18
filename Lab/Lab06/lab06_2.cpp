#include <stdio.h>
int main() {
    int number = 0 ;
    printf( "Enter Your Number : " ) ;
    scanf( "%d", &number ) ;
    for (int i = 0; i < number; i++) {
        printf( "\n" ); 
        if( number % 2 != 1 ) {
            for (int j = 0; j < number; j++) {
                if(i==j){
                    printf( "1 " );
                } else {
                    printf( "0 " );
                }//end if else
            }//end for  
        } else {
        for (int a = 0; a < number; a++) {
                if(i == number - a - 1){
                    printf( "1 " );
                } else {
                    printf( "0 " );
                } //end if else
            }// end for
        }//end if else
    } //end for
    return 0;
}
