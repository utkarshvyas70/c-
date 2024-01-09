#include<iostream>
using namespace std;
int main(){
    // int balance;
    // cout<<"enter the amount"<<endl;
    // cin>>balance;
    // if (balance>10)
    // {
    //     cout<<"Maggi"<<endl;
    // }
    // else if (balance==10)
    // {
    //     cout<<"fbfbd"<<endl;
    // }
    
    // else{
    //     cout<<"Kurkure"<<endl;
    // }

    // for ( int i = 1; i <= 8; i++)
    // {
    //     cout << "Babbar" <<endl;
    // }

    for (int i = 0; i < 3; i++)
    {
        cout << endl << "Outer loop" <<i<<endl <<endl;
        for (int j = 0; j < 3; j++)
        {
            cout<<"Inner loop"<<j<<endl;
        }
        
    }
    
    
    return 0;

}