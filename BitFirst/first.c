#include<stdio.h>
int addNumber(int a, int b){
    int sum = a+b;
    return sum;
}
int main()
{
    printf("Hello World");
    int result;
    result = addNumber(7,3);
    printf("Result is : %d\n",result);
    return 0;
}