#include <iostream>

using namespace std;  

int main(){
    int path1=0,path2=0;
    int max=0;
    int n;
    cin >> n;
    int min=n;
    string a;
    cin >> a;
    for(int i=0;i < n;i++){
        if(a[i] == '#'){
            path1 = i;
            path2 = (n - path1)-1 ;
            if(path2 >= path1){
                max = path2;
            }
            else{
                max = path1;
                }}
        if(max < min and max != 0){
            min = max;
        }       
        path1 =0;
        path2 =0;
        max = 0;
    }
    cout << min << endl;
}

