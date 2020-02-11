#include <iostream>

using namespace std;  

int main(){
    int n,l,station,max=0,prev=0,shortest=1000000;
    cin >> n >>l;
    for(int i=0;i<n;i++){
        for(int j=0;j < l;j++){
            cin >> station;
            if(station - prev > max){
                max = station - prev;
            }
            prev = station;
        }
        if(max < shortest){
            shortest = max;
        }
        prev= 0;
        max = 0;
        
}
    cout << shortest << endl;
}


