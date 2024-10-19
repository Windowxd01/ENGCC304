#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand( time( NULL ) ) ;
    int score = 100 ;
    int number_input = 0 ;
    int number_input_menu = 0 ;

    do //Start Menu Function
    {
        printf( " Do You Want play game ( 1 = play, -1 = exit )\n " ) ;
        scanf( " %d", &number_input_menu ) ;
        
        if ( number_input_menu == -1 ) 
        {
            return 0 ;
        } //end IF
        
    } while ( number_input_menu != 1 ) ; //End Do While
    do
    {   
        int ans = rand() % 100 + 1 ;
        int low_ans = 1 ;
        int high_ans = 100 ;
        printf( " Score : %d \n", score ) ;
        do
        {
            printf( " Guess the Wining Number ( %d - %d ) \n", low_ans, high_ans ) ;
            scanf( "%d", &number_input ) ;
            if ( number_input == ans )
            {
                printf( " That is correct! The winning number is %d. \n", ans ) ;
                printf( " Score this game : %d. \n", score ) ;
            } else { 
                score = score - 10 ;
                if ( number_input > ans ) 
                {
                    if( number_input < high_ans ) 
                    {
                        high_ans = number_input - 1 ;
                    }
                    printf( " Sorry, the winning number is LOWER than ( %d  ) ( Score = %d ) \n ", high_ans, score ) ;
                } else {
                    if( number_input > low_ans ) 
                    {
                        low_ans = number_input + 1 ;
                    }
                    printf( " Sorry, the winning number is HIGHER than ( %d ) ( Score = %d ) \n ", low_ans, score ) ;
                }//End IF Else
                
            } //End IF Else
        } while ( number_input != ans ) ;
            printf( " Do You Want play game ( 1 = play, -1 = exit ) \n " ) ;
            scanf( "%d", &number_input_menu ) ;
            high_ans = 100 ;
            low_ans = 1 ;
            score = 100 ;
            if ( number_input_menu == -1 ) 
            {
                return 0 ;
            } //End If / End Do While
        
    } while ( number_input_menu == 1 ) ; // end do while
}//end program