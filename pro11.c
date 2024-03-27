/*Q.2 WAP TO COMPUTE NET SALARY OF AN EMPLOYEE(ns=bp+hra+ta+da) WHERE BP(basic pay would be entered by the user)
hra =10% of BP
ta=5% of BP
da=15% of BP*/

#include<stdio.h>

   int main(){
    float bp,hra,ta,da,total_salary;

    printf("enter basic salary : ");
    scanf("%f",&bp);
    total_salary=(0.1*bp)+(0.05*bp)+(0.15*bp)+bp;
    printf("\n so, the net salary of an employee is: %f",total_salary);




return 0;
      }