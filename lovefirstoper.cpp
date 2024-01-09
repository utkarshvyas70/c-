#include<iostream>
using namespace std;
int main(){
    // int a = 5;
    // int b = 10;

    // cout<< a+b <<endl;
    // cout<<a-b<<endl;
    // cout<< a*b<<endl;
    // cout<<b/a<<endl;
    // cout<<b%a<<endl;

    int a =20;
    int b = 10;
    cout<< (a>b)<< endl;
    cout<< (a<b)<< endl;
    cout<< (a>=b)<< endl;
    cout<< (a<=b)<< endl;
    cout<< (a==b)<< endl;
    cout<< (a!=b)<< endl;

    int age =20;
    int car = 12;
    if (age>= 18 && car>=1){
        cout << "licence"<< endl;
    }
    if (age>= 18 || car>=1){
        cout << "licence"<< endl;
    }

    int marks;
    cout<<"Enter marks"<<endl;
    cin>>marks;

    return 0;
}