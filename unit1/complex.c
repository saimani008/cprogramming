#include<stdio.h>
#include<math.h>
#include<complex.h>
int main()
{
double a = 8+8*I;
double ac= conj(a);
printf("%lf %lf %lf %lf \n", creal(a),cabs(a),cimg(a),carg(a));
printf("%lf %lf %lf %lf \n",creal(ac),cabs(ac),cimg(ac),carg(ac));
return 0;
}

