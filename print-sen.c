#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    printf("Hello, World!\n");
    char lmao[20];
    scanf("\n"); // sometimes %[^\n]%*c dosen't work when this is not added 
    scanf("%[^\n]%*c",lmao);//%[^\n}%*c is used to take input of the sentence with spaces 
    printf("%s\n",lmao);//prints the input taken with spaces 
    return 0;
