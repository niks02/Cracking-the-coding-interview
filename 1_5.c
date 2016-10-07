#include<stdio.h>
#include<string.h>

void main()
{
   char s[20];
   gets(s);
   replace_space(s);
   puts(s);
}

void replace_space(char s[])
{
    int spacecount=0,i=0,length,newlength;
    length=strlen(s);
    for(i=0;i<length;i++)
    {
        if(s[i]==' ')
        {
            spacecount++;
        }
    }
    newlength=length+2*spacecount;
    s[newlength]='\0';
    for(i=length-1;i>=0;i--)
    {
        if(s[i]==' ')
        {
            s[newlength-1]='0';
            s[newlength-2]='2';
            s[newlength-3]='%';
            newlength=newlength-3;
        }
        else
        {
            s[newlength-1]=s[i];
            newlength--;
        }
    }
}
