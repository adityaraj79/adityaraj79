#include <stdio.h>
#include <string.h>
 
void check(char [], int); 
int main()
{
    char s[500];  
    printf("Enter  the string : ");
    scanf("%s",s);
    check(s,0);
    return 0;
}

void check(char s[], int c)
{
    int i,n;
    n=strlen(s);
    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
    }
    if(c==i)
 	printf("string is palindrome");
    else
        printf("string is not palindrome");
}
