#include <stdio.h>
#include <ctype.h>
int main(){
  char c;
  printf("Enter a character\n");
  c=getchar();
  if (isalpha(c)){
    c=toupper(c);
    if (c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
       printf("The entered character is a vowel");
    else
       printf("The entered character is a consonant");
  }
  else
    printf("The charcter you entered is not an alphabet");         
  return 0;
}