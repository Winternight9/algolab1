#include <iostream>
#include <string>


using namespace std;

int calculate(int i,int j){
    int maxcount = 0;
    int check = 0;
    int temp;
    if(i>j){
        temp = j;
        j = i;
        i = temp;
        }

    for(int n = i;n <=j;n++){
        int count =0;
        check = n;
        while (check > 1){
            if(check%2 == 1){
                check = (3*check)+1;
                count += 1;
            }
            else{
                check = check/2;
                count += 1;
            }
        }
        count++;
        if(count > maxcount){
            maxcount = count;
        }
    }
    return maxcount;
}

int main(){
    int i, j;
    while(cin >> i >> j){
    cout << i << ' ' << j << ' '  << calculate(i,j) << endl;
    }
}