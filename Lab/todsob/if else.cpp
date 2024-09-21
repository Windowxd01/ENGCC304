#include <stdio.h>

int main() {
    int score ;
    printf("กรุณากรอกคะแนน ");
    scanf("%d", &score);

    if (score >= 80)
    {
        printf("คุณได้ A ");
    } else if (score >= 75)
    {
        printf("คุณได้ B+ ");
    } else if (score >= 70)
    {
        printf("คุณได้ B ");
    } else if (score >= 65)
    {
        printf("คุณได้ C+ ");
    } else if (score >= 60)
    {
        printf("คุณได้ C ");
    } else if (score >= 55)
    {
        printf("คุณได้ D+ ");
    } else if (score >= 50)
    {
        printf("คุณได้ D ");
    } else 
    {
        printf("คุณได้ F ");
    }
    
    
    
    
    
    
    
    
}