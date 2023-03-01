#include <stdio.h>

int main(){
    float number,sum=0,i;
    printf("Enter a number");
    scanf("%f", &number);
    
    
    for (i=1; i <=number; i++)
    {
        sum=sum+(1/i);
        if (i==1)
        {
        printf("\n");
        }
        else if (i==number)
        {
            printf("(1/%.2f)", i);
        }
        
        else
        printf("(1/%.2f)+",i);
    }
    printf("\n The sum of the given series is %.2f",sum);










    return 0;
}