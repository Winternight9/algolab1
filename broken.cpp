#include <iostream>
#include <list>
using namespace std;


int main(){
    string input;

    while(cin >> input){
        list<char> line;
        
        int len = input.length();
        
        list<char>::iterator lis = line.begin();

        for(int i=0; i<len; i++){
            char check = input.at(i);
            if(check == '['){
                lis = line.begin();
            }else if(check == ']'){
                lis = line.end();
            }else{
                line.insert(lis,check);
            }
        }
        for(auto si=line.begin(); si != line.end(); si++)
            cout << *si;
        cout << endl;
    }
}