//6. Find Series and Parallel Resistances
#include<stdio.h>
main()
{
    float R1,R2,Rs,Rp;
    printf("Enter R1:"); scanf("%f",&R1);
    printf("Enter R2:"); scanf("%f",&R2);
    Rs=R1+R2;
    Rp=(R1*R2)/(R1+R2);
    printf("Rs= %.2f \nRp= %.2f\n",Rs,Rp);
}
