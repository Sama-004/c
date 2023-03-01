/* factorial = 6!=6*5*4*3*2*1
i--
*/

#include <stdio.h>
int main(){
    int num,i;
    long long x =1;
    printf("Enter the number you want to find the factorial of ");
    scanf("%d",&num);
        /*if (num==0)
    {
        printf("factorial is 0\n");
    }*/
    if (num<0)
    {
        printf("The number you entered %d is negative and factorial of negative number dosen't exist\n",num);
    }
    
    else{
        for (i=1; i <=num; i++)
        {
        x *=i;
        }
        printf("%d! is = %llu\n",num,x);
        
    }




    return 0;
}