

#include <stdio.h>
main()
{
    int n, x, b;
    printf("enter the number:");
    scanf("%d", &n);
    printf("enter the number:");
    scanf("%d", &b);

    x = n;
    n = b;
    b = x;
    printf("%d \n", n);
    printf("%d", b);
}