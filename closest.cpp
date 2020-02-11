#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> v;
int main() {
    int i,n;
    cin >> n ;
    for(int a =0 ;a <n ;a++){
        cin >> i ;
        v.push_back(i);
        }
    sort(v.begin(), v.end());
    int min = v[v.size()-1];
    for(int j = 0;j < n-1 ;j++){
        int diff = abs(v[j] - v[j+1]);
        if(diff < min){
            min = diff;}

    }
    cout << min << endl;
}
    
    
    