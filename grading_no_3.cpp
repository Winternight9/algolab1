#include <iostream>
#include <string>

using namespace std;
int main()
{
  int n;
  int x[100];
  cin >> n;
  for(int i =0;i < n; i++){
      cin >> x[i];
      }
  for(int i = 0;i < n ;i++){
      cout << abs((((((((x[i]*567)/9)+7492)*235)/47)-498)/10)%10) << endl;
      }
}

