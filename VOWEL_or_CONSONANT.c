#include<stdio.h>
int main()
{
    char ch;
    char a,e,i,o,u;
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}