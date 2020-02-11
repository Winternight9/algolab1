#include<iostream>

using namespace std;

int main(){
    int n;
    int prev =0;
    int count = 0;
    cin >> n ;
    int a[n];
    for(int i = 0;i < n ;i++){
        cin >> a[i];
          
    }
    for(int i = 0;i < n;i++){
        if(prev == 1000){
            prev = 0;
        }
        else if(a[i] > 1000 ){    
            count += 1000;
            prev = 1000;
        }
        else{
            prev = a[i];
            count += a[i];
        }
        }
    cout << count << endl;    
    }
