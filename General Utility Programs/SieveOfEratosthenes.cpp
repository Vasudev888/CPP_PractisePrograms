//SieveofEratosthenes
#include<iostream>
#include <cstring>
using namespace std;

void SieveOfEratosthenes(int n){
    //Create a bool array "prime[0...n] and initalise
    //all entries it as true.
    //A value in prime[i] will finally be false if i is Not a prime,
    //else true.

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for(int p = 2; p * p <= n; p++){
        //If prime[p] is not changed, then it is a prime.
        if(prime[p] == true){
            
        }
    }
}

int main(){

}