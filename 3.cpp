#include<bits/stdc++.h>
using namespace std;

template <class t>
t largest(t a,t b,t c)
{
    if(a>=b&&a>=c)
    return a;
    else if(b>=c)
    return b;
    else
    return c;
}

int main()
{
    cout<<largest<int>(3,5,0)<<endl;
    cout<<largest<float>(3,6.4,9.99)<<endl;
    cout<<largest<string>("satyam","shantanu","aayush")<<endl;
}
