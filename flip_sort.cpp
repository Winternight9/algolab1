#include <iostream>
using namespace std;

int bubble_sort(int a[], int n){
    int flip_count = 0;
    while(true) {
    bool changed = false;
    for(int i=0; i <n-1; i++) {
      // compares a[i] with a[i+1]
      if(a[i] > a[i+1]) {
        // wrong order, swap them;  don't forget to update changed variable     
    swap(a[i],a[i+1]);
    changed = true;
    flip_count++;
      }
    }
    if(!changed)
      break;
  }
  return flip_count;
}

int main()
{  
  int a[1000];
  int n;
  while(cin >> n){
  for(int i=0; i<n; i++){
    cin >> a[i];}
    cout << "Minimum exchange operations :" << ' ' << bubble_sort(a,n) << endl;
  }
}