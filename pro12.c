/*A CYCLIST CYCLES AROUND THE RECTANGLE PATH WITH SHORTER SIDE AS 10m AND LONGER WIDTH AS 80m. WRITE A PROGRAM TO FIND 
THE DISTANCE COVERED BY THE CYCLIST IF HE COMPLETES 'N' ROUNDS. 
*/

#include<stdio.h>

   int main(){
    int n,length=10; int width=80,distance_covered;
    printf("enter number of rounds: ");
    scanf("%d",&n);
    distance_covered=n*(2*(length+width));
    printf("so,the total distance covered is : %d meter",distance_covered);




return 0;
      }