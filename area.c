
#include <stdio.h>
#include <math.h>
int main()
{
    float radius, area, perimeter;   
 
    printf("\n Enter the radius of circle : ");
    scanf("%f", &radius); //takes input from the user and assigns the value to radius
 
    /* Area of circle = PI * r * r   
     * Perimeter of circle = 2 * PI * r  */
    area = M_PI * pow(radius, 2); //finds the area
    perimeter = 2 * M_PI * radius; //finds the perimeter
 
    printf("\n Area of circle : %.2f \n", area); //prints area upto to decimal places because of %.2f
    printf(" Perimeter of circle : %.2f \n", perimeter);//same as above but prints perimeter
 
    return (0);
}
