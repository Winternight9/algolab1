#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> v;
int main() {
    int n,k,num;
    while(cin >> n >> k){
        for(int i = 0;i < n ;i++){
            cin >> num ;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        for(int i = 1;i <= n/k ;i++){
        cout << v[i*k -1] << endl;
        }
        }
    }   
    
    
    
    