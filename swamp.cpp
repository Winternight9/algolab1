#include<iostream>

using namespace std;

int main(){
int n;
int plateau = 0;
int swamp = 0;
bool plateaustatus = false;
bool swampstatus = false;
cin >> n ;
int a[n];
for(int i =0;i<n;i++){
    cin >> a[i];
}

for(int i = 2;i < n -1 ;i++){
        if(a[i-1] < a[i] and a[i+1] <= a[i]){
            if(a[i+1] == a[i] and a[i+2] <= a[i+1]){
                cout << "aaaa" <<a[i] << a[i+1] << endl;   
                i++;
                }
            else if(a[i+1] == a[i] and a[i+2] >= a[i+1]){
                continue;
            }
            else{
                plateau +=1;
            cout << "bbbb"<<  a[i] << endl;    
            }    
            }
        
        else if(a[i-1] > a[i] and a[i+1] >= a[i]){
            if(a[i+1] == a[i] and a[i+2] >= a[i+1]){
                swamp +=2;
                cout << "cccc" <<a[i] << a[i+1] << endl;   
                i++;
            }
            else if(a[i+1] == a[i] and a[i+2] <= a[i+1]){
                continue;
            }
            else{
                swamp += 1;
                cout << "dddd" << a[i] << endl; 
            }
        }
}
    cout << plateau << ' ' << swamp << endl;
}
