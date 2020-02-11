#include<iostream>
using namespace std;
#include <math.h>

int main(){
    int n;
    int total;
    cin >> n >> total;
    int a[n];
    int output[n];
    for(int i=0;i < n ;i++){
        cin >> a[i];
    }
    for(int i=n-1;i > -1;i--){
        int coupon = total/a[i];
        if(coupon >= 1){
        output[i] = (total/a[i]);
        total = total % a[i];
        }
        else { output[i] = 0;
        }
    }
    for(int i=0;i < n ;i++){
        cout << output[i] <<' ';
    }
}