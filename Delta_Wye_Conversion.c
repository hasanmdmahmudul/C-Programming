//7. Y to Delta conversion

#include<stdio.h>
main()
{
    float R1,R2,R3,R12,R23,R31;
    printf("Enter R1, R2, R3 serially:\n");
    scanf("%f %f %f",&R1,&R2,&R3);
    R12=((R1*R2)+(R2*R3)+(R3*R1))/(R3);
    R23=((R1*R2)+(R2*R3)+(R3*R1))/(R1);
    R31=((R1*R2)+(R2*R3)+(R3*R1))/(R2);
    printf("R12= %.2f\nR23=%.2f\nR31=%.2f\n",R12,R23,R31);
}
