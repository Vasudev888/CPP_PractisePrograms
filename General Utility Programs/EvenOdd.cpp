#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter a Integer : ";
    cin >> x;
    if(x % 2 == 0){
        cout << "Number is even \n";
    }
    else{
        cout << "Number is Odd \n";
    }
}