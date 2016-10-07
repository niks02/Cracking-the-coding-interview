#include<stdio.h>
int check_anagram(char[],char[]);
void main()
{
    char s1[20],s2[20];
    gets(s1);
    gets(s2);
    check_anagram(s1,s2);
}
int check_anagram(char *a,char *b)
{
    int count[128]={0},i=0;      // Initializing to zero
    while(a[i]&&b[i])            // Till null character
    {
        count[a[i]]++;           // For every char in s1,inc c[index] val
        count[b[i++]]--;         // For every char in s2,dec c[index] val
    }
    for(i=0;i<128;i++)
    {
        if(count[i])             // If non-zero value return zero
            return 0;
    }
    return 1;
}
