#include <stdio.h>

int n1;
int n2;

void sum(int a, int b) {
    printf("%d", a + b);
}

void sub(int a, int b) {
    printf("%d", a - b);
}

void mul(int a, int b) {
    printf("%d", a * b);
}

void div(int a, int b) {
    printf("%d", a / b);
}

void mod(int a, int b) {
    printf("%d", a % b);
}

int opert(int a, int b, char op){
    printf("enter op \n");
    scanf(" %c", &op);
    printf("enter n1 \n");
    scanf(" %d", &a);
    printf("enter n2 \n");
    scanf(" %d", &b);
}

int main() {
//    int n1, n2;
int a, b;
    char op;
    scanf(" %d %d", &a, &b);

     opert(a, b, op);

        if (op == '+') {
            sum(n1, n2);
        } else if (op == '-') {
            sub(n1, n2);
        } else if (op == '*') {
            mul(n1, n2);
        } else if (op == '/') {
            div(n1, n2);
        } else if (op == '%') {
            mod(n1, n2);
        } else
            printf("error!");
    }