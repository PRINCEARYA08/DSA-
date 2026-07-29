#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the Number ";
    cin>>number;
    if (number>0)
    {
        
        if (number>5)
        {
            cout<<"number is greater then 5";
        }
        else{
            cout<<"number is possitive";
        }
        
    }
    else if (number<0)
    {
        cout<<"number negetive";
    }
    else {
        cout<<"number is zero";
    }
    

    return 0;
}
