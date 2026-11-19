#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int comp(int a, int b){
    if(a%2==0 and b%2==0){
        return a<b;
    }
    else if(a%2==1 and b%2==1){
        return a>b;
    }
    else if(a%2==0 and b%2==1){
        return 1;
    }
    else{
        return 0;
    }
}

int main() 
{                    
    vector<int> v;

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), comp);

    for(int i: v){
        cout<<i<<" ";
    }
}

//5
//1 2 3 4 5

//2 4 5 3 1
