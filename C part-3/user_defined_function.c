#include<stdio.h>
void add();
void sub();
void mul();
void div();
int main()
{
    printf("\nArithmatic Operations: ");
    printf("\n*********");
    add();
    sub();
    mul();
    div();
    printf("\nSucess");

}
void add()
{
    int a=10 , b=20 , c;
    c=a+b;
    printf("\nAfter addition: %d",c);
}
void sub()
{
    int a=10 , b=20 , c;
    c=a-b;
    printf("\nAfter subtraction: %d",c);
}
void mul()
{
    int a=10 , b=20 , c;
    c=a*b;
    printf("\nAfter multiplication: %d",c);
}
void div()
{
    float a=10 , b=20 , c;
    c=a/b;
    printf("\nAfter division: %.2f",c);
}