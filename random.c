#include <stdio.h>      
#include <time.h>  
#include <stdlib.h>  

int main()  
{     
    const int MIN = 1;
    const int MAX = 100;
    int guess,number,answer;
 
    srand(time(0));
    
    answer = (rand() % MAX) + MIN;

    for ( guess = 1; number!= answer; guess++)
    {
        printf("Prediction Number: %d\n", guess);
        
        printf("Predict a number between 1 to 100: ");
        scanf("%d",&number);
        if (number > answer)
        {
            printf("Your guess is higher than the result\n");
        }
        else if (number < answer)
        {
           printf("Your guess is lower than the result\n");
        }
        else if (number = answer)
        {
            printf("Congratutation the answer is %d\n", number);
        }   
    }

        printf("Total attempts: %d",guess);

        return 0;
    
}  