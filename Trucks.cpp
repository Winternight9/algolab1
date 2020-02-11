#include<iostream>

using namespace std;

int main(){
int n;
int a =0;
cin >> n ;
int x[n];
for(int i =0;i<n;i++){
    cin >> x[i];
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<=n;j++){
        if(x[i] + x[j]<=1000){
        x[i] += x[j];
        x[j] = 1500;
        }      
    }
}
for(int i=0 ;i<n ;i++){
    if(x[i] <=1000){
    a++;
    }

}
cout << a << endl;
}