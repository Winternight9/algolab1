#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    int plateau = 0;
    int swamp = 0;
    bool plateaustatus = false;
    bool swampstatus = false;
    cin >> n ;
    int a[n];
    for(int i = 0;i < n ;i++){
        cin >> a[i];
    }
    int prev = a[1];
    int next = a[3];
    for(int i = 2;i < n ;i++){
        if(prev < a[i] and next <= a[i]){
            if(next == a[i]){
                plateau +=1;
                i++;
            }
        }
        else if(prev > a[i] and next >= a[i]){
            if(next == a[i]){
                swamp +=1;
                i++
            }
        }  
    prev = a[i];
    next = a[i+2];  
    }
    cout << plateau << swamp << endl;
}