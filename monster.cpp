#include <iostream>

using namespace std;  

int main(){
    int n,door,robot;
    int highest =0;
    
    cin >> n >> door;
    for(int i=0;i < n;i++){
       cin >> robot;
       if(robot <= door and robot > highest){
           highest = robot;
       }
    }
    cout << highest << endl;
}


