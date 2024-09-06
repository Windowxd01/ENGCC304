#include <stdio.h>
int main () {
    int number;
    printf( "Please Enter Your Number : " );
    scanf( "%d", &number );
    if (number % 2 == 0){
        for ( int i = 0; i <= number; i++ ) { //แถว
           for (int vent = 0; vent < number - i; vent++) {
                printf("  ");
                }// เว้นวรรค์

                int cal_up = 1;
                for (int j = 0; j <= i; j++ ) {
                    printf( " %d ", cal_up);
                    cal_up = cal_up * ( i - j ) / (j + 1);
                }
        printf("\n");
        }
    } else {
        for (int  i = 0; i <= number; i++ ) {
            for (int vent = 0; vent < number -i; vent++) {
                printf( "  " );
            }// เว้นวรรค์
            
            int cal_down = 1 ;
            for ( int h = 0; h <= i; h++ ) {
                printf( " %4d ", cal_down) ;
                cal_down = cal_down * ( i - h - 1) / ( h + 1 ) ;
            }
        printf("\n");
        }
    }
    return 0 ;
}
