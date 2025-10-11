#include<stdio.h>
void add(int , int);
void sub(int , int);
void mul(int , int);
void div(int , int);
int main()
{
    
    int a,b;
    printf("\n enter a value:");
    scanf("%d",&a);
    printf(" enter a value:");
    scanf("%d",&b);
    
    
    
  printf("\nArithmatic Operations: ");
    printf("\n*****");
    add(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);
    printf("\nSucess");

}
void add(int a , int b)
{
    int  c;
    c=a+b;
    printf("\nAfter addition: %d",c);
}
void sub(int a, int b)
{
    int c;
    c=a-b;
    printf("\nAfter subtraction: %d",c);
}
void mul(int a , int b)
{
    int c;
    c=a*b;
    printf("\nAfter multiplication: %d",c);
}
void div(int a , int b)
{
    float c;
    c=a/b;
    printf("\nAfter division: %.2f",c);
}