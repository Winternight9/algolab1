#include<iostream>

using namespace std;


int main(){    
    int n,s;
    cin >> n >> s;
    int a[n];
    int num;
    for(int i = 0;i < n;i++){
        cin >> num;
        a[i] = num;
    }

    int count = 0;
    int speed = 0;
    int maxspeed = 0;
        for(int i =0;i <= (a[n-1])+1;i++){
            if(i==a[count]){
                count +=1;
                speed += s;
                speed += 1;
            }
            if(speed > 0){
                speed -=1;
                 if(maxspeed < speed){
                maxspeed = speed;}
            }
            
        }
    cout << maxspeed << endl;
}