#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    
    char ch;    //specifies a char
    scanf("%c", &ch);   //takes input from the user
    printf("%c\n", ch); //prints only 1 char 
    char lang[20];  //specifies the length cuz we are printing an entire word and not just one character like above
    scanf("%s",lang);   //takes input from the user
    printf("%s\n", lang);   //print 1 word without space 
    scanf("\n");    //added cuz of %[^\n]%*c
    char welcome[20]; //specifies a string 
    scanf("%[^\n]%*c", welcome);//takes input from the user (with space) that's why %[^\n}%*c is added 
    printf("%s\n",welcome); //prints the output sentence with spaces 
    
    
    return 0;
}
