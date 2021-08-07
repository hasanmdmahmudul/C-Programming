#include<stdio.h>
main()
{
    float a,b,sum,sub,multi,div;
    printf("Enter a:"); scanf("%f",&a);
    printf("Enter b:"); scanf("%f",&b);
    sum=a+b;
    sub=a-b;
    multi=a*b;
    div=a/b;
    printf("Sum= %f + %f = %f\n",a,b,sum);
    printf("Sub= %f - %f = %f\n",a,b,sub);
    printf("Multi= %f * %f = %f\n",a,b,multi);
    printf("Div= %f / %f = %f\n",a,b,div);
}
