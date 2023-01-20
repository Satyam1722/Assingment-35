#include<bits/stdc++.h>
using namespace std;

template <class t>
t largest(t a,t b)
{
    if(a>b)
    return a;
    else
    return b;
}

int main()
{
    cout<<largest<int>(3,5)<<endl;
    cout<<largest<float>(3,6.4)<<endl;
    cout<<largest<string>("satyam","singh")<<endl;
}
