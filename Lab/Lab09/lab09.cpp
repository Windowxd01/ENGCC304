#include <stdio.h>

int prime_number( int num ){
    if ( num <= 1 )
    {
        return 0 ;
    }// end if
    for ( int i = 2 ; i * i <=num ; i++)
    {
        if ( num % i == 0 )
        {
            return 0 ;
        } // end if
    }//end for
    return 1 ;
}// end int ใช้สำหรับการกำหนดฟังก์ชั่น คำนวน

int main() {
    int number ;
    printf( "Enter Number : " ) ;
    scanf( "%d", &number) ;
    int values_range[5] ;
    for ( int i = 0 ; i < number ; i++ )
    {
        printf( " Values[%d] : " , i) ;
        scanf( "%d", &values_range[i] ) ;
    } //end for สำหรับการ วนรอบจำนวนการกรอก Values
    
    printf( "Index : " ) ;
    for ( int i = 0 ; i < number ; i++ )
    {
        printf( "%d", i ) ;
    } //end for สำหรับการ วนรอบเช็คจำนวน INDEX ที่กรอกเข้ามา

    printf( "\nArray : " );
    for (int i = 0; i < number ; i++)
    {
        if (prime_number(values_range[i]) == 1)
        {
            printf( " %d ", values_range[i]);
        }
        else {
            printf( " # " );
        }// end if else สำหรับเงื่อนไขจำนวนเฉพาะ
    }//end for
    
    
}