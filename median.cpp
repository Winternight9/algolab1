#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> v;
int main() {
    int i;
    while(cin >> i){
        v.push_back(i);
        sort(v.begin(), v.end());
    if(v.size()%2 ==0){
       int med = (v[v.size()/2] + v[v.size()/2-1])/2;
       cout << med << endl;
    }
    else{
       cout << v[v.size()/2] << endl;
    }   
    }
    }
    
    