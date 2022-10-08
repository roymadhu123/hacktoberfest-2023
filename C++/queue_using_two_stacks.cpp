#include<bits/stdc++.h>

using namespace std;

class StackQueue{
private:
    stack<int> s1;
    stack<int> s2;
public:
    void push(int B);
    int pop();

};
int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        StackQueue *sq = new StackQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }


}
// } Driver Code Ends


/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

//Function to push an element in queue by using 2 stacks.
void StackQueue :: push(int x)
{
    
        // while(!s1.empty()){
        //     s2.push(s1.top());
        //     s1.pop();
        // }
        // s1.push(x);
        // while(!s2.empty()){
        //     s1.push(s2.top());
        //     s2.pop();
        // }
        s1.push(x);
    
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code    
        // int ans;
        // if(!s1.empty()){
        //     ans=s1.top();
        //     s1.pop();
        // }
        // else{
        //     ans=-1;
        // }
        // return -1;
        //OR
        int ans;
        if(!s2.empty()){
            ans=s2.top();
            s2.pop();
        }
        else {
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
           if(!s2.empty()){
            ans=s2.top();
            s2.pop();
        }
        else{
            ans=-1;
        }
        }
        return ans;
}
