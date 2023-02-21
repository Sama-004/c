#include <stdio.h>

int main(){
    float rad,area,peri;
    printf("Enter the radius: ");
    scanf("%f" ,&rad);

    area=3.14*rad*rad;
    peri=2*3.14*rad;
    printf("The perimeter is  " "%f\n", peri);
    printf ("The area is: " "%f\n", area);


    return 0;
}
