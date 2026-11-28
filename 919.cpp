#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    queue<string> q;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;

        if(s=="ARRIVE"){
            string name;
            cin>>name;
            cout<<name<<" joined the line\n";
            q.push(name);
        }
        else if(s=="SERVE"){
            cout<<q.front()<<" has been served\n";
            q.pop();
        }
        else if(s=="SHOW"){
            queue<string> q1 = q;

            cout<<"Line: ";
            while(!q1.empty()){
                cout<<q1.front()<<" ";
                q1.pop();
            }
            cout<<endl;
        }
    }
}



//ARRIVE name
//SERVE
//SHOW - show queue

//5
//ARRIVE Magzhan            Magzhan joined the line
//ARRIVE Alina              Alina joined the line
//SERVE                     Magzhan has been served
//SHOW                      Line: Alina
//SERVE                     Alina has been served
