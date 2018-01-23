#include <stdio.h>
int main()
{
    int n, reversedInt = 0, remainder, originalInt;
 
    printf("Enter an integer: ");
    scanf("%d", &n);
 
    originalInt = n;
    while( n!=0 )
    {
        remainder = n%10;
        reversedInt = reversedInt*10 + remainder;
        n /= 10;
    }
    if (originalInt == reversedInt)
        printf("%d yes", originalInt);
    else
        printf("%d no", originalInt);
 
    return 0;
}
