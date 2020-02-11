#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    vector<int> jack;
    vector<int> jill;
    int n,m,num;
    while(cin >> n >> m && (n || m)){
        for(int i = 0;i < n;i++){
            cin >> num;
            jack.push_back(num);
        }
        for(int i = 0;i < m;i++){
            cin >> num;
            jill.push_back(num);
        }
    }
    sort(jack.begin(), jack.end()); 
    sort(jill.begin(), jill.end()); 

    vector<int> v(jack.size() + jill.size()); 
    vector<int>::iterator it, st; 
    
    it = set_intersection(jack.begin(), 
                          jack.end(), 
                          jill.begin(), 
                          jill.end(), 
                          v.begin()); 
  
    v.resize(it-v.begin());

    cout << v.size() << endl;    
}

