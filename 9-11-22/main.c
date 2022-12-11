#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;
    printf("enter n1");
    scanf("%d", &n1);
    printf("enter n2");
    scanf("%d", &n2);

    n1^=n2;
    n2^=n1;
    n1^=n2;

    return 0;
}
