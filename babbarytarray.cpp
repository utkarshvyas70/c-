#include<iostream>
using namespace std;

void printArray(){

}
int main(){
    // declare
    int number[15];

    // accessing an array
    cout << endl << "Value at index 0 " << number[12] << endl;


    // initialising
     int second[3]={5, 7, 11};

    //  accessing an element
    cout << "Value at index 2 is " << second[2] << endl;

    // print the array
    int third[15]={2,7};

    int n =15;
    cout << "Printing the array." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << third[i] << " " ;
    }


    // initialising all locations with 0
    int fourth[15]={0};

    int p =15;
    cout << "Printing the array." << endl;
    for (int i = 0; i < p; i++)
    {
        cout << fourth[i] << " " ;
    }


    int getMin(int num[] , int n){
        int min = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (num[i] < min)
            {
                min = num[i]
            }
            
        }
        return min;
        
    }


     int getMax(int num[] , int n){
        int min = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (num[i] > max)
            {
                max = num[i]
            }
            
        }
        return max;
        
    }
    
    int size;
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum value is " << getMax(num, size) << 
    
     
    return 0;
}