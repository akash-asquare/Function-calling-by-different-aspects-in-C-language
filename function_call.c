#include<stdio.h>  
void sum();
void sub(int, int);
int mul();
int divi(int, int);

int main()  
{  
    sum();
    int a=12, b=6;
    sub(a,b);
    int c=mul();
    printf("%d",c);
    c=divi(a,b);
    printf("\ndivision=%d/%d=%d",a,b,c);
    return 0;
}

void sum()
{
    int x=5, y=10,z;
    printf("This is function call without argument and without return type\npress Enter to continue");
    scanf("%c",&z);
    printf("\nSum=%d+%d=%d",x,y,x+y);
}

void sub(int x, int y)
{
    int z;
    printf("\n\nThis is function call with argument and without return type\npress Enter to continue");
    scanf("%c",&z);
    printf("\nSubtraction=%d-%d=%d",x,y,x-y);
}

int mul()
{
    int x=10, y=10,z;
    printf("\n\nThis is function call without argument and with return type\npress Enter to continue");
    scanf("%c",&z);
    printf("\nMultiplication=%d*%d=",x,y);
    return (x*y);
}

int divi(int x,int y)
{
    int z;
    printf("\n\nThis is function call with argument and with return type\npress Enter to continue");
    scanf("%c",&z);
    return (x/y);
}


