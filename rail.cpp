#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n,target[1000];
    while (true)
    { 
        cin >> n;
        if(n==0){
            break;}
        while (true){
            stack <int> s;
            cin >> target[0];
            if(target[0]==0){
                cout << endl;
                break;}

        for(int i =1 ;i < n; i++){
            cin >> target[i];
        }
        int current = 1, targetindex = 0;
			while(current<=n){
				s.push(current);
				while(s.size() != 0 and s.top() == target[targetindex]){
					s.pop();
					targetindex++;
					if(targetindex>=n){
                    break;}
				}
				current++;
			}

			if(s.size() == 0){
                cout << "Yes" << endl;}
			else {
                cout << "No" << endl;}
		}}
    return 0;    
}
    








    
