#include <stdio.h>

void pr(char a)
{  
   if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
   {
    printf("its vowel");
   }
   else
   {
    printf("its constant");
   }
   
}
int main()
{
    char a;

  printf("enter character:");
   scanf("%c", &a);

    pr(a);
  
}
