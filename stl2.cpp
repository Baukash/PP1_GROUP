#include <iostream>
#include <stack>
#include <queue>
#include <deque>
using namespace std;

int main() 
{
    stack<int> s1; 
    int a;
    cin>>a;

    for(int i=0; i<a; i++){
        int x;
        cin>>x;
        s1.push(x);
    }

    stack<int> s2; // reverse order of s1
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }

    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }

    queue<int> q; //5 3 8
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        q.push(x);
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    
    deque<int> dq;  //double-ended queue    1 6 3 
    dq.push_back(3);
    dq.push_front(6);
    dq.push_back(8);
    dq.push_front(1);
    dq.push_front(5);

    dq.pop_back();
    dq.pop_front();

    for(int i: dq){
        cout<<i<<" ";
    }


}
// Last in First Out - LIFO
// First in First Out - FIFO


