#include<iostream>
#include <algorithm>  

using namespace std;

int main(){
    int i,j;
    cin >> i >> j;
    int a = __gcd(i,j);
    i/=a;
    j/=a;
    cout << i << "/" << j;

}