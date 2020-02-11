#include <iostream>
#include <string>

using namespace std;
int main()
{
  int k,n,m;
  int x[1000],y[1000];
  cin >> k;
  while(k !=0){
      cin >> n >> m;
      for(int i = 0;i<k;i++){
          cin >> x[i] >> y[i];
          }
      for(int i = 0 ;i<k;i++){
          if(x[i] == n or y[i]==m){
              cout << "divisa" << endl;}
          else if(x[i] > n and y[i] < m){
              cout << "SE" << endl;}
          else if(x[i] > n and y[i] > m){
              cout << "NE" << endl;}
          else if(x[i] < n and y[i] > m){
              cout << "NO" << endl;}
          else if(x[i] < n and y[i] < m){
              cout << "SO" << endl;}               
              }
      cin >> k;      
          }    
}

