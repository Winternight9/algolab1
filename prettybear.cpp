#include <iostream>

using namespace std;  

int main(){
    int n,a,b;
    int count;
    
    cin >> n;
    count = n; 
    for(int i=0;i < n;i++){
        cin >> a >> b;
        if(a<100){
            count -=1;
        }
        else if(a>750){
            count -=1;
        }
        else if(b < 80){
            count -=1;
        }
        
    }
    cout << count << endl;
}

