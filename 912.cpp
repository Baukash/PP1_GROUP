#include <iostream>
#include <stack>
using namespace std;

int main() 
{
    stack<char> s;
    string n;
    cin>>n;
    s.push('q');

    for(int i=0; i<n.size(); i++){
        if(n[i]=='1' && s.top()=='1'){
            s.pop();   
        }
        else{
            s.push(n[i]);
        }
    }

    stack<char> s2;

    while(!s.empty()){
        s2.push(s.top());
        s.pop();
    }

    while(!s2.empty()){
        if(s2.top()=='q'){
            s2.pop();
        }
        else{
            cout<<s2.top();
            s2.pop();
        }
    }


}

//0111
/*
1)s={'q'}, n[0] = '0', s={'q','0'}
2)s={'q', '0'}, n[1] = '1', s={'q','0','1'}
3)s={'q','0','1'}, n[2] = '1', s={'q','0'}
4)s={'q', '0'}, n[3]=1, s={'q','0','1'}
*/
