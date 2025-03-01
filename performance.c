#include <stdio.h>
int main()

{
    int num;
    printf("Enter a number: ");
    scanf("%i", &num);
    
     {
        
        if(num<0)
        {
        printf("freezing");
        }
     
        
        else if( num>=1 && num<=9)
        {
        printf("cold");
        }

        else if(num>=10 && num<=15)
        {
        printf("cool");
        }

        else if(num>=16 && num<=21)
        {
        printf("neither cold or warm");
        }

        else if(num>=22 && num<=26)
        {
        printf("warm");
        }

        else if(num>=27 && num<=32)
        {
        printf("hot");
        }

        else 
        {
        printf("very hot");
        }

        
     
     
     
     
     }






} 