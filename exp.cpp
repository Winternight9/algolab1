#include<iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n ;i++){
        cin >> a[i];
    }
    int count = 1;
    int totalexp = 0;
    for(int i = 0;i < n;i++){
        if(count == 4){
            totalexp += a[i]*2;
            count = 1;
        }
        else{
            totalexp += a[i];
            count += 1;
        }
    }
    cout << totalexp << endl;    

}