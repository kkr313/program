#include <stdio.h>

int main(void) {
 int i, num, sum = 0;
    scanf ("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf ("Sum of natural numbers = %d\n",sum);

}
