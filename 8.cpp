#include<bits/stdc++.h>
using namespace std;

template <class t>
class stack1
{
    t a[100];
    int top;

   public:

    stack1():top(-1)
    {
      
    }

    void push(t i)
    {
        if(top==99)
        cout<<"stack is full "<<endl;
        else
        a[++top]=i;
    }

    t pop()
    {
        if(top==-1){
        cout<<"stack is empty ";
        return -1;
        }
        else
        return a[top--];
    }
    
};

int main()
{
    stack1<int> s;
    s.push(5);
    s.push(6);
    s.push(8);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    
}