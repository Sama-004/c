#include <stdio.h>

int main(){
    int number,i;
    float sum=0;
    printf("Enter the number\n");
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {
    sum=sum+(1/i);
    if (i==1)
    {
        printf("\n");    
    }
    else if (i==number)
    {
        printf("(1/%d)",i);
    }
    else
    printf("(1/%d)+",i);
 }
printf("\nThe sum of the series is %f\n",sum);

    return 0;

}