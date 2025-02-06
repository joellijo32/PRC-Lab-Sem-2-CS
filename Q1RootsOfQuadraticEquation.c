#include <stdio.h>
#include <math.h>
void main()
{
    printf("Coefficient of x^2 = ");
    int coeff_x2 , coeff_x , cons;
    scanf("%d",&coeff_x2);
    printf("Coefficient of x = ");
    scanf("%d",&coeff_x);
    printf("Constant = ");
    scanf("%d",&cons);

    printf("\nThe Quadratic Equation is: %dx^2 + %dx + %d\n",coeff_x2,coeff_x,cons);
    double discriminant = ((coeff_x*coeff_x) - (4*coeff_x2*cons));
    if(discriminant > 0)
    {
        int x = ((-coeff_x) + sqrt(discriminant))/(2*coeff_x2);
        int y = ((-coeff_x) - sqrt(discriminant))/(2*coeff_x2);
        printf("Roots are x = %d and y = %d\n\n",x,y);

    }
    else
    {
        printf("The Quadratic Equation has Complex Roots.");
    }
}