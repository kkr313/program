#include <stdio.h>
int main()
{
   int n;
    int c = 0;
    scanf("%d", &n);

    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++c;
    }

    printf("Number of digits: %d", c);
}
