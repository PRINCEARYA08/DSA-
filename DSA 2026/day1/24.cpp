#include<iostream>
using namespace std;
int main(){
    int num,r1,r2,r3,r4,r5,q1,q2,q3,q4,large;
    num=12345;
    r1=num%10;
    q1=num/10;

    r2=q1%10;
    q2=q1/10;

    r3=q2%10;
    q3=q2/10;

r4=q3%10;
q4=q3/10;

r5=q4%10;

cout<<endl;

if (r1>r2>r3>r4>r5)
{
    cout<<"print true 1";
}
else if (r1<r2<r3<r4<r5){
    cout<<"print true 2";
}
else if (r5>r4>r3>r2>r1){
    cout<<"print true 2";
}
else{
    cout<<"print true 3";
}
cout<<endl;
    cout<<r1<<endl;
  //  cout<<q1<<endl;
    cout<<r2<<endl;
    //cout<<q2<<endl;
    cout<<r3<<endl;
    //cout<<q3<<endl;
    cout<<r4<<endl;
    //cout<<q4<<endl;
    cout<<r5<<endl;
    

   


   
}