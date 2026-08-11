#include <stdio.h>
#include <ctype.h>
int main(){
  char c;
  printf("Enter an alphabet");
  c=getchar();
  if (isalpha(c)){
    c=toupper(c);
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
      printf("Character is a vowel");
    else
      printf("Character is a consonant");  
  }
  else
   printf("The character is not an alphabet");
  return 0;
}