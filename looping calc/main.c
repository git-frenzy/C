#include <stdio.h>

//Declaration of functions
void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void divide(int a, int b);

void op();


int main()
{
    //Calling op functions in main
    op();
    return 0;
}


//Creating arithimatic functions and adding op() at the end to create a loop
void add(int a, int b){
    printf("\n%d", a+b);
    op();
}

void sub(int a, int b)
{
    printf("\n%d", a-b) ;
    op();
}

void mul(int a, int b)
{
    printf("\n%d", a*b);
    op();
}

void divide(int a, int b)
{
    printf("\n%d", a/b);
    op();
}


//Method that takes input and checks them
void op()
{
    int a, b;
    char ch;

    //Taking value of ch
    printf("\nEnter +, -, *, / and x to exit : ");
    scanf(" %c", &ch);

    //Checking whether ch is x or not
    if(ch == 'x')
    {
        printf("\nExited");
    }
        //If ch special symbol, do maths
    else if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
        printf("\nEnter value of a and b : ");
        scanf("%d %d", &a, &b);

        if(ch == '+')
            add(a, b);

        else if(ch == '-')
            sub(a, b);

        else if(ch == '*')
            mul(a,b);

        else if(ch == '/')
            divide(a, b);

        else{
            printf("\nWrong input");
            op();
        }
    }
        //Else ask for input again, using op() creating a loop
    else{
        printf("\nWrong input try again");
        op();
    }
}
