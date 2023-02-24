
#include <stdio.h>
#include <math.h>
int main()
{
    float radius, area, perimeter;   
 
    printf("\n Enter the radius of circle : ");
    scanf("%f", &radius);
 
    /* Area of circle = PI * r * r   
     * Perimeter of circle = 2 * PI * r  */
    area = M_PI * pow(radius, 2);
    perimeter = 2 * M_PI * radius;
 
    printf("\n Area of circle : %.2f \n", area);
    printf(" Perimeter of circle : %.2f \n", perimeter);
 
    return (0);
}
