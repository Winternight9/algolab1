#include<queue>
#include <iostream>

using namespace std;

int main(){
    queue <int> q;
    int sellflavor[21] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int n,t,num,id,out,flavor;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> t;
        if(t==1){
            cin >> num;

            for(int j = 0;j < num;j++){
                cin >> id; 
                cin >> flavor;
                q.push(id);
                q.push(flavor);
            }
        }
        if(t==2){
            cout << q.front() << endl;
            q.pop();
            out = q.front();
            q.pop();
            sellflavor[out] += 1;
        }
    }
    cout << (q.size()/2) << endl;
    for(int i =1;i < 21;i++){
        cout << sellflavor[i] << " " ;
    }
} 