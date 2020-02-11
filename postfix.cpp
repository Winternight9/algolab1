#include <iostream>
#include <stack>
#include <iomanip>

using namespace std;

int main(){
    stack <double> s;
    double top1 =0,top2 = 0;
    double output;
    string operat = "";
    while (true)
    { cin >> operat;
    if(operat == "+" and s.size() >= 2)
        {
        top1 = s.top();
        s.pop();
        top2 = s.top();
        s.pop();
        s.push(top1 + top2);
        }
    else if(operat == "-" and s.size() >= 2)
        {
        top1 = s.top();
        s.pop();
        top2 = s.top();
        s.pop();
        s.push(top2 - top1);
        }
    else if(operat == "*" and s.size() >= 2)
        {
        top1 = s.top();
        s.pop();
        top2 = s.top();
        s.pop();
        s.push(top1 * top2);
        }
    else if(operat == "/" and s.size() >= 2)
        {
        top1 = s.top();
        s.pop();
        top2 = s.top();
        s.pop();
        s.push(top2 / top1);
        }        
    else if(operat == "=" and s.size() == 1){
        break;   
    }    
    else {
        s.push(stod(operat));
    }
    }
    cout << fixed << setprecision(4) << s.top() << endl;
    }
