#include <stdio.h>
#include <stdlib.h>

double cube_num(double x){

return (x*x*x) ;

}

int main()
{
    int x;
    double res;

    printf("enter a number\n");
    scanf("%d",&x);
    res=cube_num(x);
     printf("Cube of %d is %.2f", x, res);
    return 0;
}
