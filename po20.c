#include <stdio.h>

int main(){
  int day_num;
  printf("Enter the number of day of the week\n");
  scanf("%d",&day_num);
  switch (day_num){
    case 1:
        printf("Today is Monday");
        break;
    case 2:
        printf("Today is Tuesday");
        break;
    case 3:
        printf("Today is Wednesday");
        break;
    case 4:
        printf("Today is Thursday");
        break;
    case 5:
        printf("Today is Friday");
        break;
    case 6:
        printf("Today is Saturday");
        break;
    case 7:
        printf("Today is Sunday");
        break;
    default:
      printf("There are only 7 days in a week you cannot enter a number greater than 7.");                            
  }
  return 0;
}