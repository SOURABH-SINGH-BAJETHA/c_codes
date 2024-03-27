/*AN ICECREAM SELLER WOULD LIKE TO ORDER ICE CREAM OF VOLUME 'V' CUBIC UNITS FROM A VENDOR FOR THE 'N' CONES
 AVAILABLE IN HIS STOCK. 
WRITE A C PROGRAM THAT WILL READ THE VALUE OF RADIUS AND HEIGHT OF CONE AND FIND OUT 
THE TOTAL VOLUME OF ICE CREAM TO BE ORDERED FROM THE VENDOR.. */

#include<stdio.h>

   int main(){
     int N,r,h;
     float volume;
     printf("enter the number of cones :");
     scanf("%d",&N);
     printf("enter height of cone :");
     scanf("%d",&h);
     printf("enter radius: ");
     scanf("%d",&r);
     volume=N*((3.14*r*r*h)/3);
     printf("total volume of icecream reqd is: %f",volume);


return 0;
      }