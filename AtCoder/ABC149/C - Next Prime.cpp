#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;
}

int main() 
{
    int x;
    cin >> x;
    for (int i=x; ; i++)
        if (isPrime(i))
            return cout << i, 0;
}