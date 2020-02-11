#include <iostream>
#include <cstring>

using namespace std;
int main()
{
  int a,b;
  int result = 0;
  cin >> a >> b;
  for(int i = a;i <= b;i++){
      result += i;
      }
  cout << result << endl;
}

