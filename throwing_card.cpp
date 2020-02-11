#include <iostream>
#include <list>
#include <algorithm>
using namespace std;


int main(){
    
    int n;
    while(cin >> n){
        list<int> v;
        int dis[50];
        int count = 0;
        if(n == 0){
            break;
        }
        for(int i = 1;i <= n;i++){
            v.push_back(i);
        } 
        while(v.size() != 1){
            dis[count] = v.front();
            v.pop_front();
            int a = v.front();
            v.push_back(a);
            v.pop_front();
            count += 1;
    }
    cout << "Discarded cards:";
    for(int i = 0;i < n-2;i++){
        cout << " "<< dis[i] << ",";}
    if(count != 0){
    cout << " " << dis[n-2];}
    cout << endl; 
    cout << "Remaining card:" << " "<< v.front() << endl;

}
}