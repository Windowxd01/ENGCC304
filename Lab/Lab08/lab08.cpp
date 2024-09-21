#include <stdio.h>

int prime_number(int num){
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <=num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
    
    
}
int main(){
    int N;
    printf("Enter N : ");
    scanf("%d",&N);
    int values[5]; //กำหนด Range สามารถใส่ ข้อมูลได้ สูงสุด 5 ตัวเลข
    for (int i = 0; i < N; i++) { // ลูป ในการวนรอบจำนวนของ Array
        printf("Enter value[%d]: ", i);
        scanf("%d", &values[i]);
    }

    printf("Index : ");
    for (int i = 0; i < N; i++) // แสดง เลข Array ที่เรากรอกเข้าไป ตามจำนวน i 
    {
        printf("%d ", i);
    }
    
    printf("\nArray : ");
    for (int i = 0; i < N; i++)
    {
        if (prime_number(values[i]) == 1)
        {
            printf("%d ", values[i]);
        }
        else{
            printf("# ");
        }
        
    }
    
}