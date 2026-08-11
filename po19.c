#include <stdio.h>

int main(){
  float ir,fr,points,total;
  printf("Enter initial reading of meter:\n");
  scanf("%f",&ir);
  printf("Enter final reading of meter:\n");
  scanf("%f",&fr);
  points=fr-ir;
  if (points<=50)
    total=100+(points)*1.5;
  else if(50<=points && points<=150)
    total=100+(50*1.5)+((points-50)*3.75);
  else if(150<=points && points<=250)
    total=100+(50*1.5)+(100*3.75)+((points-150)*5.2);
  else if(points>250){
    total=100+(50*1.5)+(100*3.75)+(100*5.2)+((points-250)*8.5);
    total+=0.2*total;
  }    
  printf("Your total electricity bill is %.2f",total);
  return 0;
}