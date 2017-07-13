#include <stdio.h>
int main()
{
    char t;
    printf("Enter a character: ");
    scanf("%c",&t);

    if( (t>='a' && t<='z') || (t>='A' && t<='Z'))
        printf("%c is an alphabet.",t);
    else
        printf("%c is not an alphabet.",t);

    return 0;
}
