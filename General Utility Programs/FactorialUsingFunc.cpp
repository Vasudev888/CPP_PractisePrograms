#include<iostream>
using namespace std;
long int factorial(int n);

int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << n <<"! is : "<< factorial(n) <<endl;
}

long int factorial(int n){
    if(n <=1 ){
        return(1);
    }
    else{
        n = n * factorial(n-1);
        return(n);
    }
}