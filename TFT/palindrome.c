#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char buf[100];
    bool isPalindrome = true;

    scanf("%s", buf);

    for (int i = 0, j = strlen(buf) - 1; i < j; i++, j--)
    {
        if (buf[i] != buf[j])
        {
            isPalindrome = false;
        }
    }

    if (isPalindrome)
    {
        printf("%s is a palindrome.", buf);
    }
    else
    {
        printf("%s is not a palindrome.", buf);
    }
    
    return 0;
}