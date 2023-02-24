
#include <stdio.h>

int main()
{
    float celcius, farenheit;
 
    printf("Enter temperature in Celcius: ");
    scanf("%f", &celcius);                                                        
    farenheit = (celcius*1.8) + 32;
    printf("%.2f Celcius = %.2f Farenheit", celcius, farenheit);
 
    return 0;
}
