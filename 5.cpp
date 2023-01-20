#include<bits/stdc++.h>
using namespace std;

template <class t>
t addition(t a,t b)
{
    return a+b;
}

int main()
{
    cout<<addition<int>(3,5)<<endl;
    cout<<addition<float>(3,6.4)<<endl;
    cout<<addition<string>("satyam"," singh")<<endl;
}
