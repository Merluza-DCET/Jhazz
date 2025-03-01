#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%i", &num);
    {
        if(num>=65 && num<=74)
        printf("Failure, 5.0");

        else if(num>=75 && num<=75)
        printf("Passing, 3.0");

        else if(num>=76 && num<=78)
        printf("Satisfactory, 2.75");

        else if(num>=79 && num<=81)
        printf("Satisfactory, 2.5");

        else if(num>=82 && num<=84)
        printf("Good, 2.25");

        else if(num>=85 && num<=87)
        printf("Good, 2.0");

        else if(num>=88 && num<=90)
        printf("Very Good, 1.75");
    
        else if(num>=91 && num<=93)
        printf("Very Good, 1.5");

        else if(num>=94 && num<=96)
        printf("Excellent 1.25");

        else if(num>=97 && num<=100)
        printf("Excellent, 1.0");
        
        else
        printf("Invalid");

}

}

