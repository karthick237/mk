#include <stdio.h>
 #include<string.h>
 void main()
 {
  char s[20],r[50];
  int i,j;
 printf("Enter the String:");
 scanf("%s",&s);
 for(i=0;s[i]!='\0';i++)
 {
 if(isdigit(s[i]))
 {
 r[j]=s[i];
 j++;
 }
 }
 printf("%s",r);
 }
