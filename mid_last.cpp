#include<iostream>

using namespace std;


int calculate(int n,int k){
    if (n == 1) 
    return 1; 
    else
    return (calculate(n - 1, k) + k-1) % n + 1; 
}


int main(){   
    int n,k;
    cin >> n >> k; 
    cout << calculate(n,k);

}