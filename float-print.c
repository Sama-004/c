#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float x,y;
    scanf("%d""%d",&a,&b); // takes input in int from the user
    scanf("%f""%f",&x,&y);//takes input in float from the user
    printf("%d ""%d\n",a+b,a-b);//prints the int by adding and subtracting them
    printf("%.1f ""%.1f",x+y,x-y);//print the float to 1 decimal place only cuz of .1f
    return 0;
}
