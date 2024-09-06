#include <stdio.h>
int main () {
    int number, col, calculate = 1, j, row;
    printf( "Please Enter Your Number : " );
    scanf( "%d", &number );
        for (row = 0; row < number; row++) {
            printf("\n");
            for (col = 1; col <= number - row; col++){
                printf( " " );
            for ( j = 0; j <= row; j++ ){
                if( j == 0 || row == 0 )
                    calculate = 1 ;
                else {
                    calculate = calculate * ( row - j + 1 ) / j;
                    printf("%4d",calculate);
                }
            }
        }
        return 0 ;
    }
}