#include <stdio.h> //header file
#include <stdlib.h>

int n2; //defining global variable and storing a value

void user1(int a, int b) { //user-defined function with no return value (void)
    printf("mod p1_p2 - %d \n", a % b); //sums n1 & n2
}

int user2(int a, int b) { //User-Defined function with integer value return (int)
    return a / b; //returns the values to the called function
}

int main() {
    int n1, c, p1, p2; //defining local variables

    printf("enter value for n1= ");
    scanf("%d", &n1);

    printf("enter value for n2= ");
    scanf("%d", &n2);

    fflush(stdin); //clearing buffer
    system("clear"); //clear output screen on MAC

    printf("----------------------------------------------\n");

    p1=("%p", &n1); //storing address of n1 in p1
    p2=("%p", &n2); //storing address of n2 in p2

    printf("local variable - %d \n", n1); //printing local variable (n1)
    printf("global variable - %d \n", n2); //printing global variable (n2)

    //(for int n1) printing address of a variable stored (METHOD 1)
    printf("address of n1 - %p \n", (void *) &n1);

    //(for int n2) printing address of a variable stored (METHOD 2)
    printf("address of n2 - %p \n", &n2);

    user1(p1,p2);
    c=user2(p1,p2);
    printf("div p1_p2 - %d \n",c);

    return 0; //return 0 value to the function called (after a successful execution)

}