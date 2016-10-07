#include<stdio.h>
#include<string.h>

void main()
{
    char s1[20],s2[20];
    gets(s1);
    gets(s2);
    check_rotation(s1,s2);
}

 check_rotation(char s1[],char s2[])
{
    int len=strlen(s1);
    if(len==strlen(s2) && len>0)
    {
        char s1s1[40];
        strcpy(s1s1,s1);
        strcat(s1s1,s1);
        if(strstr(s1s1,s2))
            return 1;
    }
    return 0;
}
