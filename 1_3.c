#include<stdio.h>
#include<string.h>
main()
{
    char s[20];
    gets(s);
    duplicate(s);
    puts(s);
}
int duplicate(char s[])
{
    int i=1,j,tail=1;
    while(s[i]!='\0')
    {
       for(j=0;j<tail;j++)
       {
           if(s[i]==s[j])
           {
               break;
           }
           if(j==tail)
           {
               s[tail]=s[i];
               ++tail;
           }
       }
       i++;
    }
}
