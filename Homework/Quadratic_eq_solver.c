#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("To get the roots of quadratic eqn: enter the value of a,b,c as in ax^2+bx+c:   ");
    scanf("%d %d %d", &a,&b,&c);

    double D,x1,x2,r1,r2;
    D= b*b-(4*a*c);
    x1 = -b/(2*a);
    x2 = sqrt(D)/(2*a);
    if (D>=0){
        printf("Roots are real\n");
        r1 = x1 + x2;
        r2 = x1 - x2;
        printf ("%lf\n",r1);
        printf ("%lf\n",r2);
    }

    else {
        printf("Roots are imaginary\n");
        printf("r1 = (%lf) + i(%lf)\n",x1,x2);
        printf("r2 = (%lf) + i (%lf)\n",x1,-x2);
    }

    return 0;
}