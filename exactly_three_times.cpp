#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main() 
{
    map<string, int> m;
    
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        m[s]++;
    }

    int count=0;

    for(auto i: m){
        if(i.second==3){
            count++;
        }
    }
    cout<<count;
}
//6
//+777777777
//+777777777
//+777777775
//+777777777
//+777777775
//+777777777

//0
