#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char country[15];
    char country1[] = "PHILIPPINES";
    char country2[] = "JAPAN";
    char country3[] = "KOREA";
    char country4[] = "FRANCE";

    printf ("Enter a country: ");
    scanf("%s", &country);

    for  (int i = 0; country[i] != '\0'; i++)
    {
        country[i] = toupper(country[i]);
    }

     if (strcmp(country, country1)==0);
    {
        printf("The capitaln of philippines is MANILA");
    }

    else if (strcmp(country, country2)==0);
    {
        printf("The capital of japan is tokyo");
    }
    
     else if  (strcmp(country, country3)==0);
    {
        printf("The capitaln of korea is SOUL");
    }

     else if  (strcmp(country, country4)==0);
    {
        printf("The capitaln of france is ITALY");
    }

    else
    {
        printf("INVALID");
    }

}