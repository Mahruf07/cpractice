#include<stdio.h>
#include<math.h>

int main(){

    
    double A,B,C;

    printf("Enter the first side of the Triangle: ");
    scanf("%lf",&A);

    printf("\nEnter the second side of the Triangle: ");
    scanf("%lf",&B);

    C = sqrt(A*A + B*B);

    printf("The length of hypotenous is %lf ",C);
    
  
    return 0;
}