#include<iostream>

using namespace std;

int calculate(int *list, int n , int k){
    bool stock = false;
    int money = 0;
    int diff = 0;
    int buyprice = 0;
    for(int i = 1;i < n ;i++){
        diff = list[i]-list[i-1];
        // buy
        if(diff >= k and stock == false){
            stock = true;
            buyprice = list[i];
        }
        // sell
        else if(diff <= -k and stock == true){
            stock = false;
            money += list[i];
            money -= buyprice;
        }
    }
    return money ;        
            
    }

int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i = 0;i < n ;i++){
        cin >> a[i];
    }
    cout << calculate(a,n,k) << endl;
    }
    

    




