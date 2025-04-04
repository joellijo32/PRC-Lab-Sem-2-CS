#include <stdio.h>
int factorial(int); 
int factorial(int num){
    if(num == 0) return 1;
    else return (num*factorial(num-1));
}

int main(){
    printf("n = "); int n, r;scanf("%d", &n);
    printf("r = "); scanf("%d", &r);
    double nCr = factorial(n) / (factorial(n-r) * factorial(r)); 
    printf("\n%d  \n", n );
    printf(" C  = %.3lf\n  %d", nCr, r);
}