#include <stdio.h>
int n1 =10;
int *p1;





int main() {
    p1=&n1;
    printf("\n%d",p1);
    printf("\n%d",*p1); //prints the value where p1 points
    printf("\n%d",&n1); //prints the address of n1




}
