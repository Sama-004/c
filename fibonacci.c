#include <stdio.h>
int main(){
    int i=0,f=1,num,loop,x;
    printf("Enter the value of the number ");
    scanf("%d",&num);

    printf("The first %d fibonacci numbers are ",num);
    printf("\n%d\n%d\n",i,f);
    loop=2;
    while (loop<num)
    {
        x=i+f;
        printf("%d\n",x);
        i=f;
        f=x;
        loop ++;
    }
    







    return 0;
}