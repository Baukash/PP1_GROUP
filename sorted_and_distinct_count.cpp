#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main() 
{
    vector<int> v;
    int n;
    cin>>n;
    set<int> s;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
        s.insert(x);
    }
    
    sort(v.begin(), v.end());

    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl<<s.size();
}

//5
//1 2 3 4 1

//1 1 2 3 4
//4
