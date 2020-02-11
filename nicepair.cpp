#include<iostream>

using namespace std;


int main(){
    int n;
    int weight;
    cin >> n >> weight;
    int paper_w[n];
    int color[n];
    int count = 0;
    for(int i = 0;i < n ;i++){
        cin >> paper_w[i] >> color[i];
    }
    for(int i = 0;i < n ;i++){
        for(int j = i+1;j < n;j++){
            int twopaper = paper_w[i] + paper_w[j];
            if(color[i] == color[j]){
                continue;
            }
            else if(twopaper == weight and color[i] != color[j]){
                count += 1;
            }
        }
    }
    cout << count ;
}