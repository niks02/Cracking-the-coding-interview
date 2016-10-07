#include<stdio.h>
#include<string.h>

main()
{
    char str[20];
    gets(str);
    reverse_string(str);
    return 1;
}
void reverse_string(char str[])
{
    char *start, *end;
    end=str;
    start=str;
    while(*end!='\0')
    {
        end++;
    }
    --end;
    while(str<end)
    {
        char temp;
        temp=*start;
        *start++=*end;
        *end--=temp;
    }
    puts(str);
}
