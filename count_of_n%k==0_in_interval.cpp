#include <iostream>
using namespace std;

void func(int l, int r, int k){
    int count=0;

    for(int i=l; i<=r; i++){
        if(i%k==0){
            count++;
        }
    }

    cout<<count;
}


int main() 
{
    int l, r, k;
    cin>>l>>r>>k;

    func(l, r, k);
}
