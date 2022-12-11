#include <stdio.h>
//#include <stdlib.h>
int main() {
    int n1, n2, ans;
    char op;

    scanf("%d",&n1);
    fflush(stdin);
    scanf("%d",&n2);
    fflush(stdin);
    scanf("%c",&op);
    fflush(stdin);

    switch (op) {
        case '+':
            ans = n1 + n2;
            printf("%d", &ans);
            break;
        case '-':
            ans = n1 - n2;
            printf("%d", &ans);
            break;
        case '*':
            ans = n1 * n2;
            printf("%d", &ans);
            break;
        case '/':
            ans = n1 / n2;
            printf("%d", &ans);
            break;
        case '%':
            ans = n1 % n2;
            printf("%d", &ans);
            break;
        default:
            printf("Error!");
    }
}