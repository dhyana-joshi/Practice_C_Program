#include <stdio.h>

int main(){
  int mon_no,year;
  printf("Enter month number;\n");
  scanf("%d",&mon_no);
  printf("Enter current year:\n");
  scanf("%d",&year);
  if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
     switch (mon_no){
    case 1:
     printf("Number is days in January is 31");
     break;
    case 2:
     printf("Number is days in February is 29");
     break;
    case 3:
     printf("Number is days in March is 31");
     break;
    case 4:
     printf("Number is days in April is 30");
     break;
    case 5:
     printf("Number is days in May is 31");
     break;
    case 6:
     printf("Number is days in June is 30");
     break;
    case 7:
     printf("Number is days in July is 31");
     break;
    case 8:
     printf("Number is days in Auguat is 31");
     break;
    case 9:
     printf("Number is days in September is 30");
     break;
    case 10:
     printf("Number is days in October is 31");
     break;
    case 11:
     printf("Number is days in November is 30");
     break;
    case 12:
     printf("Number is days in December is 31");
     break;
    default:
     printf("There are only 12 months in a year.Please enter a number accordingly.");             
  }
  
  else{
   switch (mon_no){
    case 1:
     printf("Number is days in January is 31");
     break;
    case 2:
     printf("Number is days in February is 28");
     break;
    case 3:
     printf("Number is days in March is 31");
     break;
    case 4:
     printf("Number is days in April is 30");
     break;
    case 5:
     printf("Number is days in May is 31");
     break;
    case 6:
     printf("Number is days in June is 30");
     break;
    case 7:
     printf("Number is days in July is 31");
     break;
    case 8:
     printf("Number is days in Auguat is 31");
     break;
    case 9:
     printf("Number is days in September is 30");
     break;
    case 10:
     printf("Number is days in October is 31");
     break;
    case 11:
     printf("Number is days in November is 30");
     break;
    case 12:
     printf("Number is days in December is 31");
     break;
    default:
     printf("There are only 12 months in a year.Please enter a number accordingly.");             
   }
 }
  return 0;
}