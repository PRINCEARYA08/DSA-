#include<stdio.h>
void main(){
    int no,r1,r2,r3,q1,sum;
    no=122;
    r1=no%10;
    q1=no/10;
    r2=q1%10;
    r3=q1/10;

    
   // printf("%d %d %d %d %d",no,r1,q1,r2,r3);

    if (r1==r3)
    {
        printf("Given input is palendrom");
    }
    else {
        printf("Given number is not palendrom");
    }
    
}