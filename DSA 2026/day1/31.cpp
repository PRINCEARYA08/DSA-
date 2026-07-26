#include<iostream>
using namespace std;
int main(){
int mark;
    cin>>mark;
    if (mark>=75)
    {
      cout<<"A+";
    }
    else if(mark>=55){
        cout<<"B";
    }
     else if(mark>=45){
        cout<<"C";
    }
    else{
      cout<<"Fail";
    }
    
}
