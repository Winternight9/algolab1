#include<iostream>
#include <math.h>  

using namespace std;

void checklist(int *list ,int num){
    for(int i =0;i < 100000 ;i++){
        if(num == list[i]){
            break;}
        else if(list[i] == '\0'){
            list[i] = num;
            break;
        }
    }
}

int countlist(int count,int *list){
    for(int i = 0;i < 100000;i++){
        if(list[i] != '\0'){
            count += 1;
        }
        else if(list[i] == '\0'){
            break;
        }
    }
    return count;
    }
void prime_factors(int n,int *a) 
{   
    while (n%2 == 0) 
    { 
        checklist(a,2); 
        n = n/2; 
    } 
  
    
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            checklist(a,i); 
            n = n/i; 
        } 
    } 
    if (n > 2) 
        checklist(a,n); 
} 
  
int main() 
{   
    int n;
    int a[100000];
    int count = 0;
    cin >> n ;  
    prime_factors(n,a);  
    cout << countlist(count,a) << endl;
    
}