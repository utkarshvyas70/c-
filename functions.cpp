#include<iostream>
using namespace std;

bool isEven(int a){
    // odd
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;

    if (isEven(num))
    {
        cout << "The number is even" << endl;
    }
    else{
        cout << "The number is odd" << endl;
    }
    
    
}