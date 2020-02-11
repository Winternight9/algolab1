#include <iostream>

using namespace std;  

int main(){
    int n,a,b;
    int price;
    
    cin >> n;
    price = 0; 
    for(int i=0;i < n;i++){
        cin >> a >> b;
        if(a*0.75 >= b){
            price += 5;
        }
        else
        {
            price += 3;
        }
    }
    cout << price << endl;
}

